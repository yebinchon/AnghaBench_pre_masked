
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int lossy_1x1_bytes ;
typedef int lossless_1x1_bytes ;
struct TYPE_17__ {int const* member_0; int member_1; } ;
typedef TYPE_5__ WebPData ;
struct TYPE_19__ {int member_2; int member_3; int member_1; int member_0; } ;
struct TYPE_14__ {scalar_t__ allow_mixed; } ;
struct TYPE_13__ {scalar_t__ lossless; } ;
struct TYPE_18__ {int count_; int flush_count_; TYPE_7__ prev_rect_; scalar_t__ prev_candidate_undecided_; int count_since_key_frame_; TYPE_2__ options_; TYPE_1__ last_config_; } ;
typedef TYPE_6__ WebPAnimEncoder ;
struct TYPE_16__ {int duration; } ;
struct TYPE_15__ {int duration; int bitstream; int blend_method; int dispose_method; scalar_t__ y_offset; scalar_t__ x_offset; int id; } ;
struct TYPE_20__ {TYPE_4__ key_frame_; TYPE_3__ sub_frame_; scalar_t__ is_key_frame_; } ;
typedef TYPE_7__ FrameRectangle ;
typedef TYPE_8__ EncodedFrame ;


 TYPE_8__* FUNC_0 (TYPE_6__* const,size_t const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_5__ const*,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(WebPAnimEncoder* const VAR_4, int VAR_5) {
  const size_t VAR_6 = VAR_4->count_ - 1;
  EncodedFrame* const VAR_7 = FUNC_0(VAR_4, VAR_6);
  int VAR_8;

  FUNC_2(VAR_4->count_ >= 1);
  FUNC_2(VAR_7->sub_frame_.duration ==
         VAR_7->key_frame_.duration);
  FUNC_2(VAR_7->sub_frame_.duration ==
         (VAR_7->sub_frame_.duration & (VAR_0 - 1)));
  FUNC_2(VAR_5 == (VAR_5 & (VAR_0 - 1)));

  VAR_8 = VAR_7->sub_frame_.duration + VAR_5;
  if (VAR_8 >= VAR_0) {


    const FrameRectangle VAR_9 = { 0, 0, 1, 1 };
    const uint8_t VAR_10[] = {
      0x52, 0x49, 0x46, 0x46, 0x14, 0x00, 0x00, 0x00, 0x57, 0x45, 0x42, 0x50,
      0x56, 0x50, 0x38, 0x4c, 0x08, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00,
      0x10, 0x88, 0x88, 0x08
    };
    const WebPData VAR_11 = {
        VAR_10, sizeof(VAR_10)
    };
    const uint8_t VAR_12[] = {
      0x52, 0x49, 0x46, 0x46, 0x40, 0x00, 0x00, 0x00, 0x57, 0x45, 0x42, 0x50,
      0x56, 0x50, 0x38, 0x58, 0x0a, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x4c, 0x50, 0x48, 0x02, 0x00,
      0x00, 0x00, 0x00, 0x00, 0x56, 0x50, 0x38, 0x20, 0x18, 0x00, 0x00, 0x00,
      0x30, 0x01, 0x00, 0x9d, 0x01, 0x2a, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00,
      0x34, 0x25, 0xa4, 0x00, 0x03, 0x70, 0x00, 0xfe, 0xfb, 0xfd, 0x50, 0x00
    };
    const WebPData VAR_13 = { VAR_12, sizeof(VAR_12) };
    const int VAR_14 =
        (VAR_4->last_config_.lossless || VAR_4->options_.allow_mixed);
    EncodedFrame* const VAR_15 = FUNC_0(VAR_4, VAR_4->count_);
    VAR_15->is_key_frame_ = 0;
    VAR_15->sub_frame_.id = VAR_1;
    VAR_15->sub_frame_.x_offset = 0;
    VAR_15->sub_frame_.y_offset = 0;
    VAR_15->sub_frame_.dispose_method = VAR_3;
    VAR_15->sub_frame_.blend_method = VAR_2;
    VAR_15->sub_frame_.duration = VAR_5;
    if (!FUNC_1(VAR_14 ? &VAR_11 : &VAR_13,
                      &VAR_15->sub_frame_.bitstream)) {
      return 0;
    }
    ++VAR_4->count_;
    ++VAR_4->count_since_key_frame_;
    VAR_4->flush_count_ = VAR_4->count_ - 1;
    VAR_4->prev_candidate_undecided_ = 0;
    VAR_4->prev_rect_ = VAR_9;
  } else {

    VAR_7->sub_frame_.duration = VAR_8;
    VAR_7->key_frame_.duration = VAR_8;
  }
  return 1;
}
