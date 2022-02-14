
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PBYTE ;
typedef int * LPVOID ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_3 (int ,int ) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_2 ;

BOOL FUNC_6(HCRYPTKEY VAR_3, LPVOID VAR_4, DWORD VAR_5, LPVOID *VAR_6, DWORD *VAR_7)
{
 BOOL VAR_8 = VAR_0;
 HCRYPTKEY VAR_9;
 *VAR_6 = ((void*)0);
 *VAR_7 = VAR_5;
 if(FUNC_2(VAR_3, ((void*)0), 0, &VAR_9))
 {
  if((*VAR_6 = FUNC_3(VAR_1, VAR_5)))
  {
   FUNC_5(*VAR_6, VAR_4, VAR_5);
   if(!(VAR_8 = FUNC_0(VAR_9, 0, VAR_2, 0, (PBYTE) *VAR_6, VAR_7)))
    *VAR_6 = FUNC_4(*VAR_6);
  }
  FUNC_1(VAR_9);
 }
 return VAR_8;
}
