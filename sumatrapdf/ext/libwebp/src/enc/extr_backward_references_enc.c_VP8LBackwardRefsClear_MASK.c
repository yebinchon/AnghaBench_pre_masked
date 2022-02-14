
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* free_blocks_; } ;
typedef TYPE_1__ VP8LBackwardRefs ;
struct TYPE_7__ {struct TYPE_7__* next_; } ;
typedef TYPE_2__ PixOrCopyBlock ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;

void FUNC_3(VP8LBackwardRefs* const VAR_0) {
  FUNC_2(VAR_0 != ((void*)0));
  FUNC_0(VAR_0);
  while (VAR_0->free_blocks_ != ((void*)0)) {
    PixOrCopyBlock* const VAR_1 = VAR_0->free_blocks_->next_;
    FUNC_1(VAR_0->free_blocks_);
    VAR_0->free_blocks_ = VAR_1;
  }
}
