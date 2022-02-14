
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ VP8StatusCode ;
struct TYPE_13__ {int width_; int xscale_; int height_; int yscale_; void* clamp_type_; void* colorspace_; } ;
typedef TYPE_1__ VP8PictureHeader ;
struct TYPE_14__ {int* data; size_t data_size; int width; int height; int crop_right; int crop_bottom; int scaled_width; int scaled_height; int mb_w; int mb_h; scalar_t__ use_scaling; scalar_t__ crop_left; scalar_t__ crop_top; scalar_t__ use_cropping; } ;
typedef TYPE_2__ VP8Io ;
struct TYPE_15__ {int key_frame_; int profile_; int show_; int partition_length_; } ;
typedef TYPE_3__ VP8FrameHeader ;
struct TYPE_16__ {int mb_w_; int mb_h_; int ready_; int proba_; int segment_hdr_; int br_; TYPE_1__ pic_hdr_; TYPE_3__ frm_hdr_; } ;
typedef TYPE_4__ VP8Decoder ;
typedef int VP8BitReader ;


 int FUNC_0 (int *,TYPE_4__* const) ;
 scalar_t__ FUNC_1 (TYPE_4__* const,int const*,size_t) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_4__* const) ;
 int FUNC_5 (int const*,size_t) ;
 void* FUNC_6 (int *,char*) ;
 int FUNC_7 (int *,int const*,size_t) ;
 int FUNC_8 (int *,TYPE_4__* const) ;
 int FUNC_9 (TYPE_4__* const) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (TYPE_4__* const,scalar_t__,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_12(VP8Decoder* const VAR_5, VP8Io* const VAR_6) {
  const uint8_t* VAR_7;
  size_t VAR_8;
  VP8FrameHeader* VAR_9;
  VP8PictureHeader* VAR_10;
  VP8BitReader* VAR_11;
  VP8StatusCode VAR_12;

  if (VAR_5 == ((void*)0)) {
    return 0;
  }
  FUNC_4(VAR_5);
  if (VAR_6 == ((void*)0)) {
    return FUNC_11(VAR_5, VAR_1,
                       "null VP8Io passed to VP8GetHeaders()");
  }
  VAR_7 = VAR_6->data;
  VAR_8 = VAR_6->data_size;
  if (VAR_8 < 4) {
    return FUNC_11(VAR_5, VAR_2,
                       "Truncated header.");
  }


  {
    const uint32_t VAR_13 = VAR_7[0] | (VAR_7[1] << 8) | (VAR_7[2] << 16);
    VAR_9 = &VAR_5->frm_hdr_;
    VAR_9->key_frame_ = !(VAR_13 & 1);
    VAR_9->profile_ = (VAR_13 >> 1) & 7;
    VAR_9->show_ = (VAR_13 >> 4) & 1;
    VAR_9->partition_length_ = (VAR_13 >> 5);
    if (VAR_9->profile_ > 3) {
      return FUNC_11(VAR_5, VAR_0,
                         "Incorrect keyframe parameters.");
    }
    if (!VAR_9->show_) {
      return FUNC_11(VAR_5, VAR_4,
                         "Frame not displayable.");
    }
    VAR_7 += 3;
    VAR_8 -= 3;
  }

  VAR_10 = &VAR_5->pic_hdr_;
  if (VAR_9->key_frame_) {

    if (VAR_8 < 7) {
      return FUNC_11(VAR_5, VAR_2,
                         "cannot parse picture header");
    }
    if (!FUNC_5(VAR_7, VAR_8)) {
      return FUNC_11(VAR_5, VAR_0,
                         "Bad code word");
    }
    VAR_10->width_ = ((VAR_7[4] << 8) | VAR_7[3]) & 0x3fff;
    VAR_10->xscale_ = VAR_7[4] >> 6;
    VAR_10->height_ = ((VAR_7[6] << 8) | VAR_7[5]) & 0x3fff;
    VAR_10->yscale_ = VAR_7[6] >> 6;
    VAR_7 += 7;
    VAR_8 -= 7;

    VAR_5->mb_w_ = (VAR_10->width_ + 15) >> 4;
    VAR_5->mb_h_ = (VAR_10->height_ + 15) >> 4;


    VAR_6->width = VAR_10->width_;
    VAR_6->height = VAR_10->height_;



    VAR_6->use_cropping = 0;
    VAR_6->crop_top = 0;
    VAR_6->crop_left = 0;
    VAR_6->crop_right = VAR_6->width;
    VAR_6->crop_bottom = VAR_6->height;
    VAR_6->use_scaling = 0;
    VAR_6->scaled_width = VAR_6->width;
    VAR_6->scaled_height = VAR_6->height;

    VAR_6->mb_w = VAR_6->width;
    VAR_6->mb_h = VAR_6->height;

    FUNC_10(&VAR_5->proba_);
    FUNC_3(&VAR_5->segment_hdr_);
  }



  if (VAR_9->partition_length_ > VAR_8) {
    return FUNC_11(VAR_5, VAR_2,
                       "bad partition length");
  }

  VAR_11 = &VAR_5->br_;
  FUNC_7(VAR_11, VAR_7, VAR_9->partition_length_);
  VAR_7 += VAR_9->partition_length_;
  VAR_8 -= VAR_9->partition_length_;

  if (VAR_9->key_frame_) {
    VAR_10->colorspace_ = FUNC_6(VAR_11, "global-header");
    VAR_10->clamp_type_ = FUNC_6(VAR_11, "global-header");
  }
  if (!FUNC_2(VAR_11, &VAR_5->segment_hdr_, &VAR_5->proba_)) {
    return FUNC_11(VAR_5, VAR_0,
                       "cannot parse segment header");
  }

  if (!FUNC_0(VAR_11, VAR_5)) {
    return FUNC_11(VAR_5, VAR_0,
                       "cannot parse filter header");
  }
  VAR_12 = FUNC_1(VAR_5, VAR_7, VAR_8);
  if (VAR_12 != VAR_3) {
    return FUNC_11(VAR_5, VAR_12, "cannot parse partitions");
  }


  FUNC_9(VAR_5);


  if (!VAR_9->key_frame_) {
    return FUNC_11(VAR_5, VAR_4,
                       "Not a key frame.");
  }

  FUNC_6(VAR_11, "global-header");

  FUNC_8(VAR_11, VAR_5);


  VAR_5->ready_ = 1;
  return 1;
}
