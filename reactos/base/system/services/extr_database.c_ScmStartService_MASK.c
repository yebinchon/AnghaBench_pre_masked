
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lpServiceName; } ;
typedef int * SC_RPC_LOCK ;
typedef TYPE_1__* PSERVICE ;
typedef int LPWSTR ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int **) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__,int *) ;
 int FUNC_5 (int **) ;
 int VAR_3 ;

DWORD
FUNC_6(PSERVICE VAR_4,
                DWORD VAR_5,
                LPWSTR* VAR_6)
{
    DWORD VAR_7 = VAR_1;
    SC_RPC_LOCK VAR_8 = ((void*)0);

    FUNC_0("ScmStartService() called\n");
    FUNC_0("Start Service %p (%S)\n", VAR_4, VAR_4->lpServiceName);


    FUNC_1(&VAR_0);






    if (!VAR_2)
    {
        VAR_7 = FUNC_3(VAR_3, &VAR_8);
        if (VAR_7 != VAR_1) goto done;
    }


    VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);


    if (VAR_8) FUNC_5(&VAR_8);

done:
    FUNC_2(&VAR_0);

    FUNC_0("ScmStartService() done (Error %lu)\n", VAR_7);

    return VAR_7;
}
