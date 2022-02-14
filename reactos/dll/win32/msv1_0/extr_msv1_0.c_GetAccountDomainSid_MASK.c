
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_5__ {int Sid; } ;
struct TYPE_6__ {TYPE_1__ PolicyAccountDomainInfo; } ;
typedef int * PRPC_SID ;
typedef TYPE_2__* PLSAPR_POLICY_INFORMATION ;
typedef int NTSTATUS ;
typedef int * LSAPR_HANDLE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (int *,int ,TYPE_2__**) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int * FUNC_6 (int ,int ,int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_1 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,int ,int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_11(PRPC_SID *VAR_2)
{
    LSAPR_HANDLE VAR_3 = ((void*)0);
    PLSAPR_POLICY_INFORMATION VAR_4 = ((void*)0);
    ULONG VAR_5 = 0;
    NTSTATUS VAR_6;

    VAR_6 = FUNC_2(&VAR_3);
    if (!FUNC_5(VAR_6))
    {
        FUNC_9("LsaIOpenPolicyTrusted() failed (Status 0x%08lx)\n", VAR_6);
        return VAR_6;
    }

    VAR_6 = FUNC_4(VAR_3,
                                        VAR_0,
                                        &VAR_4);
    if (!FUNC_5(VAR_6))
    {
        FUNC_9("LsarQueryInformationPolicy() failed (Status 0x%08lx)\n", VAR_6);
        goto done;
    }

    VAR_5 = FUNC_8(VAR_4->PolicyAccountDomainInfo.Sid);

    *VAR_2 = FUNC_6(FUNC_7(), 0, VAR_5);
    if (*VAR_2 == ((void*)0))
    {
        FUNC_0("Failed to allocate SID\n");
        VAR_6 = VAR_1;
        goto done;
    }

    FUNC_10(*VAR_2, VAR_4->PolicyAccountDomainInfo.Sid, VAR_5);

done:
    if (VAR_4 != ((void*)0))
        FUNC_1(VAR_0,
                                          VAR_4);

    if (VAR_3 != ((void*)0))
        FUNC_3(&VAR_3);

    return VAR_6;
}
