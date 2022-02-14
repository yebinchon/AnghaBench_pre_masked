
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int grbitEnabledProtocols; } ;
typedef scalar_t__ SECURITY_STATUS ;
typedef TYPE_1__ SCHANNEL_CRED ;
typedef int CredHandle ;


 scalar_t__ FUNC_0 (int *,int ,int ,int *,TYPE_1__*,int *,int *,int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_7(void)
{
    SCHANNEL_CRED VAR_7;
    SECURITY_STATUS VAR_8;
    CredHandle VAR_9;

    VAR_8 = FUNC_0(((void*)0), VAR_6, VAR_2,
            ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_9, ((void*)0));
    FUNC_4(VAR_8 == VAR_4, "AcquireCredentialsHandleA failed: %x\n", VAR_8);

    FUNC_6(&VAR_9, 0);
    FUNC_5(&VAR_9);

    VAR_8 = FUNC_2(&VAR_9, VAR_1, ((void*)0));
    FUNC_4(VAR_8 == VAR_3, "QueryCredentialsAttributes failed: %08x, expected SEC_E_INTERNAL_ERROR\n", VAR_8);

    VAR_8 = FUNC_2(&VAR_9, VAR_0, ((void*)0));
    FUNC_4(VAR_8 == VAR_3, "QueryCredentialsAttributes failed: %08x, expected SEC_E_INTERNAL_ERROR\n", VAR_8);

    FUNC_1(&VAR_9);

    FUNC_3(&VAR_7);
    VAR_7.grbitEnabledProtocols = VAR_5;
    VAR_8 = FUNC_0(((void*)0), VAR_6, VAR_2,
            ((void*)0), &VAR_7, ((void*)0), ((void*)0), &VAR_9, ((void*)0));
    FUNC_4(VAR_8 == VAR_4, "AcquireCredentialsHandleA failed: %x\n", VAR_8);

    FUNC_6(&VAR_9, VAR_5);
    FUNC_5(&VAR_9);

    FUNC_1(&VAR_9);
}
