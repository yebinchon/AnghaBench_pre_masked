
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {double bit_cost_; } ;
typedef TYPE_1__ VP8LHistogram ;
struct TYPE_9__ {int cost_combo; int cost_diff; } ;
typedef TYPE_2__ HistogramPair ;


 int FUNC_0 (TYPE_1__ const* const,TYPE_1__ const* const,double const,int*) ;

__attribute__((used)) static void FUNC_1(const VP8LHistogram* const VAR_0,
                                 const VP8LHistogram* const VAR_1,
                                 double VAR_2,
                                 HistogramPair* const VAR_3) {
  const double VAR_4 = VAR_0->bit_cost_ + VAR_1->bit_cost_;
  VAR_3->cost_combo = 0.;
  FUNC_0(VAR_0, VAR_1, VAR_4 + VAR_2, &VAR_3->cost_combo);
  VAR_3->cost_diff = VAR_3->cost_combo - VAR_4;
}
