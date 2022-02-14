
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int WebPInfoStatus ;
struct TYPE_17__ {scalar_t__ anim_frame_data_size_; scalar_t__ is_processing_anim_frame_; int seen_image_subchunk_; int * chunk_counts_; int quiet_; } ;
typedef TYPE_1__ WebPInfo ;
struct TYPE_18__ {int id_; scalar_t__ size_; scalar_t__ offset_; } ;
typedef int ChunkID ;
typedef TYPE_2__ ChunkData ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__ const* const,TYPE_1__* const) ;
 int FUNC_3 (TYPE_2__ const* const,TYPE_1__* const) ;
 int FUNC_4 (TYPE_2__ const* const,TYPE_1__* const) ;
 int FUNC_5 (TYPE_2__ const* const,TYPE_1__* const) ;
 int FUNC_6 (TYPE_2__ const* const,TYPE_1__* const) ;
 int FUNC_7 (TYPE_2__ const* const,TYPE_1__* const) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_8 (char*,char const,char const,char const,char const,int,int) ;
 int FUNC_9 (char*,int,char*,int,int) ;

__attribute__((used)) static WebPInfoStatus FUNC_10(const ChunkData* const VAR_4,
                                   WebPInfo* const VAR_5) {
  WebPInfoStatus VAR_6 = VAR_0;
  ChunkID VAR_7 = VAR_4->id_;
  if (VAR_4->id_ == 132) {
    char VAR_8[50];
    FUNC_9(VAR_8, 50, "Unknown chunk at offset %6d, length %6d",
            (int)VAR_4->offset_, (int)VAR_4->size_);
    FUNC_1(VAR_8);
  } else {
    if (!VAR_5->quiet_) {
      const char* VAR_9 = VAR_3[VAR_4->id_];
      FUNC_8("Chunk %c%c%c%c at offset %6d, length %6d\n",
             VAR_9[0], VAR_9[1], VAR_9[2], VAR_9[3], (int)VAR_4->offset_,
             (int)VAR_4->size_);
    }
  }
  switch (VAR_7) {
    case 131:
    case 130:
      VAR_6 = FUNC_6(VAR_4, VAR_5);
      break;
    case 129:
      VAR_6 = FUNC_7(VAR_4, VAR_5);
      break;
    case 137:
      VAR_6 = FUNC_2(VAR_4, VAR_5);
      break;
    case 136:
      VAR_6 = FUNC_3(VAR_4, VAR_5);
      break;
    case 135:
      VAR_6 = FUNC_4(VAR_4, VAR_5);
      break;
    case 133:
      VAR_6 = FUNC_5(VAR_4, VAR_5);
      break;
    case 134:
    case 128:
      ++VAR_5->chunk_counts_[VAR_7];
      break;
    case 132:
    default:
      break;
  }
  if (VAR_5->is_processing_anim_frame_ && VAR_7 != 135) {
    if (VAR_5->anim_frame_data_size_ == VAR_4->size_) {
      if (!VAR_5->seen_image_subchunk_) {
        FUNC_0("No VP8/VP8L chunk detected in an ANMF chunk.");
        return VAR_1;
      }
      VAR_5->is_processing_anim_frame_ = 0;
    } else if (VAR_5->anim_frame_data_size_ > VAR_4->size_) {
      VAR_5->anim_frame_data_size_ -= VAR_4->size_;
    } else {
      FUNC_0("Truncated data detected when parsing ANMF chunk.");
      return VAR_2;
    }
  }
  return VAR_6;
}
