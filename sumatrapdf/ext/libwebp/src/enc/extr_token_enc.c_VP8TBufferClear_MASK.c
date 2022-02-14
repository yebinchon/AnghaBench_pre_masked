
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next_; } ;
typedef TYPE_1__ VP8Tokens ;
struct TYPE_7__ {int page_size_; TYPE_1__* pages_; } ;
typedef TYPE_2__ VP8TBuffer ;


 int FUNC_0 (TYPE_2__* const,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(VP8TBuffer* const VAR_0) {
  if (VAR_0 != ((void*)0)) {
    VP8Tokens* VAR_1 = VAR_0->pages_;
    while (VAR_1 != ((void*)0)) {
      VP8Tokens* const VAR_2 = VAR_1->next_;
      FUNC_1(VAR_1);
      VAR_1 = VAR_2;
    }
    FUNC_0(VAR_0, VAR_0->page_size_);
  }
}
