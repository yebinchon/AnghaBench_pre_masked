
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int winding; } ;
typedef TYPE_1__ NVGpath ;
typedef int NVGcontext ;


 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(NVGcontext* VAR_0, int VAR_1)
{
 NVGpath* VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0)) return;
 VAR_2->winding = VAR_1;
}
