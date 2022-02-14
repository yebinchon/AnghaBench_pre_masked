
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ literal_cost_; scalar_t__ red_cost_; scalar_t__ blue_cost_; } ;
typedef TYPE_1__ VP8LHistogram ;
struct TYPE_6__ {scalar_t__ literal_max_; scalar_t__ literal_min_; scalar_t__ red_max_; scalar_t__ red_min_; scalar_t__ blue_max_; scalar_t__ blue_min_; } ;
typedef TYPE_2__ DominantCostRange ;



__attribute__((used)) static void FUNC_0(
    const VP8LHistogram* const VAR_0, DominantCostRange* const VAR_1) {
  if (VAR_1->literal_max_ < VAR_0->literal_cost_) VAR_1->literal_max_ = VAR_0->literal_cost_;
  if (VAR_1->literal_min_ > VAR_0->literal_cost_) VAR_1->literal_min_ = VAR_0->literal_cost_;
  if (VAR_1->red_max_ < VAR_0->red_cost_) VAR_1->red_max_ = VAR_0->red_cost_;
  if (VAR_1->red_min_ > VAR_0->red_cost_) VAR_1->red_min_ = VAR_0->red_cost_;
  if (VAR_1->blue_max_ < VAR_0->blue_cost_) VAR_1->blue_max_ = VAR_0->blue_cost_;
  if (VAR_1->blue_min_ > VAR_0->blue_cost_) VAR_1->blue_min_ = VAR_0->blue_cost_;
}
