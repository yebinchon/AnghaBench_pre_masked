
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * refs_; int * last_block_; int ** tail_; int * free_blocks_; } ;
typedef TYPE_1__ VP8LBackwardRefs ;


 int FUNC_0 (int ) ;

void FUNC_1(VP8LBackwardRefs* const VAR_0) {
  FUNC_0(VAR_0 != ((void*)0));
  if (VAR_0->tail_ != ((void*)0)) {
    *VAR_0->tail_ = VAR_0->free_blocks_;
  }
  VAR_0->free_blocks_ = VAR_0->refs_;
  VAR_0->tail_ = &VAR_0->refs_;
  VAR_0->last_block_ = ((void*)0);
  VAR_0->refs_ = ((void*)0);
}
