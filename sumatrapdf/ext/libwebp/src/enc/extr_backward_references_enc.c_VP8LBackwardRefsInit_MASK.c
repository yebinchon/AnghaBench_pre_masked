
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int block_size_; int refs_; int * tail_; } ;
typedef TYPE_1__ VP8LBackwardRefs ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__* const,int ,int) ;

void FUNC_2(VP8LBackwardRefs* const VAR_1, int VAR_2) {
  FUNC_0(VAR_1 != ((void*)0));
  FUNC_1(VAR_1, 0, sizeof(*VAR_1));
  VAR_1->tail_ = &VAR_1->refs_;
  VAR_1->block_size_ =
      (VAR_2 < VAR_0) ? VAR_0 : VAR_2;
}
