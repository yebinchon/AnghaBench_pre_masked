
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WebPInfoStatus ;
struct TYPE_3__ {int num_frames_; int feature_flags_; scalar_t__* chunk_counts_; scalar_t__ is_processing_anim_frame_; scalar_t__ has_alpha_; } ;
typedef TYPE_1__ WebPInfo ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static WebPInfoStatus FUNC_2(const WebPInfo* const VAR_14) {
  if (VAR_14->num_frames_ < 1) {
    FUNC_0("No image/frame detected.");
    return VAR_10;
  }
  if (VAR_14->chunk_counts_[VAR_6]) {
    const int VAR_15 = !!(VAR_14->feature_flags_ & VAR_9);
    const int VAR_16 = !!(VAR_14->feature_flags_ & VAR_8);
    const int VAR_17 = !!(VAR_14->feature_flags_ & VAR_13);
    const int VAR_18 = !!(VAR_14->feature_flags_ & VAR_1);
    const int VAR_19 = !!(VAR_14->feature_flags_ & VAR_0);
    if (!VAR_19 && VAR_14->has_alpha_) {
      FUNC_0("Unexpected alpha data detected.");
      return VAR_12;
    }
    if (VAR_19 && !VAR_14->has_alpha_) {
      FUNC_1("Alpha flag is set with no alpha data present.");
    }
    if (VAR_15 && !VAR_14->chunk_counts_[VAR_5]) {
      FUNC_0("Missing ICCP chunk.");
      return VAR_10;
    }
    if (VAR_16 && !VAR_14->chunk_counts_[VAR_4]) {
      FUNC_0("Missing EXIF chunk.");
      return VAR_10;
    }
    if (VAR_17 && !VAR_14->chunk_counts_[VAR_7]) {
      FUNC_0("Missing XMP chunk.");
      return VAR_10;
    }
    if (!VAR_15 && VAR_14->chunk_counts_[VAR_5]) {
      FUNC_0("Unexpected ICCP chunk detected.");
      return VAR_12;
    }
    if (!VAR_16 && VAR_14->chunk_counts_[VAR_4]) {
      FUNC_0("Unexpected EXIF chunk detected.");
      return VAR_12;
    }
    if (!VAR_17 && VAR_14->chunk_counts_[VAR_7]) {
      FUNC_0("Unexpected XMP chunk detected.");
      return VAR_12;
    }

    if (VAR_14->is_processing_anim_frame_) return VAR_10;
    if (!VAR_18 && VAR_14->num_frames_ > 1) {
      FUNC_0("More than 1 frame detected in non-animation file.");
      return VAR_12;
    }
    if (VAR_18 && (!VAR_14->chunk_counts_[VAR_2] ||
        !VAR_14->chunk_counts_[VAR_3])) {
      FUNC_0("No ANIM/ANMF chunk detected in animation file.");
      return VAR_12;
    }
  }
  return VAR_11;
}
