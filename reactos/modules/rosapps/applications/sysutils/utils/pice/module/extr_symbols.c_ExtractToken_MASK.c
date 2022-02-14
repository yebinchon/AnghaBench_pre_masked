
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPSTR ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;
 char* VAR_0 ;
 size_t VAR_1 ;

void FUNC_2(LPSTR VAR_2)
{
 while(FUNC_0(VAR_0[VAR_1]) || FUNC_1(VAR_0[VAR_1]) || VAR_0[VAR_1]=='_')
 {
  *VAR_2++=VAR_0[VAR_1++];
  *VAR_2=0;
 }
}
