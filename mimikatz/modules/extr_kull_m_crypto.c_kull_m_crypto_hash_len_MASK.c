
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HCRYPTPROV ;
typedef int HCRYPTHASH ;
typedef int DWORD ;
typedef int ALG_ID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;

DWORD FUNC_5(ALG_ID VAR_3)
{
 DWORD VAR_4 = 0;
 HCRYPTPROV VAR_5;
 HCRYPTHASH VAR_6;
 if(FUNC_0(&VAR_5, ((void*)0), ((void*)0), VAR_2, VAR_0))
 {
  if(FUNC_1(VAR_5, VAR_3, 0, 0, &VAR_6))
  {
   FUNC_3(VAR_6, VAR_1, ((void*)0), &VAR_4, 0);
   FUNC_2(VAR_6);
  }
  FUNC_4(VAR_5, 0);
 }
 return VAR_4;
}
