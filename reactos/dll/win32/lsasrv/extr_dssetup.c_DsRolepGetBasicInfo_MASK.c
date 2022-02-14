
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_11__ {scalar_t__ DomainNameFlat; int MachineRole; } ;
struct TYPE_8__ {int Buffer; scalar_t__ Length; } ;
struct TYPE_9__ {TYPE_1__ DomainName; } ;
struct TYPE_10__ {TYPE_2__ PolicyAccountDomainInfo; } ;
typedef TYPE_3__* PLSAPR_POLICY_INFORMATION ;
typedef TYPE_4__* PDSROLER_PRIMARY_DOMAIN_INFO_BASIC ;
typedef scalar_t__ PDSROLER_PRIMARY_DOMAIN_INFORMATION ;
typedef int ObjectAttributes ;
typedef int NTSTATUS ;
typedef int NET_API_STATUS ;
typedef int LSA_HANDLE ;
typedef int LSAPR_OBJECT_ATTRIBUTES ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPBYTE ;
typedef int DSROLER_PRIMARY_DOMAIN_INFO_BASIC ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int ,int *) ;
 int FUNC_4 (int ,int ,TYPE_3__**) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (char*,int ) ;
 TYPE_4__* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static
NET_API_STATUS
FUNC_10(
    PDSROLER_PRIMARY_DOMAIN_INFORMATION *VAR_5)
{
    LSAPR_OBJECT_ATTRIBUTES VAR_6;
    PDSROLER_PRIMARY_DOMAIN_INFO_BASIC VAR_7;
    PLSAPR_POLICY_INFORMATION VAR_8;
    LSA_HANDLE VAR_9;
    ULONG VAR_10;
    NTSTATUS VAR_11;

    FUNC_6(&VAR_6, sizeof(VAR_6));
    VAR_11 = FUNC_3(((void*)0),
                            &VAR_6,
                            VAR_3,
                            &VAR_9);
    if (!FUNC_5(VAR_11))
    {
        FUNC_7("LsarOpenPolicyFailed with NT status %x\n",
              FUNC_1(VAR_11));
        return VAR_1;
    }

    VAR_11 = FUNC_4(VAR_9,
                                        VAR_4,
                                        &VAR_8);
    FUNC_2(&VAR_9);
    if (!FUNC_5(VAR_11))
    {
        FUNC_7("LsarQueryInformationPolicy with NT status %x\n",
              FUNC_1(VAR_11));
        return VAR_1;
    }

    VAR_10 = sizeof(DSROLER_PRIMARY_DOMAIN_INFO_BASIC) +
           VAR_8->PolicyAccountDomainInfo.DomainName.Length + sizeof(WCHAR);

    VAR_7 = FUNC_8(VAR_10);
    if (VAR_7 == ((void*)0))
    {
        FUNC_0(VAR_4,
                                          VAR_8);
        return VAR_1;
    }

    VAR_7->MachineRole = VAR_0;
    VAR_7->DomainNameFlat = (LPWSTR)((LPBYTE)VAR_7 +
                                      sizeof(DSROLER_PRIMARY_DOMAIN_INFO_BASIC));
    FUNC_9(VAR_7->DomainNameFlat, VAR_8->PolicyAccountDomainInfo.DomainName.Buffer);

    FUNC_0(VAR_4,
                                      VAR_8);

    *VAR_5 = (PDSROLER_PRIMARY_DOMAIN_INFORMATION)VAR_7;

    return VAR_2;
}
