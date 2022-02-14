
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int blue_cost_; int red_cost_; int literal_cost_; } ;
typedef TYPE_1__ VP8LHistogram ;
struct TYPE_6__ {int blue_max_; int blue_min_; int red_max_; int red_min_; int literal_max_; int literal_min_; } ;
typedef TYPE_2__ DominantCostRange ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(const VP8LHistogram* const VAR_2,
                            const DominantCostRange* const VAR_3, int VAR_4) {
  int VAR_5 = FUNC_0(VAR_3->literal_min_, VAR_3->literal_max_,
                                  VAR_2->literal_cost_);
  FUNC_1(VAR_5 < VAR_1);
  if (!VAR_4) {
    VAR_5 = VAR_5 * VAR_1
           + FUNC_0(VAR_3->red_min_, VAR_3->red_max_, VAR_2->red_cost_);
    VAR_5 = VAR_5 * VAR_1
           + FUNC_0(VAR_3->blue_min_, VAR_3->blue_max_, VAR_2->blue_cost_);
    FUNC_1(VAR_5 < VAR_0);
  }
  return VAR_5;
}
