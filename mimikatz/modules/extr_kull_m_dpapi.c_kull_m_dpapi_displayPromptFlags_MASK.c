
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(DWORD VAR_1)
{
 DWORD VAR_2;
 for(VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if((VAR_1 >> VAR_2) & 1)
   FUNC_1(L"%s ; ", VAR_0[VAR_2]);
}
