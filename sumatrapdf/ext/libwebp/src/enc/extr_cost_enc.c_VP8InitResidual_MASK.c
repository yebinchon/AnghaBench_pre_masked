
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int coeff_type; int first; int costs; int stats; int prob; } ;
typedef TYPE_2__ VP8Residual ;
struct TYPE_6__ {int * remapped_costs_; int * stats_; int * coeffs_; } ;
struct TYPE_8__ {TYPE_1__ proba_; } ;
typedef TYPE_3__ VP8Encoder ;



void FUNC_0(int VAR_0, int VAR_1,
                     VP8Encoder* const VAR_2, VP8Residual* const VAR_3) {
  VAR_3->coeff_type = VAR_1;
  VAR_3->prob = VAR_2->proba_.coeffs_[VAR_1];
  VAR_3->stats = VAR_2->proba_.stats_[VAR_1];
  VAR_3->costs = VAR_2->proba_.remapped_costs_[VAR_1];
  VAR_3->first = VAR_0;
}
