
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t openvpn_service_type ;
struct TYPE_2__ {int name; } ;
typedef int * SC_HANDLE ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,...) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_7(openvpn_service_type VAR_3)
{
    int VAR_4 = 1;
    SC_HANDLE VAR_5;
    SC_HANDLE VAR_6;

    VAR_5 = FUNC_2(((void*)0), ((void*)0), VAR_0);
    if (VAR_5 == ((void*)0))
    {
        FUNC_6(FUNC_5("OpenSCManager failed - %s\n"), FUNC_1());
        return 1;
    }

    VAR_6 = FUNC_3(VAR_5, VAR_2[VAR_3].name, VAR_1);
    if (VAR_6)
    {
        if (FUNC_4(VAR_6, 0, ((void*)0)))
        {
            FUNC_6(FUNC_5("Service Started\n"));
            VAR_4 = 0;
        }
        else
        {
            FUNC_6(FUNC_5("StartService failed - %s\n"), FUNC_1());
        }

        FUNC_0(VAR_6);
    }
    else
    {
        FUNC_6(FUNC_5("OpenService failed - %s\n"), FUNC_1());
    }

    FUNC_0(VAR_5);
    return VAR_4;
}
