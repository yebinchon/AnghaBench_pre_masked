
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int WebPInfoStatus ;
struct TYPE_5__ {int bgcolor_; int loop_count_; int quiet_; int * chunk_counts_; } ;
typedef TYPE_1__ WebPInfo ;
struct TYPE_6__ {scalar_t__ size_; int * payload_; } ;
typedef TYPE_2__ ChunkData ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int const**) ;
 int FUNC_3 (int const**) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (char*,int,...) ;

__attribute__((used)) static WebPInfoStatus FUNC_5(const ChunkData* const VAR_7,
                                       WebPInfo* const VAR_8) {
  const uint8_t* VAR_9 = VAR_7->payload_;
  if (!VAR_8->chunk_counts_[VAR_3]) {
    FUNC_0("ANIM chunk detected before VP8X chunk.");
    return VAR_6;
  }
  if (VAR_7->size_ != VAR_0 + VAR_2) {
    FUNC_0("Corrupted ANIM chunk.");
    return VAR_6;
  }
  VAR_8->bgcolor_ = FUNC_3(&VAR_9);
  VAR_8->loop_count_ = FUNC_2(&VAR_9);
  ++VAR_8->chunk_counts_[VAR_1];
  if (!VAR_8->quiet_) {
    FUNC_4("  Background color:(ARGB) %02x %02x %02x %02x\n",
           (VAR_8->bgcolor_ >> 24) & 0xff,
           (VAR_8->bgcolor_ >> 16) & 0xff,
           (VAR_8->bgcolor_ >> 8) & 0xff,
           VAR_8->bgcolor_ & 0xff);
    FUNC_4("  Loop count      : %d\n", VAR_8->loop_count_);
  }
  if (VAR_8->loop_count_ > VAR_4) {
    FUNC_1("Loop count is out of range in ANIM chunk.");
  }
  return VAR_5;
}
