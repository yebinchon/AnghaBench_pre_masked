
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int page_size_; scalar_t__ error_; scalar_t__ left_; int * pages_; int ** last_page_; int * tokens_; } ;
typedef TYPE_1__ VP8TBuffer ;


 int VAR_0 ;

void FUNC_0(VP8TBuffer* const VAR_1, int VAR_2) {
  VAR_1->tokens_ = ((void*)0);
  VAR_1->pages_ = ((void*)0);
  VAR_1->last_page_ = &VAR_1->pages_;
  VAR_1->left_ = 0;
  VAR_1->page_size_ = (VAR_2 < VAR_0) ? VAR_0 : VAR_2;
  VAR_1->error_ = 0;
}
