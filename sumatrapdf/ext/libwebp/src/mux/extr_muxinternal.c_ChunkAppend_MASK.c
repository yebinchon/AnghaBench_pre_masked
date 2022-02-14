
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WebPMuxError ;
struct TYPE_6__ {struct TYPE_6__* next_; } ;
typedef TYPE_1__ WebPChunk ;


 int FUNC_0 (TYPE_1__* const,TYPE_1__**) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

WebPMuxError FUNC_2(WebPChunk* const VAR_1,
                         WebPChunk*** const VAR_2) {
  FUNC_1(VAR_2 != ((void*)0) && *VAR_2 != ((void*)0));

  if (**VAR_2 == ((void*)0)) {
    FUNC_0(VAR_1, *VAR_2);
  } else {
    WebPChunk* VAR_3 = **VAR_2;
    while (VAR_3->next_ != ((void*)0)) VAR_3 = VAR_3->next_;
    FUNC_0(VAR_1, &VAR_3->next_);
    *VAR_2 = &VAR_3->next_;
  }
  return VAR_0;
}
