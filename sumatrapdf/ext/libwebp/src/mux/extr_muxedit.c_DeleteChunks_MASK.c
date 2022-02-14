
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int WebPMuxError ;
struct TYPE_6__ {scalar_t__ tag_; struct TYPE_6__* next_; } ;
typedef TYPE_1__ WebPChunk ;


 TYPE_1__* FUNC_0 (TYPE_1__* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__**) ;

__attribute__((used)) static WebPMuxError FUNC_2(WebPChunk** VAR_2, uint32_t VAR_3) {
  WebPMuxError VAR_4 = VAR_0;
  FUNC_1(VAR_2);
  while (*VAR_2) {
    WebPChunk* const VAR_5 = *VAR_2;
    if (VAR_5->tag_ == VAR_3) {
      *VAR_2 = FUNC_0(VAR_5);
      VAR_4 = VAR_1;
    } else {
      VAR_2 = &VAR_5->next_;
    }
  }
  return VAR_4;
}
