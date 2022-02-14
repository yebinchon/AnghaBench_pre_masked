
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PVOID ;
typedef int PBYTE ;
typedef int LPCBYTE ;
typedef int HCRYPTPROV ;
typedef int HCRYPTKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,scalar_t__,int ,int ,int *,int *) ;

BOOL FUNC_7(DWORD VAR_5, PVOID VAR_6, DWORD VAR_7, PVOID VAR_8, DWORD VAR_9, PVOID VAR_10, BOOL VAR_11)
{
 BOOL VAR_12 = VAR_2;
 HCRYPTPROV VAR_13;
 HCRYPTKEY VAR_14;
 DWORD VAR_15 = VAR_0;

 if(FUNC_0(&VAR_13, ((void*)0), ((void*)0), VAR_4, VAR_1))
 {
  if(FUNC_6(VAR_13, VAR_5, VAR_8, VAR_9, 0, &VAR_14, ((void*)0)))
  {
   if(FUNC_3(VAR_14, VAR_3, (LPCBYTE) &VAR_15, 0))
    VAR_12 = (VAR_11 ? FUNC_5(VAR_14, (PBYTE) VAR_6, VAR_7, (PBYTE) VAR_10) : FUNC_4(VAR_14, (PBYTE) VAR_6, VAR_7, (PBYTE) VAR_10));
   FUNC_1(VAR_14);
  }
  FUNC_2(VAR_13, 0);
 }
 return VAR_12;
}
