
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next_; int data_; scalar_t__ owner_; } ;
typedef TYPE_1__ WebPChunk ;


 int FUNC_0 (TYPE_1__* const) ;
 int FUNC_1 (int *) ;

WebPChunk* FUNC_2(WebPChunk* const VAR_0) {
  WebPChunk* VAR_1;
  if (VAR_0 == ((void*)0)) return ((void*)0);
  if (VAR_0->owner_) {
    FUNC_1(&VAR_0->data_);
  }
  VAR_1 = VAR_0->next_;
  FUNC_0(VAR_0);
  return VAR_1;
}
