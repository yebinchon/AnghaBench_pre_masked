
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PCWSTR ;
typedef int * PBYTE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *,scalar_t__*,int *,int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

BOOL FUNC_3(PCWSTR VAR_3, PBYTE *VAR_4, DWORD *VAR_5)
{
 BOOL VAR_6 = VAR_1;
 *VAR_4 = ((void*)0);
 *VAR_5 = 0;
 if(FUNC_0(VAR_3, 0, VAR_0, ((void*)0), VAR_5, ((void*)0), ((void*)0)))
 {
  if((*VAR_4 = (PBYTE) FUNC_1(VAR_2, *VAR_5)))
  {
   VAR_6 = FUNC_0(VAR_3, 0, VAR_0, *VAR_4, VAR_5, ((void*)0), ((void*)0));
   if(!VAR_6)
    *VAR_4 = (PBYTE) FUNC_2(*VAR_4);
  }
 }
 return VAR_6;
}
