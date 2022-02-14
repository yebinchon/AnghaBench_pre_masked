
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int cbData; int pbData; } ;
struct TYPE_9__ {TYPE_1__ IPAddress; int pwszURL; } ;
struct TYPE_8__ {int dwAltNameChoice; } ;
typedef TYPE_2__ CERT_ALT_NAME_ENTRY ;
 TYPE_5__ FUNC_0 (TYPE_2__ const) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5(const CERT_ALT_NAME_ENTRY *VAR_0,
 const CERT_ALT_NAME_ENTRY *VAR_1)
{
    FUNC_4(VAR_0->dwAltNameChoice == VAR_1->dwAltNameChoice,
     "Expected name choice %d, got %d\n", VAR_0->dwAltNameChoice,
     VAR_1->dwAltNameChoice);
    if (VAR_0->dwAltNameChoice == VAR_1->dwAltNameChoice)
    {
        switch (VAR_1->dwAltNameChoice)
        {
        case 130:
        case 134:
        case 133:
        case 129:
        case 131:
            FUNC_4((!FUNC_0(*VAR_0).pwszURL && !FUNC_0(*VAR_1).pwszURL) ||
             (!FUNC_0(*VAR_0).pwszURL && !FUNC_2(FUNC_0(*VAR_1).pwszURL)) ||
             (!FUNC_0(*VAR_1).pwszURL && !FUNC_2(FUNC_0(*VAR_0).pwszURL)) ||
             !FUNC_1(FUNC_0(*VAR_0).pwszURL, FUNC_0(*VAR_1).pwszURL),
             "Unexpected name\n");
            break;
        case 128:
        case 135:
        case 132:
            FUNC_4(FUNC_0(*VAR_1).IPAddress.cbData == FUNC_0(*VAR_0).IPAddress.cbData,
               "Unexpected IP address length %d\n", FUNC_0(*VAR_1).IPAddress.cbData);
            FUNC_4(!FUNC_3(FUNC_0(*VAR_1).IPAddress.pbData, FUNC_0(*VAR_0).IPAddress.pbData,
                       FUNC_0(*VAR_1).IPAddress.cbData), "Unexpected value\n");
            break;
        }
    }
}
