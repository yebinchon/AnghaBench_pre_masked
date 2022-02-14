
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PKULL_M_KEY_CNG_PROPERTY ;
typedef size_t DWORD ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (size_t,int ) ;

void FUNC_2(DWORD VAR_0, PKULL_M_KEY_CNG_PROPERTY *VAR_1, DWORD VAR_2)
{
 DWORD VAR_3;
 if(VAR_2 && VAR_1)
 {
  FUNC_0(L"%u field(s)\n", VAR_2);
  for(VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
   FUNC_1(VAR_0, VAR_1[VAR_3]);
 }
}
