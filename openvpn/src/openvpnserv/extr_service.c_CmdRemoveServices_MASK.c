
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int display_name; int name; } ;
typedef TYPE_1__ openvpn_service_t ;
struct TYPE_7__ {scalar_t__ dwCurrentState; } ;
typedef TYPE_2__ SERVICE_STATUS ;
typedef int * SC_HANDLE ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 int * FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int *,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int VAR_7 ;
 int FUNC_9 (int ,...) ;
 TYPE_1__* VAR_8 ;

__attribute__((used)) static int
FUNC_10()
{
    SC_HANDLE VAR_9;
    SC_HANDLE VAR_10;
    SERVICE_STATUS VAR_11;
    int VAR_12, VAR_13 = VAR_7;

    VAR_10 = FUNC_4(((void*)0), ((void*)0), VAR_1);
    if (VAR_10 == ((void*)0))
    {
        FUNC_9(FUNC_8("OpenSCManager failed - %s\n"), FUNC_3());
        return 1;
    }

    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++)
    {
        openvpn_service_t *VAR_14 = &VAR_8[VAR_12];
        VAR_9 = FUNC_5(VAR_10, VAR_14->name,
                              VAR_0 | VAR_4 | VAR_3);
        if (VAR_9 == ((void*)0))
        {
            FUNC_9(FUNC_8("OpenService failed - %s\n"), FUNC_3());
            goto out;
        }


        if (FUNC_1(VAR_9, VAR_2, &VAR_11))
        {
            FUNC_9(FUNC_8("Stopping %s."), VAR_14->display_name);
            FUNC_7(1000);

            while (FUNC_6(VAR_9, &VAR_11))
            {
                if (VAR_11.dwCurrentState == VAR_6)
                {
                    FUNC_9(FUNC_8("."));
                    FUNC_7(1000);
                }
                else
                {
                    break;
                }
            }

            if (VAR_11.dwCurrentState == VAR_5)
            {
                FUNC_9(FUNC_8("\n%s stopped.\n"), VAR_14->display_name);
            }
            else
            {
                FUNC_9(FUNC_8("\n%s failed to stop.\n"), VAR_14->display_name);
            }
        }


        if (FUNC_2(VAR_9))
        {
            FUNC_9(FUNC_8("%s removed.\n"), VAR_14->display_name);
            --VAR_13;
        }
        else
        {
            FUNC_9(FUNC_8("DeleteService failed - %s\n"), FUNC_3());
        }

        FUNC_0(VAR_9);
    }

out:
    FUNC_0(VAR_10);
    return VAR_13;
}
