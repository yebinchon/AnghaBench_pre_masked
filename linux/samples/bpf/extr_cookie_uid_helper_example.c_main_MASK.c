
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int,int ,char*) ;
 int VAR_4 ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char*) ;
 int VAR_6 ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 int FUNC_10 () ;
 int FUNC_11 () ;

int FUNC_12(int VAR_8, char *VAR_9[])
{
 int VAR_10;
 bool VAR_11 = 0;
 bool VAR_12 = 0;

 if (VAR_8 != 3)
  return FUNC_11();
 while ((VAR_10 = FUNC_2(VAR_8, VAR_9, "ts")) != -1) {
  switch (VAR_10) {
  case 't':
   VAR_11 = 1;
   break;
  case 's':
   VAR_12 = 1;
   break;

  default:
   FUNC_5("unknown option %c\n", VAR_10);
   FUNC_11();
   return -1;
  }
 }
 FUNC_3();
 FUNC_7();
 FUNC_6(VAR_9[2]);
 if (VAR_11) {
  if (FUNC_8(VAR_0, VAR_4) == VAR_2)
   FUNC_1(1, VAR_3, "register SIGINT handler failed");
  if (FUNC_8(VAR_1, VAR_4) == VAR_2)
   FUNC_1(1, VAR_3, "register SIGTERM handler failed");
  while (!VAR_7) {
   FUNC_4();
   FUNC_5("\n");
   FUNC_9(1);
  };
 } else if (VAR_12) {
  FUNC_10();
 }
 FUNC_0(VAR_6);
 FUNC_0(VAR_5);
 return 0;
}
