
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int IClassFactory_iface; } ;
typedef int IUnknown ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (int ,int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__,int ) ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int FUNC_10 (int,char*,int) ;
 int VAR_12 ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void FUNC_12(void)
{
    HRESULT VAR_13;
    DWORD VAR_14;

    FUNC_11("server: starting %u\n", FUNC_5());

    VAR_13 = FUNC_1(((void*)0), VAR_2);
    if (VAR_13 == VAR_8)
    {
        FUNC_11("server: registering class object\n");
        VAR_13 = FUNC_2(&VAR_1, (IUnknown *)&VAR_10.IClassFactory_iface,
                                   VAR_0, VAR_6, &VAR_14);
        if (VAR_13 == VAR_8)
        {
            HANDLE VAR_15, VAR_16;

            VAR_15 = FUNC_7(VAR_7, VAR_4, "ole_server_done_event");
            FUNC_10(VAR_15 != 0, "server: OpenEvent error %d\n", FUNC_6());
            VAR_16 = FUNC_7(VAR_3, VAR_4, "ole_server_init_done_event");
            FUNC_10(VAR_16 != 0, "server: OpenEvent error %d\n", FUNC_6());

            FUNC_8(VAR_16);

            FUNC_11("server: waiting for requests\n");
            FUNC_9(VAR_15, VAR_5);


            FUNC_10(VAR_9 == 1, "expected 1 class refs, got %d\n", VAR_9);
            FUNC_10(!VAR_11, "expected 0 object refs, got %d\n", VAR_11);
            FUNC_10(!VAR_12, "expected 0 server locks, got %d\n", VAR_12);

            FUNC_0(VAR_15);
            FUNC_0(VAR_16);
            if (0)
            {

                FUNC_11("call CoRevokeClassObject\n");
                FUNC_3(VAR_14);
                FUNC_11("ret CoRevokeClassObject\n");
            }
        }
        FUNC_11("server: call CoUninitialize\n");
        FUNC_4();
        FUNC_11("server: ret CoUninitialize\n");
    }

    FUNC_11("server: exiting %u\n", FUNC_5());
}
