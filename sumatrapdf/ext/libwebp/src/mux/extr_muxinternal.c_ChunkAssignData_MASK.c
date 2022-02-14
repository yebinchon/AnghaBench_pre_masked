
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int WebPMuxError ;
typedef int WebPData ;
struct TYPE_5__ {int owner_; scalar_t__ tag_; int data_; } ;
typedef TYPE_1__ WebPChunk ;
struct TYPE_6__ {scalar_t__ tag; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const* const,int *) ;
 TYPE_2__* VAR_4 ;

WebPMuxError FUNC_2(WebPChunk* VAR_5, const WebPData* const VAR_6,
                             int VAR_7, uint32_t VAR_8) {

  if (VAR_8 == VAR_4[VAR_1].tag || VAR_8 == VAR_4[VAR_0].tag) {
    VAR_7 = 1;
  }

  FUNC_0(VAR_5);

  if (VAR_6 != ((void*)0)) {
    if (VAR_7) {
      if (!FUNC_1(VAR_6, &VAR_5->data_)) return VAR_2;
      VAR_5->owner_ = 1;
    } else {
      VAR_5->data_ = *VAR_6;
    }
  }
  VAR_5->tag_ = VAR_8;
  return VAR_3;
}
