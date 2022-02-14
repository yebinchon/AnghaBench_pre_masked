
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (int,char**,char*,int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 () ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 () ;
 int FUNC_9 (int *,char*,int) ;
 int FUNC_10 () ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int VAR_30 ;
 int FUNC_13 () ;
 int VAR_31 ;
 int FUNC_14 () ;

int FUNC_15(int VAR_32, char *VAR_33[])
{
 int VAR_34;
 int VAR_35;
 char *VAR_36;

 VAR_8 = FUNC_5();

 while ((VAR_34 = FUNC_4(VAR_32, VAR_33, "aABd::DefhilLnN:oPrsStTUvXz1",
      VAR_6, ((void*)0))) != -1)
  switch (VAR_34) {
  case 'a':
   VAR_12 = 1;
   break;
  case 'A':
   VAR_26 = 1;
   break;
  case 'B':
   VAR_13 = 1;
   break;
  case 'd':
   VAR_10 = 1;
   if (!FUNC_2(VAR_3))
    FUNC_3("Invalid debug option '%s'\n", VAR_3);
   break;
  case 'D':
   VAR_11 = 1;
   break;
  case 'e':
   VAR_14 = 1;
   break;
  case 'f':
   VAR_15 = 1;
   break;
  case 'h':
   FUNC_13();
   return 0;
  case 'i':
   VAR_16 = 1;
   break;
  case 'l':
   VAR_21 = 1;
   break;
  case 'L':
   VAR_27 = 1;
   break;
  case 'n':
   VAR_17 = 1;
   break;
  case 'N':
   if (VAR_3) {
    VAR_7 = FUNC_1(VAR_3);
    if (VAR_7 < 1)
     VAR_7 = 1;
   }
   break;
  case 'o':
   VAR_18 = 1;
   break;
  case 'r':
   VAR_19 = 1;
   break;
  case 'P':
   VAR_28 = 1;
   break;
  case 's':
   VAR_24 = 1;
   break;
  case 'S':
   VAR_29 = 1;
   break;
  case 't':
   VAR_23 = 1;
   break;
  case 'T':
   VAR_22 = 1;
   break;
  case 'U':
   VAR_30 = 1;
   break;
  case 'v':
   VAR_31 = 1;
   break;
  case 'X':
   if (VAR_7 == -1)
    VAR_7 = 1;
   VAR_2 = 1;
   VAR_13 = 1;
   break;
  case 'z':
   VAR_25 = 0;
   break;
  case '1':
   VAR_20 = 1;
   break;
  default:
   FUNC_3("%s: Invalid option '%c'\n", VAR_33[0], VAR_5);

 }

 if (!VAR_21 && !VAR_12 && !VAR_23 && !VAR_19
  && !VAR_31 && !VAR_24 && !VAR_10 && !VAR_18)
   VAR_21 = 1;

 if (VAR_32 > VAR_4)
  VAR_36 = VAR_33[VAR_4];
 else
  VAR_36 = ".*";

 VAR_35 = FUNC_9(&VAR_9, VAR_36, VAR_0|VAR_1);
 if (VAR_35)
  FUNC_3("%s: Invalid pattern '%s' code %d\n",
   VAR_33[0], VAR_36, VAR_35);
 FUNC_8();
 if (VAR_12) {
  FUNC_0();
 } else if (VAR_2) {
  FUNC_14();
 } else if (VAR_22) {
  FUNC_12();
 } else {
  FUNC_6();
  FUNC_10();
  FUNC_11();
  FUNC_7();
 }
 return 0;
}
