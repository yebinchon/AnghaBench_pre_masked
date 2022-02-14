
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int width; int height; TYPE_2__* stats; } ;
typedef TYPE_1__ WebPPicture ;
struct TYPE_6__ {int coded_size; double* PSNR; int* block_count; int alpha_data_size; float* header_bytes; int** residual_bytes; scalar_t__ lossless_size; int segment_level; int segment_quant; int segment_size; } ;
typedef TYPE_2__ WebPAuxStats ;
typedef int W_CHAR ;


 int FUNC_0 (int*,float,int*) ;
 int FUNC_1 (TYPE_2__ const* const,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int const*) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(const WebPPicture* const VAR_1, int VAR_2,
                                int VAR_3,
                                const char* const VAR_4) {
  const WebPAuxStats* const VAR_5 = VAR_1->stats;
  if (VAR_2) {
    FUNC_5(VAR_0, "%7d %2.2f\n", VAR_5->coded_size, VAR_5->PSNR[3]);
  } else {
    const int VAR_6 = VAR_5->block_count[0];
    const int VAR_7 = VAR_5->block_count[1];
    const int VAR_8 = VAR_5->block_count[2];
    const int VAR_9 = VAR_6 + VAR_7;
    FUNC_4(VAR_0, "File:      %s\n", (const W_CHAR*)VAR_4);
    FUNC_5(VAR_0, "Dimension: %d x %d%s\n",
            VAR_1->width, VAR_1->height,
            VAR_5->alpha_data_size ? " (with alpha)" : "");
    FUNC_5(VAR_0, "Output:    "
            "%d bytes Y-U-V-All-PSNR %2.2f %2.2f %2.2f   %2.2f dB\n"
            "           (%.2f bpp)\n",
            VAR_5->coded_size,
            VAR_5->PSNR[0], VAR_5->PSNR[1], VAR_5->PSNR[2], VAR_5->PSNR[3],
            8.f * VAR_5->coded_size / VAR_1->width / VAR_1->height);
    if (VAR_9 > 0) {
      int VAR_10[4] = { 0, 0, 0, 0 };
      FUNC_5(VAR_0, "block count:  intra4:     %6d  (%.2f%%)\n"
                      "              intra16:    %6d  (%.2f%%)\n"
                      "              skipped:    %6d  (%.2f%%)\n",
              VAR_6, 100.f * VAR_6 / VAR_9,
              VAR_7, 100.f * VAR_7 / VAR_9,
              VAR_8, 100.f * VAR_8 / VAR_9);
      FUNC_5(VAR_0, "bytes used:  header:         %6f  (%.1f%%)\n"
                      "             mode-partition: %6f  (%.1f%%)\n",
              VAR_5->header_bytes[0],
              100.f * VAR_5->header_bytes[0] / VAR_5->coded_size,
              VAR_5->header_bytes[1],
              100.f * VAR_5->header_bytes[1] / VAR_5->coded_size);
      if (VAR_5->alpha_data_size > 0) {
        FUNC_5(VAR_0, "             transparency:   %6d (%.1f dB)\n",
                VAR_5->alpha_data_size, VAR_5->PSNR[4]);
      }
      FUNC_5(VAR_0, " Residuals bytes  "
                      "|segment 1|segment 2|segment 3"
                      "|segment 4|  total\n");
      if (VAR_3) {
        FUNC_5(VAR_0, "  intra4-coeffs:  ");
        FUNC_0(VAR_5->residual_bytes[0], VAR_5->coded_size, VAR_10);
        FUNC_5(VAR_0, " intra16-coeffs:  ");
        FUNC_0(VAR_5->residual_bytes[1], VAR_5->coded_size, VAR_10);
        FUNC_5(VAR_0, "  chroma coeffs:  ");
        FUNC_0(VAR_5->residual_bytes[2], VAR_5->coded_size, VAR_10);
      }
      FUNC_5(VAR_0, "    macroblocks:  ");
      FUNC_2(VAR_5->segment_size);
      FUNC_5(VAR_0, "      quantizer:  ");
      FUNC_3(VAR_5->segment_quant);
      FUNC_5(VAR_0, "   filter level:  ");
      FUNC_3(VAR_5->segment_level);
      if (VAR_3) {
        FUNC_5(VAR_0, "------------------+---------");
        FUNC_5(VAR_0, "+---------+---------+---------+-----------------\n");
        FUNC_5(VAR_0, " segments total:  ");
        FUNC_0(VAR_10, VAR_5->coded_size, ((void*)0));
      }
    }
    if (VAR_5->lossless_size > 0) {
      FUNC_1(VAR_5, "alpha");
    }
  }
}
