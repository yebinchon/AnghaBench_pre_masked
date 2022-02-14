
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int palette_code_bits_; int bit_cost_; int literal_cost_; int red_cost_; int blue_cost_; int is_used_; scalar_t__ trivial_symbol_; } ;
typedef TYPE_1__ VP8LHistogram ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(VP8LHistogram* const VAR_0, int VAR_1,
                       int VAR_2) {
  VAR_0->palette_code_bits_ = VAR_1;
  if (VAR_2) {
    FUNC_0(VAR_0);
  } else {
    VAR_0->trivial_symbol_ = 0;
    VAR_0->bit_cost_ = 0.;
    VAR_0->literal_cost_ = 0.;
    VAR_0->red_cost_ = 0.;
    VAR_0->blue_cost_ = 0.;
    FUNC_1(VAR_0->is_used_, 0, sizeof(VAR_0->is_used_));
  }
}
