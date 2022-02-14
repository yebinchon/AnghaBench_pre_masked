
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int block_size_; int error_; TYPE_2__* last_block_; TYPE_2__** tail_; TYPE_2__* free_blocks_; } ;
typedef TYPE_1__ VP8LBackwardRefs ;
struct TYPE_6__ {scalar_t__ size_; struct TYPE_6__* next_; int * start_; } ;
typedef TYPE_2__ PixOrCopyBlock ;
typedef int PixOrCopy ;


 scalar_t__ FUNC_0 (unsigned long long,size_t const) ;

__attribute__((used)) static PixOrCopyBlock* FUNC_1(VP8LBackwardRefs* const VAR_0) {
  PixOrCopyBlock* VAR_1 = VAR_0->free_blocks_;
  if (VAR_1 == ((void*)0)) {
    const size_t VAR_2 =
        sizeof(*VAR_1) + VAR_0->block_size_ * sizeof(*VAR_1->start_);
    VAR_1 = (PixOrCopyBlock*)FUNC_0(1ULL, VAR_2);
    if (VAR_1 == ((void*)0)) {
      VAR_0->error_ |= 1;
      return ((void*)0);
    }
    VAR_1->start_ = (PixOrCopy*)((uint8_t*)VAR_1 + sizeof(*VAR_1));
  } else {
    VAR_0->free_blocks_ = VAR_1->next_;
  }
  *VAR_0->tail_ = VAR_1;
  VAR_0->tail_ = &VAR_1->next_;
  VAR_0->last_block_ = VAR_1;
  VAR_1->next_ = ((void*)0);
  VAR_1->size_ = 0;
  return VAR_1;
}
