
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ litProbs; } ;
struct TYPE_10__ {TYPE_1__ saveState; scalar_t__ litProbs; } ;
struct TYPE_9__ {int (* Free ) (TYPE_2__*,scalar_t__) ;} ;
typedef TYPE_2__ ISzAlloc ;
typedef TYPE_3__ CLzmaEnc ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

void FUNC_2(CLzmaEnc *VAR_0, ISzAlloc *VAR_1)
{
  VAR_1->Free(VAR_1, VAR_0->litProbs);
  VAR_1->Free(VAR_1, VAR_0->saveState.litProbs);
  VAR_0->litProbs = 0;
  VAR_0->saveState.litProbs = 0;
}
