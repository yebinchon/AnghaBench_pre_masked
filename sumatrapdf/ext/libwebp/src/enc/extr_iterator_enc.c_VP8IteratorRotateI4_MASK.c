
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {size_t i4_; int * i4_boundary_; int * i4_top_; } ;
typedef TYPE_1__ VP8EncIterator ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;

int FUNC_0(VP8EncIterator* const VAR_3,
                        const uint8_t* const VAR_4) {
  const uint8_t* const VAR_5 = VAR_4 + VAR_1[VAR_3->i4_];
  uint8_t* const VAR_6 = VAR_3->i4_top_;
  int VAR_7;


  for (VAR_7 = 0; VAR_7 <= 3; ++VAR_7) {
    VAR_6[-4 + VAR_7] = VAR_5[VAR_7 + 3 * VAR_0];
  }
  if ((VAR_3->i4_ & 3) != 3) {
    for (VAR_7 = 0; VAR_7 <= 2; ++VAR_7) {
      VAR_6[VAR_7] = VAR_5[3 + (2 - VAR_7) * VAR_0];
    }
  } else {
    for (VAR_7 = 0; VAR_7 <= 3; ++VAR_7) {
      VAR_6[VAR_7] = VAR_6[VAR_7 + 4];
    }
  }

  ++VAR_3->i4_;
  if (VAR_3->i4_ == 16) {
    return 0;
  }

  VAR_3->i4_top_ = VAR_3->i4_boundary_ + VAR_2[VAR_3->i4_];
  return 1;
}
