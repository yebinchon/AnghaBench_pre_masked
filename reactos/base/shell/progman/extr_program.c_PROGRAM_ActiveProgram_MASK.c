
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hActiveProgram; int hWnd; } ;
typedef int PROGRAM ;
typedef TYPE_1__ PROGGROUP ;


 scalar_t__ FUNC_0 (int ) ;

PROGRAM* FUNC_1(PROGGROUP* VAR_0)
{
    if (!VAR_0) return ((void*)0);
    if (FUNC_0(VAR_0->hWnd)) return ((void*)0);
    return VAR_0->hActiveProgram;
}
