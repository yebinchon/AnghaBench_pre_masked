
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int width; int height; int argb_stride; int * argb; } ;
typedef TYPE_1__ WebPPicture ;
typedef scalar_t__ WebPEncodingError ;
struct TYPE_6__ {scalar_t__ argb_content_; int const current_width_; int * argb_; TYPE_1__* pic_; } ;
typedef TYPE_2__ VP8LEncoder ;


 scalar_t__ FUNC_0 (TYPE_2__* const,int const,int const) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int const*,int const) ;

__attribute__((used)) static WebPEncodingError FUNC_3(VP8LEncoder* const VAR_2) {
  WebPEncodingError VAR_3 = VAR_0;
  const WebPPicture* const VAR_4 = VAR_2->pic_;
  const int VAR_5 = VAR_4->width;
  const int VAR_6 = VAR_4->height;

  VAR_3 = FUNC_0(VAR_2, VAR_5, VAR_6);
  if (VAR_3 != VAR_0) return VAR_3;
  if (VAR_2->argb_content_ == VAR_1) return VAR_0;

  {
    uint32_t* VAR_7 = VAR_2->argb_;
    const uint32_t* VAR_8 = VAR_4->argb;
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
      FUNC_2(VAR_7, VAR_8, VAR_5 * sizeof(*VAR_7));
      VAR_7 += VAR_5;
      VAR_8 += VAR_4->argb_stride;
    }
  }
  VAR_2->argb_content_ = VAR_1;
  FUNC_1(VAR_2->current_width_ == VAR_5);
  return VAR_0;
}
