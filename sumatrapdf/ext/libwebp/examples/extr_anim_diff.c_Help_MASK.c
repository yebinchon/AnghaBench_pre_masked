
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void) {
  FUNC_0("Usage: anim_diff <image1> <image2> [options]\n");
  FUNC_0("\nOptions:\n");
  FUNC_0("  -dump_frames <folder> dump decoded frames in PAM format\n");
  FUNC_0("  -min_psnr <float> ... minimum per-frame PSNR\n");
  FUNC_0("  -raw_comparison ..... if this flag is not used, RGB is\n");
  FUNC_0("                        premultiplied before comparison\n");
  FUNC_0("  -max_diff <int> ..... maximum allowed difference per channel\n"
         "                        between corresponding pixels in subsequent\n"
         "                        frames\n");
  FUNC_0("  -h .................. this help\n");
  FUNC_0("  -version ............ print version number and exit\n");
}
