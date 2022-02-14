
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PVAULTOPENVAULT ;
typedef scalar_t__ PVAULTGETITEM8 ;
typedef scalar_t__ PVAULTGETITEM7 ;
typedef scalar_t__ PVAULTGETINFORMATION ;
typedef scalar_t__ PVAULTFREE ;
typedef scalar_t__ PVAULTENUMERATEVAULTS ;
typedef scalar_t__ PVAULTENUMERATEITEMTYPES ;
typedef scalar_t__ PVAULTENUMERATEITEMS ;
typedef scalar_t__ PVAULTCLOSEVAULT ;
typedef int NTSTATUS ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

NTSTATUS FUNC_2()
{
 if((VAR_10 = FUNC_1(L"vaultcli")))
 {
  VAR_2 = (PVAULTENUMERATEITEMTYPES) FUNC_0(VAR_10, "VaultEnumerateItemTypes");
  VAR_4 = (PVAULTENUMERATEVAULTS) FUNC_0(VAR_10, "VaultEnumerateVaults");
  VAR_9 = (PVAULTOPENVAULT) FUNC_0(VAR_10, "VaultOpenVault");
  VAR_6 = (PVAULTGETINFORMATION) FUNC_0(VAR_10, "VaultGetInformation");
  VAR_3 = (PVAULTENUMERATEITEMS) FUNC_0(VAR_10, "VaultEnumerateItems");
  VAR_1 = (PVAULTCLOSEVAULT) FUNC_0(VAR_10, "VaultCloseVault");
  VAR_5 = (PVAULTFREE) FUNC_0(VAR_10, "VaultFree");
  VAR_7 = (PVAULTGETITEM7) FUNC_0(VAR_10, "VaultGetItem");
  VAR_8 = (PVAULTGETITEM8) VAR_7;

  VAR_11 = VAR_2 && VAR_4 && VAR_9 && VAR_6 && VAR_3 && VAR_1 && VAR_5 && VAR_7;
 }
 return VAR_0;
}
