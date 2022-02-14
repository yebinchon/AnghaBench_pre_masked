
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mb_w_; int * top_derr_; int * nz_; int * y_top_; } ;
typedef TYPE_1__ VP8Encoder ;
struct TYPE_5__ {TYPE_1__* enc_; } ;
typedef TYPE_2__ VP8EncIterator ;


 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void FUNC_1(VP8EncIterator* const VAR_0) {
  const VP8Encoder* const VAR_1 = VAR_0->enc_;
  const size_t VAR_2 = VAR_1->mb_w_ * 16;
  FUNC_0(VAR_1->y_top_, 127, 2 * VAR_2);
  FUNC_0(VAR_1->nz_, 0, VAR_1->mb_w_ * sizeof(*VAR_1->nz_));
  if (VAR_1->top_derr_ != ((void*)0)) {
    FUNC_0(VAR_1->top_derr_, 0, VAR_1->mb_w_ * sizeof(*VAR_1->top_derr_));
  }
}
