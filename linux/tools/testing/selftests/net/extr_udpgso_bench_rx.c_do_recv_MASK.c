
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_8 ;
 int FUNC_5 (int,int ,char*,...) ;
 int FUNC_6 (int ,char*,char*,int,scalar_t__) ;
 int FUNC_7 () ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_8 (int,int ,int ,int*,int) ;
 int VAR_11 ;

__attribute__((used)) static void FUNC_9(void)
{
 int VAR_12 = VAR_7 ? VAR_6 : VAR_3;
 unsigned long VAR_13, VAR_14;
 int VAR_15;

 VAR_15 = FUNC_4(VAR_7);

 if (VAR_5 && !VAR_7) {
  int VAR_16 = 1;
  if (FUNC_8(VAR_15, VAR_0, VAR_1, &VAR_16, sizeof(VAR_16)))
   FUNC_5(1, VAR_8, "setsockopt UDP_GRO");
 }

 VAR_14 = FUNC_7() + 1000;
 do {
  FUNC_3(VAR_15, VAR_12);

  if (VAR_7)
   FUNC_1(VAR_15);
  else
   FUNC_2(VAR_15);

  VAR_13 = FUNC_7();
  if (VAR_13 > VAR_14) {
   if (VAR_10)
    FUNC_6(VAR_11,
     "%s rx: %6d MB/s %8lu calls/s\n",
     VAR_7 ? "tcp" : "udp",
     VAR_2 >> 20, VAR_10);
   VAR_2 = VAR_10 = 0;
   VAR_14 = VAR_13 + 1000;
  }

  VAR_12 = VAR_6;

 } while (!VAR_9);

 if (VAR_4 && (VAR_10 != VAR_4))
  FUNC_5(1, 0, "wrong packet number! got %ld, expected %d\n",
        VAR_10, VAR_4);

 if (FUNC_0(VAR_15))
  FUNC_5(1, VAR_8, "close");
}
