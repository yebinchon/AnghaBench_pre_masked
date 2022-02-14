
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int YYSTYPE ;
typedef int YYLTYPE ;


 int FUNC_0 (int) ;







 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;
 int FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;

int
FUNC_2(void)
{
 int VAR_13;
 int VAR_14;
 int VAR_15;
 YYSTYPE VAR_16;
 YYLTYPE VAR_17;
 char *VAR_18;


 if (VAR_6)
 {
  VAR_13 = VAR_9;
  VAR_4 = VAR_11;
  VAR_3 = VAR_10;
  VAR_5 = VAR_12;
  *VAR_7 = VAR_8;
  VAR_6 = 0;
 }
 else
  VAR_13 = FUNC_1();







 switch (VAR_13)
 {
  case 133:
   VAR_15 = 3;
   break;
  case 132:
   VAR_15 = 5;
   break;
  case 128:
   VAR_15 = 4;
   break;
  default:
   return VAR_13;
 }






 VAR_7 = VAR_5 + VAR_15;
 FUNC_0(*VAR_7 == '\0');


 VAR_16 = VAR_4;
 VAR_17 = VAR_3;
 VAR_18 = VAR_5;


 VAR_14 = FUNC_1();

 VAR_9 = VAR_14;
 VAR_11 = VAR_4;
 VAR_10 = VAR_3;
 VAR_12 = VAR_5;

 VAR_4 = VAR_16;
 VAR_3 = VAR_17;
 VAR_5 = VAR_18;


 VAR_8 = *VAR_7;
 *VAR_7 = '\0';

 VAR_6 = 1;


 switch (VAR_13)
 {
  case 133:

   switch (VAR_14)
   {
    case 139:
    case 136:
    case 134:
    case 137:
    case 130:
     VAR_13 = VAR_0;
     break;
   }
   break;

  case 132:

   switch (VAR_14)
   {
    case 138:
    case 135:
     VAR_13 = VAR_1;
     break;
   }
   break;

  case 128:

   switch (VAR_14)
   {
    case 129:
    case 131:
     VAR_13 = VAR_2;
     break;
   }
   break;
 }

 return VAR_13;
}
