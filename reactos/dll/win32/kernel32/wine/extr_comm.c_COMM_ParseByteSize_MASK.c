
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPCWSTR ;
typedef int* LPBYTE ;
typedef int DWORD ;


 int * FUNC_0 (int *,int*) ;

__attribute__((used)) static LPCWSTR FUNC_1(LPCWSTR VAR_0, LPBYTE VAR_1)
{
 DWORD VAR_2;

 if(!(VAR_0 = FUNC_0(VAR_0, &VAR_2)))
  return ((void*)0);

 if(VAR_2 >= 5 && VAR_2 <= 8)
 {
  *VAR_1 = VAR_2;
  return VAR_0;
 }
 else
  return ((void*)0);
}
