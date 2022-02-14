
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ block_size_; TYPE_2__* last_block_; } ;
typedef TYPE_1__ VP8LBackwardRefs ;
struct TYPE_7__ {scalar_t__ size_; int * start_; } ;
typedef TYPE_2__ PixOrCopyBlock ;
typedef int PixOrCopy ;


 TYPE_2__* FUNC_0 (TYPE_1__* const) ;

void FUNC_1(VP8LBackwardRefs* const VAR_0,
                               const PixOrCopy VAR_1) {
  PixOrCopyBlock* VAR_2 = VAR_0->last_block_;
  if (VAR_2 == ((void*)0) || VAR_2->size_ == VAR_0->block_size_) {
    VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 == ((void*)0)) return;
  }
  VAR_2->start_[VAR_2->size_++] = VAR_1;
}
