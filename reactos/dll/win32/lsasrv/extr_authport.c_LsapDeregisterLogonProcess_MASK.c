
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ConnectionHandle; int ClientProcessHandle; int Entry; } ;
typedef int PLSA_API_MSG ;
typedef TYPE_1__* PLSAP_LOGON_CONTEXT ;
typedef int NTSTATUS ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (char*,int ,TYPE_1__*) ;

__attribute__((used)) static NTSTATUS
FUNC_5(PLSA_API_MSG VAR_1,
                           PLSAP_LOGON_CONTEXT VAR_2)
{
    FUNC_4("LsapDeregisterLogonProcess(%p %p)\n", VAR_1, VAR_2);

    FUNC_1(&VAR_2->Entry);

    FUNC_0(VAR_2->ClientProcessHandle);
    FUNC_0(VAR_2->ConnectionHandle);

    FUNC_2(FUNC_3(), 0, VAR_2);

    return VAR_0;
}
