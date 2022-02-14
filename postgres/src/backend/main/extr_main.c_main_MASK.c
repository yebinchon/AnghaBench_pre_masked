
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char**,int *,int ) ;
 int FUNC_5 (int,char**) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int ,char*) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_7 ;
 char** FUNC_18 (int,char**) ;
 int FUNC_19 (char*,int ) ;
 int FUNC_20 (int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_21 (char*,char*) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (char*,char*,int) ;
 int FUNC_24 (char*) ;

int
FUNC_25(int VAR_9, char *VAR_10[])
{
 bool VAR_11 = 1;
 VAR_7 = FUNC_12(VAR_10[0]);




 FUNC_20(VAR_7);
 VAR_10 = FUNC_18(VAR_9, VAR_10);
 FUNC_2();




 FUNC_19(VAR_10[0], FUNC_3("postgres"));
 FUNC_15("LC_COLLATE", VAR_0, "");
 FUNC_15("LC_CTYPE", VAR_1, "");
 FUNC_15("LC_MONETARY", VAR_3, "C");
 FUNC_15("LC_NUMERIC", VAR_4, "C");
 FUNC_15("LC_TIME", VAR_5, "C");






 FUNC_24("LC_ALL");

 FUNC_9();





 if (VAR_9 > 1)
 {
  if (FUNC_21(VAR_10[1], "--help") == 0 || FUNC_21(VAR_10[1], "-?") == 0)
  {
   FUNC_14(VAR_7);
   FUNC_10(0);
  }
  if (FUNC_21(VAR_10[1], "--version") == 0 || FUNC_21(VAR_10[1], "-V") == 0)
  {
   FUNC_11(VAR_6, VAR_8);
   FUNC_10(0);
  }
  if (FUNC_21(VAR_10[1], "--describe-config") == 0)
   VAR_11 = 0;
  else if (VAR_9 > 2 && FUNC_21(VAR_10[1], "-C") == 0)
   VAR_11 = 0;
 }





 if (VAR_11)
  FUNC_8(VAR_7);
 if (VAR_9 > 1 && FUNC_21(VAR_10[1], "--boot") == 0)
  FUNC_0(VAR_9, VAR_10);
 else if (VAR_9 > 1 && FUNC_21(VAR_10[1], "--describe-config") == 0)
  FUNC_1();
 else if (VAR_9 > 1 && FUNC_21(VAR_10[1], "--single") == 0)
  FUNC_4(VAR_9, VAR_10,
      ((void*)0),
      FUNC_22(FUNC_13(VAR_7)));
 else
  FUNC_5(VAR_9, VAR_10);
 FUNC_7();
}
