
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mb_w_; int mb_h_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_8__ {scalar_t__ do_trellis_; int bit_count_; TYPE_1__* enc_; } ;
typedef TYPE_2__ VP8EncIterator ;


 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (TYPE_2__* const,int) ;
 int FUNC_2 (TYPE_2__* const,int ) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(VP8EncIterator* const VAR_0) {
  VP8Encoder* const VAR_1 = VAR_0->enc_;
  FUNC_2(VAR_0, 0);
  FUNC_1(VAR_0, VAR_1->mb_w_ * VAR_1->mb_h_);
  FUNC_0(VAR_0);
  FUNC_3(VAR_0->bit_count_, 0, sizeof(VAR_0->bit_count_));
  VAR_0->do_trellis_ = 0;
}
