
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,int,char*,char const*,char const*) ;

__attribute__((used)) static char *FUNC_6(const char *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 char VAR_6[VAR_1];
 static char VAR_7[129];

 FUNC_2(VAR_7, 0, sizeof(VAR_7));
 FUNC_5(VAR_6, sizeof(VAR_6) - 1, "/sys/bus/usb/devices/%s/%s", VAR_2, VAR_3);

 if ((VAR_4 = FUNC_3(VAR_6, VAR_0)) >= 0)
 {
  VAR_5 = FUNC_4(VAR_4, VAR_7, sizeof(VAR_7) - 1);
  FUNC_0(VAR_4);
 }

 while (--VAR_5 > 0 && FUNC_1(VAR_7[VAR_5]))
  VAR_7[VAR_5] = 0;

 return (VAR_5 >= 0) ? VAR_7 : ((void*)0);
}
