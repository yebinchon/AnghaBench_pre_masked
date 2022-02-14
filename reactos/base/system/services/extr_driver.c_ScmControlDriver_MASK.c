
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dwCurrentState; int dwControlsAccepted; } ;
struct TYPE_7__ {TYPE_1__ Status; } ;
typedef TYPE_2__* PSERVICE ;
typedef int LPSERVICE_STATUS ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;

DWORD
FUNC_3(PSERVICE VAR_4,
                 DWORD VAR_5,
                 LPSERVICE_STATUS VAR_6)
{
    DWORD VAR_7;

    FUNC_0("ScmControlDriver() called\n");

    switch (VAR_5)
    {
        case 128:

            VAR_7 = FUNC_1(VAR_4,
                                         VAR_6);
            if (VAR_7 != VAR_1)
                goto done;


            if (VAR_4->Status.dwCurrentState != VAR_2)
            {
                VAR_7 = VAR_0;
                goto done;
            }


            VAR_7 = FUNC_2(VAR_4);
            if (VAR_7 == VAR_0)
            {

                VAR_4->Status.dwControlsAccepted = 0;
                goto done;
            }


            VAR_4->Status.dwCurrentState = VAR_3;


            VAR_7 = FUNC_1(VAR_4,
                                         VAR_6);
            break;

        case 129:
            VAR_7 = FUNC_1(VAR_4,
                                         VAR_6);
            break;

        default:
            VAR_7 = VAR_0;
    }

done:
    FUNC_0("ScmControlDriver() done (Erorr: %lu)\n", VAR_7);

    return VAR_7;
}
