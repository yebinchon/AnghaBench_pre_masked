
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mb_w_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_6__ {int x_; int * i4_boundary_; int * y_top_; int * y_left_; int * i4_top_; scalar_t__ i4_; TYPE_1__* enc_; } ;
typedef TYPE_2__ VP8EncIterator ;


 int FUNC_0 (TYPE_2__* const) ;
 int* VAR_0 ;

void FUNC_1(VP8EncIterator* const VAR_1) {
  const VP8Encoder* const VAR_2 = VAR_1->enc_;
  int VAR_3;

  VAR_1->i4_ = 0;
  VAR_1->i4_top_ = VAR_1->i4_boundary_ + VAR_0[0];


  for (VAR_3 = 0; VAR_3 < 17; ++VAR_3) {
    VAR_1->i4_boundary_[VAR_3] = VAR_1->y_left_[15 - VAR_3];
  }
  for (VAR_3 = 0; VAR_3 < 16; ++VAR_3) {
    VAR_1->i4_boundary_[17 + VAR_3] = VAR_1->y_top_[VAR_3];
  }

  if (VAR_1->x_ < VAR_2->mb_w_ - 1) {
    for (VAR_3 = 16; VAR_3 < 16 + 4; ++VAR_3) {
      VAR_1->i4_boundary_[17 + VAR_3] = VAR_1->y_top_[VAR_3];
    }
  } else {
    for (VAR_3 = 16; VAR_3 < 16 + 4; ++VAR_3) {
      VAR_1->i4_boundary_[17 + VAR_3] = VAR_1->i4_boundary_[17 + 15];
    }
  }
  FUNC_0(VAR_1);
}
