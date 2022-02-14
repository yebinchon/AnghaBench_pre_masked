
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* bands; struct TYPE_3__* cyRowHeights; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
        FUNC_0(VAR_0[VAR_2].cyRowHeights);
        FUNC_0(VAR_0[VAR_2].bands);
    }
    FUNC_0(VAR_0);
    VAR_0 = ((void*)0);
}
