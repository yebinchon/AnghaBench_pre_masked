
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WebPMuxError ;
struct TYPE_4__ {int * next_; scalar_t__ owner_; } ;
typedef TYPE_1__ WebPChunk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (unsigned long long,int) ;
 int FUNC_1 (int ) ;

WebPMuxError FUNC_2(WebPChunk* const VAR_3,
                          WebPChunk** const VAR_4) {
  WebPChunk* VAR_5;

  FUNC_1(VAR_4 != ((void*)0));
  if (*VAR_4 != ((void*)0)) {
    return VAR_1;
  }

  VAR_5 = (WebPChunk*)FUNC_0(1ULL, sizeof(*VAR_5));
  if (VAR_5 == ((void*)0)) return VAR_0;
  *VAR_5 = *VAR_3;
  VAR_3->owner_ = 0;
  VAR_5->next_ = ((void*)0);
  *VAR_4 = VAR_5;
  return VAR_2;
}
