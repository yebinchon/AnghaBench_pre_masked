
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ tag_; struct TYPE_4__* next_; } ;
typedef TYPE_1__ WebPChunk ;



__attribute__((used)) static WebPChunk* FUNC_0(WebPChunk* VAR_0, uint32_t VAR_1) {
  while (VAR_0 != ((void*)0) && VAR_0->tag_ != VAR_1) {
    VAR_0 = VAR_0->next_;
  }
  return VAR_0;
}
