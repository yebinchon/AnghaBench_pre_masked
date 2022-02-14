
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WebPMuxError ;
struct TYPE_5__ {int images_; } ;
typedef TYPE_1__ WebPMux ;
typedef int WebPChunkId ;
typedef int WebPChunk ;
struct TYPE_6__ {int tag; } ;
typedef size_t CHUNK_INDEX ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int * const,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int ** FUNC_3 (TYPE_1__ const*,int ) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

WebPMuxError FUNC_5(const WebPMux* VAR_3,
                              WebPChunkId VAR_4, int* VAR_5) {
  if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0)) {
    return VAR_0;
  }

  if (FUNC_2(VAR_4)) {
    *VAR_5 = FUNC_4(VAR_3->images_, VAR_4);
  } else {
    WebPChunk* const* VAR_6 = FUNC_3(VAR_3, VAR_4);
    const CHUNK_INDEX VAR_7 = FUNC_0(VAR_4);
    *VAR_5 = FUNC_1(*VAR_6, VAR_2[VAR_7].tag);
  }

  return VAR_1;
}
