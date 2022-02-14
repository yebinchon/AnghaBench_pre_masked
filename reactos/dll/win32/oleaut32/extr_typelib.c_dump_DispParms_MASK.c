
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int cArgs; unsigned int cNamedArgs; scalar_t__ rgvarg; int * rgdispidNamedArgs; } ;
typedef TYPE_1__ DISPPARAMS ;


 int FUNC_0 (char*,...) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(const DISPPARAMS * VAR_0)
{
    unsigned int VAR_1;

    FUNC_0("args=%u named args=%u\n", VAR_0->cArgs, VAR_0->cNamedArgs);

    if (VAR_0->cNamedArgs && VAR_0->rgdispidNamedArgs)
    {
        FUNC_0("named args:\n");
        for (VAR_1 = 0; VAR_1 < VAR_0->cNamedArgs; VAR_1++)
            FUNC_0( "\t0x%x\n", VAR_0->rgdispidNamedArgs[VAR_1] );
    }

    if (VAR_0->cArgs && VAR_0->rgvarg)
    {
        FUNC_0("args:\n");
        for (VAR_1 = 0; VAR_1 < VAR_0->cArgs; VAR_1++)
            FUNC_0("  [%d] %s\n", VAR_1, FUNC_1(VAR_0->rgvarg+VAR_1));
    }
}
