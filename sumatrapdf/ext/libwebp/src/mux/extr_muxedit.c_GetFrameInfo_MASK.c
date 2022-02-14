
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WebPMuxError ;
struct TYPE_5__ {size_t const size; scalar_t__ bytes; } ;
typedef TYPE_1__ WebPData ;
struct TYPE_6__ {scalar_t__ tag_; TYPE_1__ data_; } ;
typedef TYPE_2__ WebPChunk ;
struct TYPE_7__ {scalar_t__ tag; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_3__* VAR_4 ;

__attribute__((used)) static WebPMuxError FUNC_2(
    const WebPChunk* const VAR_5,
    int* const VAR_6, int* const VAR_7, int* const VAR_8) {
  const WebPData* const VAR_9 = &VAR_5->data_;
  const size_t VAR_10 = VAR_0;
  FUNC_1(VAR_5->tag_ == VAR_4[VAR_1].tag);
  FUNC_1(VAR_5 != ((void*)0));
  if (VAR_9->size != VAR_10) return VAR_2;

  *VAR_6 = 2 * FUNC_0(VAR_9->bytes + 0);
  *VAR_7 = 2 * FUNC_0(VAR_9->bytes + 3);
  *VAR_8 = FUNC_0(VAR_9->bytes + 12);
  return VAR_3;
}
