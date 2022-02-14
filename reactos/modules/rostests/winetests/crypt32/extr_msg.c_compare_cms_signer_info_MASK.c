
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ dwIdChoice; } ;
struct TYPE_13__ {scalar_t__ cbData; int pbData; } ;
struct TYPE_11__ {scalar_t__ cbData; int pbData; } ;
struct TYPE_10__ {scalar_t__ cbData; int pbData; } ;
struct TYPE_12__ {TYPE_2__ SerialNumber; TYPE_1__ Issuer; } ;
struct TYPE_15__ {TYPE_4__ KeyId; TYPE_3__ IssuerSerialNumber; } ;
struct TYPE_14__ {scalar_t__ dwVersion; TYPE_9__ SignerId; } ;
typedef TYPE_5__ CMSG_CMS_SIGNER_INFO ;


 scalar_t__ VAR_0 ;
 TYPE_8__ FUNC_0 (TYPE_9__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int FUNC_2 (int,char*,...) ;

__attribute__((used)) static void FUNC_3(const CMSG_CMS_SIGNER_INFO *VAR_1,
 const CMSG_CMS_SIGNER_INFO *VAR_2)
{
    FUNC_2(VAR_1->dwVersion == VAR_2->dwVersion, "Expected version %d, got %d\n",
     VAR_2->dwVersion, VAR_1->dwVersion);
    FUNC_2(VAR_1->SignerId.dwIdChoice == VAR_2->SignerId.dwIdChoice,
     "Expected id choice %d, got %d\n", VAR_2->SignerId.dwIdChoice,
     VAR_1->SignerId.dwIdChoice);
    if (VAR_1->SignerId.dwIdChoice == VAR_2->SignerId.dwIdChoice)
    {
        if (VAR_1->SignerId.dwIdChoice == VAR_0)
        {
            FUNC_2(FUNC_0(VAR_1->SignerId).IssuerSerialNumber.Issuer.cbData ==
             FUNC_0(VAR_2->SignerId).IssuerSerialNumber.Issuer.cbData,
             "Expected issuer size %d, got %d\n",
             FUNC_0(VAR_2->SignerId).IssuerSerialNumber.Issuer.cbData,
             FUNC_0(VAR_1->SignerId).IssuerSerialNumber.Issuer.cbData);
            FUNC_2(!FUNC_1(FUNC_0(VAR_1->SignerId).IssuerSerialNumber.Issuer.pbData,
             FUNC_0(VAR_2->SignerId).IssuerSerialNumber.Issuer.pbData,
             FUNC_0(VAR_1->SignerId).IssuerSerialNumber.Issuer.cbData),
             "Unexpected issuer\n");
            FUNC_2(FUNC_0(VAR_1->SignerId).IssuerSerialNumber.SerialNumber.cbData ==
             FUNC_0(VAR_2->SignerId).IssuerSerialNumber.SerialNumber.cbData,
             "Expected serial number size %d, got %d\n",
             FUNC_0(VAR_2->SignerId).IssuerSerialNumber.SerialNumber.cbData,
             FUNC_0(VAR_1->SignerId).IssuerSerialNumber.SerialNumber.cbData);
            FUNC_2(!FUNC_1(FUNC_0(VAR_1->SignerId).IssuerSerialNumber.SerialNumber.pbData,
             FUNC_0(VAR_2->SignerId).IssuerSerialNumber.SerialNumber.pbData,
             FUNC_0(VAR_1->SignerId).IssuerSerialNumber.SerialNumber.cbData),
             "Unexpected serial number\n");
        }
        else
        {
            FUNC_2(FUNC_0(VAR_1->SignerId).KeyId.cbData == FUNC_0(VAR_2->SignerId).KeyId.cbData,
             "expected key id size %d, got %d\n",
             FUNC_0(VAR_2->SignerId).KeyId.cbData, FUNC_0(VAR_1->SignerId).KeyId.cbData);
            FUNC_2(!FUNC_1(FUNC_0(VAR_2->SignerId).KeyId.pbData,
             FUNC_0(VAR_1->SignerId).KeyId.pbData, FUNC_0(VAR_1->SignerId).KeyId.cbData),
             "unexpected key id\n");
        }
    }

}
