
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwDomainKeyLen; scalar_t__ dwCredHistLen; scalar_t__ dwBackupKeyLen; scalar_t__ dwMasterKeyLen; } ;
typedef int * PVOID ;
typedef TYPE_1__* PKULL_M_DPAPI_MASTERKEYS ;
typedef scalar_t__ PBYTE ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__,int **,scalar_t__*) ;

BOOL FUNC_5(PKULL_M_DPAPI_MASTERKEYS VAR_4, PVOID VAR_5, LPCWSTR VAR_6, PVOID *VAR_7, DWORD *VAR_8)
{
 BOOL VAR_9 = VAR_0;
 PBYTE VAR_10;
 DWORD VAR_11;
 *VAR_7 = ((void*)0);
 *VAR_8 = 0;
 if((VAR_9 = FUNC_4(VAR_6, (PBYTE) VAR_5 + FUNC_0(VAR_1, VAR_3) + VAR_4->dwMasterKeyLen + VAR_4->dwBackupKeyLen + VAR_4->dwCredHistLen, (DWORD) VAR_4->dwDomainKeyLen, (PVOID *) &VAR_10, &VAR_11)))
 {
  *VAR_8 = VAR_11 - sizeof(DWORD);
  if((*VAR_7 = FUNC_1(VAR_2, *VAR_8)))
   FUNC_3(*VAR_7, VAR_10 + sizeof(DWORD), VAR_11 - sizeof(DWORD));
  FUNC_2(VAR_10);
 }
 return VAR_9;
}
