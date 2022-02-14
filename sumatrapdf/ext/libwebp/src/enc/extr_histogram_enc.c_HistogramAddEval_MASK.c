
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {double bit_cost_; int palette_code_bits_; } ;
typedef TYPE_1__ VP8LHistogram ;


 scalar_t__ FUNC_0 (TYPE_1__ const* const,TYPE_1__ const* const,double,double*) ;
 int FUNC_1 (TYPE_1__ const* const,TYPE_1__ const* const,TYPE_1__* const) ;

__attribute__((used)) static double FUNC_2(const VP8LHistogram* const VAR_0,
                               const VP8LHistogram* const VAR_1,
                               VP8LHistogram* const VAR_2,
                               double VAR_3) {
  double VAR_4 = 0;
  const double VAR_5 = VAR_0->bit_cost_ + VAR_1->bit_cost_;
  VAR_3 += VAR_5;

  if (FUNC_0(VAR_0, VAR_1, VAR_3, &VAR_4)) {
    FUNC_1(VAR_0, VAR_1, VAR_2);
    VAR_2->bit_cost_ = VAR_4;
    VAR_2->palette_code_bits_ = VAR_0->palette_code_bits_;
  }

  return VAR_4 - VAR_5;
}
