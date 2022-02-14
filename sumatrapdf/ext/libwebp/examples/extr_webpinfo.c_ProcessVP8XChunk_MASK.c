
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int WebPInfoStatus ;
struct TYPE_5__ {int feature_flags_; int canvas_width_; int canvas_height_; int quiet_; scalar_t__* chunk_counts_; } ;
typedef TYPE_1__ WebPInfo ;
struct TYPE_6__ {int* payload_; scalar_t__ size_; } ;
typedef TYPE_2__ ChunkData ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_2 (int const**) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (char*,int,int,...) ;

__attribute__((used)) static WebPInfoStatus FUNC_4(const ChunkData* const VAR_14,
                                       WebPInfo* const VAR_15) {
  const uint8_t* VAR_16 = VAR_14->payload_;
  if (VAR_15->chunk_counts_[VAR_3] ||
      VAR_15->chunk_counts_[VAR_4] ||
      VAR_15->chunk_counts_[VAR_5]) {
    FUNC_0("Already seen a VP8/VP8L/VP8X chunk when parsing VP8X chunk.");
    return VAR_12;
  }
  if (VAR_14->size_ != VAR_10 + VAR_2) {
    FUNC_0("Corrupted VP8X chunk.");
    return VAR_12;
  }
  ++VAR_15->chunk_counts_[VAR_5];
  VAR_15->feature_flags_ = *VAR_16;
  VAR_16 += 4;
  VAR_15->canvas_width_ = 1 + FUNC_2(&VAR_16);
  VAR_15->canvas_height_ = 1 + FUNC_2(&VAR_16);
  if (!VAR_15->quiet_) {
    FUNC_3("  ICCP: %d\n  Alpha: %d\n  EXIF: %d\n  XMP: %d\n  Animation: %d\n",
           (VAR_15->feature_flags_ & VAR_7) != 0,
           (VAR_15->feature_flags_ & VAR_0) != 0,
           (VAR_15->feature_flags_ & VAR_6) != 0,
           (VAR_15->feature_flags_ & VAR_13) != 0,
           (VAR_15->feature_flags_ & VAR_1) != 0);
    FUNC_3("  Canvas size %d x %d\n",
           VAR_15->canvas_width_, VAR_15->canvas_height_);
  }
  if (VAR_15->canvas_width_ > VAR_8) {
    FUNC_1("Canvas width is out of range in VP8X chunk.");
  }
  if (VAR_15->canvas_height_ > VAR_8) {
    FUNC_1("Canvas height is out of range in VP8X chunk.");
  }
  if ((uint64_t)VAR_15->canvas_width_ * VAR_15->canvas_height_ >
      VAR_9) {
    FUNC_1("Canvas area is out of range in VP8X chunk.");
  }
  return VAR_11;
}
