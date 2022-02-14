
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dmDriverExtra; scalar_t__ dmSize; } ;
typedef TYPE_1__* PDEVMODEW ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*) ;

PDEVMODEW
FUNC_3(PDEVMODEW VAR_0)
{
    PDEVMODEW VAR_1;


    VAR_1 = FUNC_1(VAR_0->dmSize + VAR_0->dmDriverExtra);
    if (!VAR_1)
    {
        FUNC_2("DllAllocSplMem failed!\n");
        return ((void*)0);
    }


    FUNC_0(VAR_1, VAR_0, VAR_0->dmSize + VAR_0->dmDriverExtra);

    return VAR_1;
}
