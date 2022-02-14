
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef int WebPMuxError ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long long,int) ;

WebPMuxError FUNC_1(const WebPMuxImage* VAR_2, WebPMuxImage** VAR_3) {
  WebPMuxImage* VAR_4;

  while (*VAR_3 != ((void*)0)) {
    WebPMuxImage* const VAR_5 = *VAR_3;
    if (VAR_5->next_ == ((void*)0)) break;
    VAR_3 = &VAR_5->next_;
  }

  VAR_4 = (WebPMuxImage*)FUNC_0(1ULL, sizeof(*VAR_4));
  if (VAR_4 == ((void*)0)) return VAR_0;
  *VAR_4 = *VAR_2;
  VAR_4->next_ = ((void*)0);

  if (*VAR_3 != ((void*)0)) {
    (*VAR_3)->next_ = VAR_4;
  } else {
    *VAR_3 = VAR_4;
  }
  return VAR_1;
}
