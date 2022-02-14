
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width_; int height_; struct TYPE_5__* next_; int * header_; int * img_; } ;
typedef TYPE_1__ WebPMuxImage ;
typedef scalar_t__ WebPMuxError ;
struct TYPE_6__ {TYPE_1__* images_; } ;
typedef TYPE_2__ WebPMux ;


 scalar_t__ FUNC_0 (TYPE_1__*,int*,int*,int*,int*,int*) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static WebPMuxError FUNC_2(const WebPMux* const VAR_2,
                                          int* const VAR_3, int* const VAR_4) {
  WebPMuxImage* VAR_5 = ((void*)0);
  FUNC_1(VAR_2 != ((void*)0));
  FUNC_1(VAR_3 != ((void*)0) && VAR_4 != ((void*)0));

  VAR_5 = VAR_2->images_;
  FUNC_1(VAR_5 != ((void*)0));
  FUNC_1(VAR_5->img_ != ((void*)0));

  if (VAR_5->next_ != ((void*)0)) {
    int VAR_6 = 0, VAR_7 = 0;

    FUNC_1(VAR_5->header_ != ((void*)0));

    for (; VAR_5 != ((void*)0); VAR_5 = VAR_5->next_) {
      int VAR_8 = 0, VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
      const WebPMuxError VAR_13 = FUNC_0(VAR_5, &VAR_8, &VAR_9,
                                            &VAR_10, &VAR_11, &VAR_12);
      const int VAR_14 = VAR_8 + VAR_11;
      const int VAR_15 = VAR_9 + VAR_12;
      if (VAR_13 != VAR_1) return VAR_13;
      FUNC_1(VAR_8 < VAR_0);
      FUNC_1(VAR_9 < VAR_0);

      if (VAR_14 > VAR_6) VAR_6 = VAR_14;
      if (VAR_15 > VAR_7) VAR_7 = VAR_15;
    }
    *VAR_3 = VAR_6;
    *VAR_4 = VAR_7;
  } else {

    *VAR_3 = VAR_5->width_;
    *VAR_4 = VAR_5->height_;
  }
  return VAR_1;
}
