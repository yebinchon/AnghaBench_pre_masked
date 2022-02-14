
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * stats; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_7__ {int block_count_; TYPE_1__* pic_; } ;
typedef TYPE_2__ VP8Encoder ;
struct TYPE_8__ {TYPE_2__* enc_; } ;
typedef TYPE_3__ VP8EncIterator ;


 int FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(const VP8EncIterator* const VAR_0) {
  VP8Encoder* const VAR_1 = VAR_0->enc_;
  WebPPicture* const VAR_2 = VAR_1->pic_;
  if (VAR_2->stats != ((void*)0)) {
    FUNC_1(VAR_1->block_count_, 0, sizeof(VAR_1->block_count_));
  }
  FUNC_0(VAR_1);
}
