
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int**** level_cost_; int**** remapped_costs_; scalar_t__ dirty_; int **** coeffs_; } ;
typedef TYPE_1__ VP8EncProba ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const FUNC_0 (int,int const) ;
 size_t* VAR_4 ;
 int const FUNC_1 (int,int const* const) ;

void FUNC_2(VP8EncProba* const VAR_5) {
  int VAR_6, VAR_7, VAR_8;

  if (!VAR_5->dirty_) return;

  for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
    int VAR_9;
    for (VAR_7 = 0; VAR_7 < VAR_1; ++VAR_7) {
      for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
        const uint8_t* const VAR_10 = VAR_5->coeffs_[VAR_6][VAR_7][VAR_8];
        uint16_t* const VAR_11 = VAR_5->level_cost_[VAR_6][VAR_7][VAR_8];
        const int VAR_12 = (VAR_8 > 0) ? FUNC_0(1, VAR_10[0]) : 0;
        const int VAR_13 = FUNC_0(1, VAR_10[1]) + VAR_12;
        int VAR_14;
        VAR_11[0] = FUNC_0(0, VAR_10[1]) + VAR_12;
        for (VAR_14 = 1; VAR_14 <= VAR_0; ++VAR_14) {
          VAR_11[VAR_14] = VAR_13 + FUNC_1(VAR_14, VAR_10);
        }


      }
    }
    for (VAR_9 = 0; VAR_9 < 16; ++VAR_9) {
      for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
        VAR_5->remapped_costs_[VAR_6][VAR_9][VAR_8] =
            VAR_5->level_cost_[VAR_6][VAR_4[VAR_9]][VAR_8];
      }
    }
  }
  VAR_5->dirty_ = 0;
}
