
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int index2_; int amp_; scalar_t__ index1_; int tab_; } ;
typedef TYPE_1__ VP8Random ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(VP8Random* const VAR_2, float VAR_3) {
  FUNC_0(VAR_2->tab_, VAR_1, sizeof(VAR_2->tab_));
  VAR_2->index1_ = 0;
  VAR_2->index2_ = 31;
  VAR_2->amp_ = (VAR_3 < 0.0) ? 0
           : (VAR_3 > 1.0) ? (1 << VAR_0)
           : (uint32_t)((1 << VAR_0) * VAR_3);
}
