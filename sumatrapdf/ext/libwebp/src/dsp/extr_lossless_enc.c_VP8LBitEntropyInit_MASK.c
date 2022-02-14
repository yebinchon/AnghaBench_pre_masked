
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entropy; int nonzero_code; scalar_t__ max_val; scalar_t__ nonzeros; scalar_t__ sum; } ;
typedef TYPE_1__ VP8LBitEntropy ;


 int VAR_0 ;

void FUNC_0(VP8LBitEntropy* const VAR_1) {
  VAR_1->entropy = 0.;
  VAR_1->sum = 0;
  VAR_1->nonzeros = 0;
  VAR_1->max_val = 0;
  VAR_1->nonzero_code = VAR_0;
}
