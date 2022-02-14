
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {scalar_t__ tag_; struct TYPE_3__* next_; } ;
typedef TYPE_1__ WebPChunk ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(const WebPChunk* const VAR_1, uint32_t VAR_2) {
  int VAR_3 = 0;
  const WebPChunk* VAR_4;
  for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next_) {
    if (VAR_2 == VAR_0 || VAR_4->tag_ == VAR_2) {
      VAR_3++;
    }
  }
  return VAR_3;
}
