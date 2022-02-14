
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(LPCWSTR VAR_3)
{
 if (VAR_3[0] == '.') {
  if (VAR_3[1] == '\0')
   return VAR_0;

  if (VAR_3[1]=='.' && VAR_3[2]=='\0')
   return VAR_1;
 }

 return VAR_2;
}
