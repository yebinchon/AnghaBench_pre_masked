
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ WEBP_FILTER_TYPE ;
struct TYPE_8__ {size_t width; size_t height; int crop_bottom; int crop_top; int crop_right; int crop_left; int use_cropping; TYPE_2__* opaque; } ;
typedef TYPE_1__ VP8Io ;
struct TYPE_9__ {int* output_; size_t width_; size_t height_; int method_; scalar_t__ filter_; int pre_processing_; TYPE_1__ io_; } ;
typedef TYPE_2__ ALPHDecoder ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__* const) ;
 int FUNC_2 (TYPE_2__* const,int const* const,size_t const) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,TYPE_1__* const) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(ALPHDecoder* const VAR_5, const uint8_t* VAR_6,
                    size_t VAR_7, const VP8Io* const VAR_8,
                    uint8_t* VAR_9) {
  int VAR_10 = 0;
  const uint8_t* const VAR_11 = VAR_6 + VAR_0;
  const size_t VAR_12 = VAR_7 - VAR_0;
  int VAR_13;
  VP8Io* const VAR_14 = &VAR_5->io_;

  FUNC_4(VAR_6 != ((void*)0) && VAR_9 != ((void*)0) && VAR_8 != ((void*)0));

  FUNC_0();
  VAR_5->output_ = VAR_9;
  VAR_5->width_ = VAR_8->width;
  VAR_5->height_ = VAR_8->height;
  FUNC_4(VAR_5->width_ > 0 && VAR_5->height_ > 0);

  if (VAR_7 <= VAR_0) {
    return 0;
  }

  VAR_5->method_ = (VAR_6[0] >> 0) & 0x03;
  VAR_5->filter_ = (WEBP_FILTER_TYPE)((VAR_6[0] >> 2) & 0x03);
  VAR_5->pre_processing_ = (VAR_6[0] >> 4) & 0x03;
  VAR_13 = (VAR_6[0] >> 6) & 0x03;
  if (VAR_5->method_ < VAR_2 ||
      VAR_5->method_ > VAR_1 ||
      VAR_5->filter_ >= VAR_4 ||
      VAR_5->pre_processing_ > VAR_3 ||
      VAR_13 != 0) {
    return 0;
  }


  FUNC_1(VAR_14);
  FUNC_3(((void*)0), VAR_14);
  VAR_14->opaque = VAR_5;
  VAR_14->width = VAR_8->width;
  VAR_14->height = VAR_8->height;

  VAR_14->use_cropping = VAR_8->use_cropping;
  VAR_14->crop_left = VAR_8->crop_left;
  VAR_14->crop_right = VAR_8->crop_right;
  VAR_14->crop_top = VAR_8->crop_top;
  VAR_14->crop_bottom = VAR_8->crop_bottom;


  if (VAR_5->method_ == VAR_2) {
    const size_t VAR_15 = VAR_5->width_ * VAR_5->height_;
    VAR_10 = (VAR_12 >= VAR_15);
  } else {
    FUNC_4(VAR_5->method_ == VAR_1);
    VAR_10 = FUNC_2(VAR_5, VAR_11, VAR_12);
  }

  return VAR_10;
}
