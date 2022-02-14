
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_frames_; int* chunk_counts_; int* anmf_subchunk_counts_; } ;
typedef TYPE_1__ WebPInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const WebPInfo* const VAR_2) {
  int VAR_3;
  FUNC_0("Summary:\n");
  FUNC_0("Number of frames: %d\n", VAR_2->num_frames_);
  FUNC_0("Chunk type  :  VP8 VP8L VP8X ALPH ANIM ANMF(VP8 /VP8L/ALPH) ICCP "
      "EXIF  XMP\n");
  FUNC_0("Chunk counts: ");
  for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
    FUNC_0("%4d ", VAR_2->chunk_counts_[VAR_3]);
    if (VAR_3 == VAR_0) {
      FUNC_0("%4d %4d %4d  ",
             VAR_2->anmf_subchunk_counts_[0],
             VAR_2->anmf_subchunk_counts_[1],
             VAR_2->anmf_subchunk_counts_[2]);
    }
  }
  FUNC_0("\n");
}
