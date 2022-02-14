
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cbData; int pbData; } ;
struct TYPE_6__ {scalar_t__ cbData; int pbData; } ;
struct TYPE_8__ {scalar_t__ dwVersion; TYPE_2__ SerialNumber; TYPE_1__ Issuer; } ;
typedef TYPE_3__ CMSG_SIGNER_INFO ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(const CMSG_SIGNER_INFO *VAR_0,
 const CMSG_SIGNER_INFO *VAR_1)
{
    FUNC_1(VAR_0->dwVersion == VAR_1->dwVersion, "Expected version %d, got %d\n",
     VAR_1->dwVersion, VAR_0->dwVersion);
    FUNC_1(VAR_0->Issuer.cbData == VAR_1->Issuer.cbData,
     "Expected issuer size %d, got %d\n", VAR_1->Issuer.cbData,
     VAR_0->Issuer.cbData);
    FUNC_1(!FUNC_0(VAR_0->Issuer.pbData, VAR_1->Issuer.pbData, VAR_0->Issuer.cbData),
     "Unexpected issuer\n");
    FUNC_1(VAR_0->SerialNumber.cbData == VAR_1->SerialNumber.cbData,
     "Expected serial number size %d, got %d\n", VAR_1->SerialNumber.cbData,
     VAR_0->SerialNumber.cbData);
    FUNC_1(!FUNC_0(VAR_0->SerialNumber.pbData, VAR_1->SerialNumber.pbData,
     VAR_0->SerialNumber.cbData), "Unexpected serial number\n");

}
