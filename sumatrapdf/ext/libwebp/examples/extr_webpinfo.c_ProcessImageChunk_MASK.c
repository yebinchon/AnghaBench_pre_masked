
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ WebPInfoStatus ;
struct TYPE_11__ {scalar_t__ frame_width_; scalar_t__ frame_height_; int seen_image_subchunk_; scalar_t__ canvas_width_; scalar_t__ canvas_height_; int has_alpha_; scalar_t__ parse_bitstream_; int num_frames_; scalar_t__* chunk_counts_; scalar_t__ seen_alpha_subchunk_; int * anmf_subchunk_counts_; scalar_t__ is_processing_anim_frame_; int quiet_; } ;
typedef TYPE_1__ WebPInfo ;
struct TYPE_12__ {int format; int width; int height; int has_alpha; int has_animation; } ;
typedef TYPE_2__ WebPBitstreamFeatures ;
typedef scalar_t__ VP8StatusCode ;
struct TYPE_13__ {size_t id_; int size_; int payload_; } ;
typedef TYPE_3__ ChunkData ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_3__ const* const,TYPE_1__* const) ;
 scalar_t__ FUNC_3 (TYPE_3__ const* const,TYPE_1__* const) ;
 scalar_t__ const VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ const VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_4 (int const*,int ,TYPE_2__*) ;
 int FUNC_5 (int) ;
 char** VAR_13 ;
 int FUNC_6 (char*,int,int,int,int,char*,size_t) ;

__attribute__((used)) static WebPInfoStatus FUNC_7(const ChunkData* const VAR_14,
                                        WebPInfo* const VAR_15) {
  const uint8_t* VAR_16 = VAR_14->payload_ - VAR_3;
  WebPBitstreamFeatures VAR_17;
  const VP8StatusCode VAR_18 =
      FUNC_4(VAR_16, VAR_14->size_, &VAR_17);
  if (VAR_18 != VAR_9) {
    FUNC_0("VP8/VP8L bitstream error.");
    return VAR_10;
  }
  if (!VAR_15->quiet_) {
    FUNC_5(VAR_17.format >= 0 && VAR_17.format <= 2);
    FUNC_6("  Width: %d\n  Height: %d\n  Alpha: %d\n  Animation: %d\n"
           "  Format: %s (%d)\n",
           VAR_17.width, VAR_17.height, VAR_17.has_alpha,
           VAR_17.has_animation, VAR_13[VAR_17.format], VAR_17.format);
  }
  if (VAR_15->is_processing_anim_frame_) {
    ++VAR_15->anmf_subchunk_counts_[VAR_14->id_ == VAR_4 ? 0 : 1];
    if (VAR_14->id_ == VAR_5 && VAR_15->seen_alpha_subchunk_) {
      FUNC_0("Both VP8L and ALPH sub-chunks are present in an ANMF chunk.");
      return VAR_12;
    }
    if (VAR_15->frame_width_ != VAR_17.width ||
        VAR_15->frame_height_ != VAR_17.height) {
      FUNC_0("Frame size in VP8/VP8L sub-chunk differs from ANMF header.");
      return VAR_12;
    }
    if (VAR_15->seen_image_subchunk_) {
      FUNC_0("Consecutive VP8/VP8L sub-chunks in an ANMF chunk.");
      return VAR_12;
    }
    VAR_15->seen_image_subchunk_ = 1;
  } else {
    if (VAR_15->chunk_counts_[VAR_4] ||
        VAR_15->chunk_counts_[VAR_5]) {
      FUNC_0("Multiple VP8/VP8L chunks detected.");
      return VAR_12;
    }
    if (VAR_14->id_ == VAR_5 &&
        VAR_15->chunk_counts_[VAR_0]) {
      FUNC_1("Both VP8L and ALPH chunks are detected.");
    }
    if (VAR_15->chunk_counts_[VAR_1] ||
        VAR_15->chunk_counts_[VAR_2]) {
      FUNC_0("VP8/VP8L chunk and ANIM/ANMF chunk are both detected.");
      return VAR_12;
    }
    if (VAR_15->chunk_counts_[VAR_6]) {
      if (VAR_15->canvas_width_ != VAR_17.width ||
          VAR_15->canvas_height_ != VAR_17.height) {
        FUNC_0("Image size in VP8/VP8L chunk differs from VP8X chunk.");
        return VAR_12;
      }
    } else {
      VAR_15->canvas_width_ = VAR_17.width;
      VAR_15->canvas_height_ = VAR_17.height;
      if (VAR_15->canvas_width_ < 1 || VAR_15->canvas_height_ < 1 ||
          VAR_15->canvas_width_ > VAR_7 ||
          VAR_15->canvas_height_ > VAR_7 ||
          (uint64_t)VAR_15->canvas_width_ * VAR_15->canvas_height_ >
              VAR_8) {
        FUNC_1("Invalid parameters in VP8/VP8L chunk.");
      }
    }
    ++VAR_15->chunk_counts_[VAR_14->id_];
  }
  ++VAR_15->num_frames_;
  VAR_15->has_alpha_ |= VAR_17.has_alpha;
  if (VAR_15->parse_bitstream_) {
    const int VAR_19 = (VAR_14->id_ == VAR_4);
    const WebPInfoStatus VAR_20 =
        VAR_19 ? FUNC_3(VAR_14, VAR_15)
                 : FUNC_2(VAR_14, VAR_15);
    if (VAR_20 != VAR_11) return VAR_20;
  }
  return VAR_11;
}
