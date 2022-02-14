
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int WebPInfoStatus ;
struct TYPE_5__ {int is_processing_anim_frame_; int frame_width_; int frame_height_; scalar_t__ anim_frame_data_size_; scalar_t__ seen_image_subchunk_; scalar_t__ seen_alpha_subchunk_; scalar_t__ canvas_height_; scalar_t__ canvas_width_; int quiet_; int * chunk_counts_; } ;
typedef TYPE_1__ WebPInfo ;
struct TYPE_6__ {int* payload_; scalar_t__ size_; } ;
typedef TYPE_2__ ChunkData ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int const**) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int,int,int,int,int,int,int) ;

__attribute__((used)) static WebPInfoStatus FUNC_3(const ChunkData* const VAR_10,
                                       WebPInfo* const VAR_11) {
  const uint8_t* VAR_12 = VAR_10->payload_;
  int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
  if (VAR_11->is_processing_anim_frame_) {
    FUNC_0("ANMF chunk detected within another ANMF chunk.");
    return VAR_8;
  }
  if (!VAR_11->chunk_counts_[VAR_1]) {
    FUNC_0("ANMF chunk detected before ANIM chunk.");
    return VAR_8;
  }
  if (VAR_10->size_ <= VAR_3 + VAR_0) {
    FUNC_0("Truncated data detected when parsing ANMF chunk.");
    return VAR_9;
  }
  VAR_13 = 2 * FUNC_1(&VAR_12);
  VAR_14 = 2 * FUNC_1(&VAR_12);
  VAR_15 = 1 + FUNC_1(&VAR_12);
  VAR_16 = 1 + FUNC_1(&VAR_12);
  VAR_17 = FUNC_1(&VAR_12);
  VAR_20 = *VAR_12;
  VAR_19 = VAR_20 & 1;
  VAR_18 = (VAR_20 >> 1) & 1;
  ++VAR_11->chunk_counts_[VAR_2];
  if (!VAR_11->quiet_) {
    FUNC_2("  Offset_X: %d\n  Offset_Y: %d\n  Width: %d\n  Height: %d\n"
           "  Duration: %d\n  Dispose: %d\n  Blend: %d\n",
           VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_19, VAR_18);
  }
  if (VAR_17 > VAR_4) {
    FUNC_0("Invalid duration parameter in ANMF chunk.");
    return VAR_6;
  }
  if (VAR_13 > VAR_5 || VAR_14 > VAR_5) {
    FUNC_0("Invalid offset parameters in ANMF chunk.");
    return VAR_6;
  }
  if ((uint64_t)VAR_13 + VAR_15 > (uint64_t)VAR_11->canvas_width_ ||
      (uint64_t)VAR_14 + VAR_16 > (uint64_t)VAR_11->canvas_height_) {
    FUNC_0("Frame exceeds canvas in ANMF chunk.");
    return VAR_6;
  }
  VAR_11->is_processing_anim_frame_ = 1;
  VAR_11->seen_alpha_subchunk_ = 0;
  VAR_11->seen_image_subchunk_ = 0;
  VAR_11->frame_width_ = VAR_15;
  VAR_11->frame_height_ = VAR_16;
  VAR_11->anim_frame_data_size_ =
      VAR_10->size_ - VAR_3 - VAR_0;
  return VAR_7;
}
