
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int srcRGB; int dstRGB; int srcAlpha; int dstAlpha; } ;
struct TYPE_4__ {TYPE_2__ compositeOperation; } ;
typedef TYPE_1__ NVGstate ;
typedef int NVGcontext ;
typedef TYPE_2__ NVGcompositeOperationState ;


 TYPE_1__* FUNC_0 (int *) ;

void FUNC_1(NVGcontext* VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 NVGcompositeOperationState VAR_5;
 VAR_5.srcRGB = VAR_1;
 VAR_5.dstRGB = VAR_2;
 VAR_5.srcAlpha = VAR_3;
 VAR_5.dstAlpha = VAR_4;

 NVGstate* VAR_6 = FUNC_0(VAR_0);
 VAR_6->compositeOperation = VAR_5;
}
