
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ECPGgeneric_varchar {char* arr; int len; } ;
typedef enum ECPGttype { ____Placeholder_ECPGttype } ECPGttype ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int,int ,int ,int *) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static bool
FUNC_4(int VAR_2, void *VAR_3, enum ECPGttype VAR_4, char *VAR_5, int VAR_6)
{
 switch (VAR_4)
 {
  case 131:
  case 129:
  case 130:
   FUNC_3((char *) VAR_3, VAR_5, VAR_6);
   break;
  case 128:
   {
    struct ECPGgeneric_varchar *VAR_7 =
    (struct ECPGgeneric_varchar *) VAR_3;

    if (VAR_6 == 0)
     FUNC_1(VAR_7->arr, VAR_5, FUNC_2(VAR_5));
    else
     FUNC_3(VAR_7->arr, VAR_5, VAR_6);

    VAR_7->len = FUNC_2(VAR_5);
    if (VAR_6 > 0 && VAR_7->len > VAR_6)
     VAR_7->len = VAR_6;
   }
   break;
  default:
   FUNC_0(VAR_2, VAR_1, VAR_0, ((void*)0));
   return 0;
 }

 return 1;
}
