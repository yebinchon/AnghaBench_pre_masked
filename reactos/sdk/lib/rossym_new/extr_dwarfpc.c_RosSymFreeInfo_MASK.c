
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {TYPE_1__* Parameters; int * FunctionName; int * FileName; } ;
struct TYPE_4__ {int * ValueName; } ;
typedef TYPE_2__* PROSSYM_LINEINFO ;


 int FUNC_0 (int *) ;

VOID FUNC_1(PROSSYM_LINEINFO VAR_0)
{
    int VAR_1;
 FUNC_0(VAR_0->FileName);
 VAR_0->FileName = ((void*)0);
 FUNC_0(VAR_0->FunctionName);
 VAR_0->FunctionName = ((void*)0);
    for (VAR_1 = 0; VAR_1 < sizeof(VAR_0->Parameters)/sizeof(VAR_0->Parameters[0]); VAR_1++)
        FUNC_0(VAR_0->Parameters[VAR_1].ValueName);
}
