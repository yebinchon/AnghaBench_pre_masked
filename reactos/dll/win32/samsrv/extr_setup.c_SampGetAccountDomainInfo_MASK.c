
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int Length; } ;
typedef int PVOID ;
typedef int PPOLICY_ACCOUNT_DOMAIN_INFO ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_1__ LSA_OBJECT_ATTRIBUTES ;
typedef int LSA_HANDLE ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

NTSTATUS
FUNC_6(PPOLICY_ACCOUNT_DOMAIN_INFO *VAR_3)
{
    LSA_OBJECT_ATTRIBUTES VAR_4;
    LSA_HANDLE VAR_5;
    NTSTATUS VAR_6;

    FUNC_4("SampGetAccountDomainInfo\n");

    FUNC_5(&VAR_4, 0, sizeof(LSA_OBJECT_ATTRIBUTES));
    VAR_4.Length = sizeof(LSA_OBJECT_ATTRIBUTES);

    VAR_6 = FUNC_2(((void*)0),
                           &VAR_4,
                           VAR_0,
                           &VAR_5);
    if (VAR_6 != VAR_2)
    {
        FUNC_0("LsaOpenPolicy failed (Status: 0x%08lx)\n", VAR_6);
        return VAR_6;
    }

    VAR_6 = FUNC_3(VAR_5,
                                       VAR_1,
                                       (PVOID *)VAR_3);

    FUNC_1(VAR_5);

    return VAR_6;
}
