
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPDWORD ;
typedef char* LPCWSTR ;


 int FUNC_0 (char*,int *,int) ;

__attribute__((used)) static LPCWSTR FUNC_1(LPCWSTR VAR_0, LPDWORD VAR_1)
{
 if(*VAR_0 < '0' || *VAR_0 > '9') return ((void*)0);
 *VAR_1 = FUNC_0(VAR_0, ((void*)0), 10);
 while(*VAR_0 >= '0' && *VAR_0 <= '9') VAR_0++;
 return VAR_0;
}
