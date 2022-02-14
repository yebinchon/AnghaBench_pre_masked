
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* cur_block_; int * last_pos_; int * cur_pos; } ;
typedef TYPE_1__ VP8LRefsCursor ;
struct TYPE_5__ {int size_; int * start_; struct TYPE_5__* next_; } ;
typedef TYPE_2__ PixOrCopyBlock ;



void FUNC_0(VP8LRefsCursor* const VAR_0) {
  PixOrCopyBlock* const VAR_1 = VAR_0->cur_block_->next_;
  VAR_0->cur_pos = (VAR_1 == ((void*)0)) ? ((void*)0) : VAR_1->start_;
  VAR_0->last_pos_ = (VAR_1 == ((void*)0)) ? ((void*)0) : VAR_1->start_ + VAR_1->size_;
  VAR_0->cur_block_ = VAR_1;
}
