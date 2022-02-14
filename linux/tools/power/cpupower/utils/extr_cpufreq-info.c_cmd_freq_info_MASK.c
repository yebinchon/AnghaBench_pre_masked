
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char*) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (unsigned int) ;
 int FUNC_10 (unsigned int) ;
 int FUNC_11 (unsigned int) ;
 int FUNC_12 (unsigned int,unsigned int) ;
 int FUNC_13 (unsigned int,unsigned int) ;
 int FUNC_14 (unsigned int,unsigned int) ;
 int FUNC_15 (unsigned int,unsigned int) ;
 int FUNC_16 (unsigned int,unsigned int) ;
 int FUNC_17 (unsigned int) ;
 int FUNC_18 (unsigned int) ;
 int FUNC_19 (int,char**,char*,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_20 (char*,...) ;
 int FUNC_21 () ;
 int VAR_6 ;
 int FUNC_22 (unsigned int) ;

int FUNC_23(int VAR_7, char **VAR_8)
{
 extern char *VAR_9;
 extern int VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0, VAR_14 = 1;
 unsigned int VAR_15 = 0;
 unsigned int VAR_16 = 0;
 int VAR_17 = 0;

 do {
  VAR_13 = FUNC_19(VAR_7, VAR_8, "oefwldpgrasmybn", VAR_4,
      ((void*)0));
  switch (VAR_13) {
  case '?':
   VAR_17 = '?';
   VAR_14 = 0;
   break;
  case -1:
   VAR_14 = 0;
   break;
  case 'b':
  case 'o':
  case 'a':
  case 'r':
  case 'g':
  case 'p':
  case 'd':
  case 'l':
  case 'w':
  case 'f':
  case 'e':
  case 's':
  case 'y':
   if (VAR_17) {
    VAR_17 = -1;
    VAR_14 = 0;
    break;
   }
   VAR_17 = VAR_13;
   break;
  case 'm':
   if (VAR_16) {
    VAR_17 = -1;
    VAR_14 = 0;
    break;
   }
   VAR_16 = 1;
   break;
  case 'n':
   VAR_5 = 1;
   break;
  default:
   FUNC_7(VAR_6, "invalid or unknown argument\n");
   return VAR_1;
  }
 } while (VAR_14);

 switch (VAR_17) {
 case 'o':
  if (!FUNC_2(VAR_3)) {
   FUNC_20(FUNC_0("The argument passed to this tool can't be "
     "combined with passing a --cpu argument\n"));
   return -VAR_0;
  }
  break;
 case 0:
  VAR_17 = 'e';
 }

 VAR_13 = 0;


 if (FUNC_2(VAR_3))
  FUNC_5(VAR_3, 0);

 switch (VAR_17) {
 case -1:
  FUNC_20(FUNC_0("You can't specify more than one --cpu parameter and/or\n"
         "more than one output-specific argument\n"));
  return -VAR_0;
 case '?':
  FUNC_20(FUNC_0("invalid or unknown argument\n"));
  return -VAR_0;
 case 'o':
  FUNC_21();
  return VAR_2;
 }

 for (VAR_15 = FUNC_1(VAR_3);
      VAR_15 <= FUNC_4(VAR_3); VAR_15++) {

  if (!FUNC_3(VAR_3, VAR_15))
   continue;

  FUNC_20(FUNC_0("analyzing CPU %d:\n"), VAR_15);

  if (FUNC_22(VAR_15) != 1) {
   FUNC_20(FUNC_0(" *is offline\n"));
   FUNC_20("\n");
   continue;
  }

  switch (VAR_17) {
  case 'b':
   FUNC_10(VAR_15);
   break;
  case 'e':
   FUNC_6(VAR_15);
   break;
  case 'a':
   VAR_13 = FUNC_8(VAR_15);
   break;
  case 'r':
   VAR_13 = FUNC_18(VAR_15);
   break;
  case 'g':
   VAR_13 = FUNC_9(VAR_15);
   break;
  case 'p':
   VAR_13 = FUNC_17(VAR_15);
   break;
  case 'd':
   VAR_13 = FUNC_11(VAR_15);
   break;
  case 'l':
   VAR_13 = FUNC_15(VAR_15, VAR_16);
   break;
  case 'w':
   VAR_13 = FUNC_12(VAR_15, VAR_16);
   break;
  case 'f':
   VAR_13 = FUNC_13(VAR_15, VAR_16);
   break;
  case 's':
   VAR_13 = FUNC_14(VAR_15, VAR_16);
   break;
  case 'y':
   VAR_13 = FUNC_16(VAR_15, VAR_16);
   break;
  }
  if (VAR_13)
   return VAR_13;
 }
 return VAR_13;
}
