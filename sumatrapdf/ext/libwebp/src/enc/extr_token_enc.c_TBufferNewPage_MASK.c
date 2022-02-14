
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int token_t ;
struct TYPE_5__ {struct TYPE_5__* next_; } ;
typedef TYPE_1__ VP8Tokens ;
struct TYPE_6__ {int error_; int page_size_; int left_; int * tokens_; TYPE_1__** last_page_; } ;
typedef TYPE_2__ VP8TBuffer ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (unsigned long long,size_t const) ;

__attribute__((used)) static int FUNC_2(VP8TBuffer* const VAR_0) {
  VP8Tokens* VAR_1 = ((void*)0);
  if (!VAR_0->error_) {
    const size_t VAR_2 = sizeof(*VAR_1) + VAR_0->page_size_ * sizeof(token_t);
    VAR_1 = (VP8Tokens*)FUNC_1(1ULL, VAR_2);
  }
  if (VAR_1 == ((void*)0)) {
    VAR_0->error_ = 1;
    return 0;
  }
  VAR_1->next_ = ((void*)0);

  *VAR_0->last_page_ = VAR_1;
  VAR_0->last_page_ = &VAR_1->next_;
  VAR_0->left_ = VAR_0->page_size_;
  VAR_0->tokens_ = (token_t*)FUNC_0(VAR_1);
  return 1;
}
