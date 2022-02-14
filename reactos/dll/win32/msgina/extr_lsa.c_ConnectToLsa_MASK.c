
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int AuthenticationPackage; int * LsaHandle; } ;
typedef TYPE_1__* PGINA_CONTEXT ;
typedef int PANSI_STRING ;
typedef int NTSTATUS ;
typedef int LSA_STRING ;
typedef int LSA_OPERATIONAL_MODE ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int **,int *) ;
 char* VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;

NTSTATUS
FUNC_5(
    PGINA_CONTEXT VAR_2)
{
    LSA_STRING VAR_3;
    LSA_STRING VAR_4;
    LSA_OPERATIONAL_MODE VAR_5 = 0;
    NTSTATUS VAR_6;


    if (VAR_2->LsaHandle != ((void*)0))
        return VAR_1;


    FUNC_4((PANSI_STRING)&VAR_3,
                      "MSGINA");

    VAR_6 = FUNC_2(&VAR_3,
                                     &VAR_2->LsaHandle,
                                     &VAR_5);
    if (!FUNC_3(VAR_6))
    {
        FUNC_0("LsaRegisterLogonProcess failed (Status 0x%08lx)\n", VAR_6);
        return VAR_6;
    }


    FUNC_4((PANSI_STRING)&VAR_4,
                      VAR_0);

    VAR_6 = FUNC_1(VAR_2->LsaHandle,
                                            &VAR_4,
                                            &VAR_2->AuthenticationPackage);
    if (!FUNC_3(VAR_6))
    {
        FUNC_0("LsaLookupAuthenticationPackage failed (Status 0x%08lx)\n", VAR_6);
    }

    return VAR_6;
}
