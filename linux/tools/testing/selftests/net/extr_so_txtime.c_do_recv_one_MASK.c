
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timed_send {scalar_t__ delay_us; char data; } ;
typedef int rbuf ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int ,char*,char,int,int) ;
 int FUNC_2 () ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_5(int VAR_4, struct timed_send *VAR_5)
{
 int64_t VAR_6, VAR_7;
 char VAR_8[2];
 int VAR_9;

 VAR_9 = FUNC_4(VAR_4, VAR_8, sizeof(VAR_8), 0);
 if (VAR_9 == -1)
  FUNC_0(1, VAR_1, "read");
 if (VAR_9 != 1)
  FUNC_0(1, 0, "read: %dB", VAR_9);

 VAR_6 = (FUNC_2() - VAR_2) / 1000;
 VAR_7 = VAR_5->delay_us >= 0 ? VAR_5->delay_us : 0;

 FUNC_1(VAR_3, "payload:%c delay:%d expected:%d (us)\n",
   VAR_8[0], VAR_6, VAR_7);

 if (VAR_8[0] != VAR_5->data)
  FUNC_0(1, 0, "payload mismatch. expected %c", VAR_5->data);

 if (FUNC_3(VAR_6 - VAR_7) > VAR_0)
  FUNC_0(1, 0, "exceeds variance (%d us)", VAR_0);
}
