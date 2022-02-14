
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ld; int szDsServiceName; int szFakeDCNetBIOS; } ;
typedef int PWSTR ;
typedef TYPE_1__* PDCSHADOW_DOMAIN_INFO ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int ) ;

NTSTATUS FUNC_3(PDCSHADOW_DOMAIN_INFO VAR_1, PWSTR VAR_2)
{
 NTSTATUS VAR_3 = VAR_0;
 PWSTR VAR_4;
 if(FUNC_2(&VAR_4, L"CN=NTDS Settings,CN=%s%s", VAR_1->szFakeDCNetBIOS, VAR_1->szDsServiceName))
 {
  VAR_3 = FUNC_1(VAR_1->ld, VAR_4, VAR_2);
  FUNC_0(VAR_4);
 }
 return VAR_3;
}
