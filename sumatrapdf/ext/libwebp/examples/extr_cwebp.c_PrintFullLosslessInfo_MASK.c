
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lossless_size; int lossless_hdr_size; int lossless_data_size; int lossless_features; int histogram_bits; int transform_bits; int cache_bits; int palette_size; } ;
typedef TYPE_1__ WebPAuxStats ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(const WebPAuxStats* const VAR_1,
                                  const char* const VAR_2) {
  FUNC_0(VAR_0, "Lossless-%s compressed size: %d bytes\n",
          VAR_2, VAR_1->lossless_size);
  FUNC_0(VAR_0, "  * Header size: %d bytes, image data size: %d\n",
          VAR_1->lossless_hdr_size, VAR_1->lossless_data_size);
  if (VAR_1->lossless_features) {
    FUNC_0(VAR_0, "  * Lossless features used:");
    if (VAR_1->lossless_features & 1) FUNC_0(VAR_0, " PREDICTION");
    if (VAR_1->lossless_features & 2) FUNC_0(VAR_0, " CROSS-COLOR-TRANSFORM");
    if (VAR_1->lossless_features & 4) FUNC_0(VAR_0, " SUBTRACT-GREEN");
    if (VAR_1->lossless_features & 8) FUNC_0(VAR_0, " PALETTE");
    FUNC_0(VAR_0, "\n");
  }
  FUNC_0(VAR_0, "  * Precision Bits: histogram=%d transform=%d cache=%d\n",
          VAR_1->histogram_bits, VAR_1->transform_bits, VAR_1->cache_bits);
  if (VAR_1->palette_size > 0) {
    FUNC_0(VAR_0, "  * Palette size:   %d\n", VAR_1->palette_size);
  }
}
