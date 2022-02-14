
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_1 (char*,char*) ;

void FUNC_2(DWORD VAR_2)
{
 DWORD VAR_3;
 for(VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++)
  if((VAR_2 >> VAR_3) & 1)
   FUNC_1(L"%s ; ", VAR_1[VAR_3]);
 if(VAR_2 & VAR_0)
  FUNC_1(L"%s ; ", L"system");
}
