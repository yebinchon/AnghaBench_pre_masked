
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef int const WebPChunkId ;
struct TYPE_7__ {int tag_; } ;
typedef TYPE_2__ WebPChunk ;


 int const FUNC_0 (int ) ;
 TYPE_2__** FUNC_1 (TYPE_1__ const*,int const) ;
 int const VAR_0 ;

int FUNC_2(const WebPMuxImage* VAR_1, WebPChunkId VAR_2) {
  int VAR_3 = 0;
  const WebPMuxImage* VAR_4;
  for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next_) {
    if (VAR_2 == VAR_0) {
      ++VAR_3;
    } else {
      const WebPChunk* const VAR_5 = *FUNC_1(VAR_4, VAR_2);
      if (VAR_5 != ((void*)0)) {
        const WebPChunkId VAR_6 = FUNC_0(VAR_5->tag_);
        if (VAR_6 == VAR_2) ++VAR_3;
      }
    }
  }
  return VAR_3;
}
