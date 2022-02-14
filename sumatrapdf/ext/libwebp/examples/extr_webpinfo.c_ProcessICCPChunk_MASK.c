
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WebPInfoStatus ;
struct TYPE_3__ {scalar_t__* chunk_counts_; } ;
typedef TYPE_1__ WebPInfo ;
typedef int ChunkData ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static WebPInfoStatus FUNC_1(const ChunkData* const VAR_7,
                                       WebPInfo* const VAR_8) {
  (void)VAR_7;
  if (!VAR_8->chunk_counts_[VAR_4]) {
    FUNC_0("ICCP chunk detected before VP8X chunk.");
    return VAR_6;
  }
  if (VAR_8->chunk_counts_[VAR_2] ||
      VAR_8->chunk_counts_[VAR_3] ||
      VAR_8->chunk_counts_[VAR_0]) {
    FUNC_0("ICCP chunk detected after image data.");
    return VAR_6;
  }
  ++VAR_8->chunk_counts_[VAR_1];
  return VAR_5;
}
