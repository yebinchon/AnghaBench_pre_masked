
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PBYTE ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef int ALG_ID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

DWORD FUNC_5(ALG_ID VAR_3)
{
 DWORD VAR_4 = 0, VAR_5 = sizeof(DWORD);
 HCRYPTPROV VAR_6;
 HCRYPTKEY VAR_7;
 if(FUNC_0(&VAR_6, ((void*)0), ((void*)0), VAR_2, VAR_0))
 {
  if(FUNC_2(VAR_6, VAR_3, 0, &VAR_7))
  {
   FUNC_3(VAR_7, VAR_1, (PBYTE) &VAR_4, &VAR_5, 0);
   FUNC_1(VAR_7);
  }
  FUNC_4(VAR_6, 0);
 }
 return VAR_4 / 8;
}
