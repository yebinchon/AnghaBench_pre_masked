
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int const uint32_t ;
struct TYPE_6__ {int bit_pos_; int eos_; } ;
typedef TYPE_1__ VP8LBitReader ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (TYPE_1__* const) ;
 int VAR_0 ;
 int FUNC_3 (int) ;
 int* VAR_1 ;

uint32_t FUNC_4(VP8LBitReader* const VAR_2, int VAR_3) {
  FUNC_3(VAR_3 >= 0);

  if (!VAR_2->eos_ && VAR_3 <= VAR_0) {
    const uint32_t VAR_4 = FUNC_1(VAR_2) & VAR_1[VAR_3];
    const int VAR_5 = VAR_2->bit_pos_ + VAR_3;
    VAR_2->bit_pos_ = VAR_5;
    FUNC_0(VAR_2);
    return VAR_4;
  } else {
    FUNC_2(VAR_2);
    return 0;
  }
}
