
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WebPInfoStatus ;
struct TYPE_4__ {int seen_alpha_subchunk_; int has_alpha_; scalar_t__ parse_bitstream_; scalar_t__* chunk_counts_; scalar_t__ seen_image_subchunk_; int * anmf_subchunk_counts_; scalar_t__ is_processing_anim_frame_; } ;
typedef TYPE_1__ WebPInfo ;
typedef int ChunkData ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int const* const,TYPE_1__* const) ;
 scalar_t__ const VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static WebPInfoStatus FUNC_2(const ChunkData* const VAR_7,
                                       WebPInfo* const VAR_8) {
  if (VAR_8->is_processing_anim_frame_) {
    ++VAR_8->anmf_subchunk_counts_[2];
    if (VAR_8->seen_alpha_subchunk_) {
      FUNC_0("Consecutive ALPH sub-chunks in an ANMF chunk.");
      return VAR_6;
    }
    VAR_8->seen_alpha_subchunk_ = 1;

    if (VAR_8->seen_image_subchunk_) {
      FUNC_0("ALPHA sub-chunk detected after VP8 sub-chunk "
                "in an ANMF chunk.");
      return VAR_6;
    }
  } else {
    if (VAR_8->chunk_counts_[VAR_1] ||
        VAR_8->chunk_counts_[VAR_2]) {
      FUNC_0("ALPHA chunk and ANIM/ANMF chunk are both detected.");
      return VAR_6;
    }
    if (!VAR_8->chunk_counts_[VAR_4]) {
      FUNC_0("ALPHA chunk detected before VP8X chunk.");
      return VAR_6;
    }
    if (VAR_8->chunk_counts_[VAR_3]) {
      FUNC_0("ALPHA chunk detected after VP8 chunk.");
      return VAR_6;
    }
    if (VAR_8->chunk_counts_[VAR_0]) {
      FUNC_0("Multiple ALPHA chunks detected.");
      return VAR_6;
    }
    ++VAR_8->chunk_counts_[VAR_0];
  }
  VAR_8->has_alpha_ = 1;
  if (VAR_8->parse_bitstream_) {
    const WebPInfoStatus VAR_9 = FUNC_1(VAR_7, VAR_8);
    if (VAR_9 != VAR_5) return VAR_9;
  }
  return VAR_5;
}
