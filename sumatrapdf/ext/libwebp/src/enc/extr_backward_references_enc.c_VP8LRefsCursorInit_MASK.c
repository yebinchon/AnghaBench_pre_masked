
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * last_pos_; int * cur_pos; TYPE_1__* cur_block_; } ;
typedef TYPE_2__ VP8LRefsCursor ;
struct TYPE_8__ {TYPE_1__* refs_; } ;
typedef TYPE_3__ VP8LBackwardRefs ;
struct TYPE_6__ {int size_; int * start_; } ;



VP8LRefsCursor FUNC_0(const VP8LBackwardRefs* const VAR_0) {
  VP8LRefsCursor VAR_1;
  VAR_1.cur_block_ = VAR_0->refs_;
  if (VAR_0->refs_ != ((void*)0)) {
    VAR_1.cur_pos = VAR_1.cur_block_->start_;
    VAR_1.last_pos_ = VAR_1.cur_pos + VAR_1.cur_block_->size_;
  } else {
    VAR_1.cur_pos = ((void*)0);
    VAR_1.last_pos_ = ((void*)0);
  }
  return VAR_1;
}
