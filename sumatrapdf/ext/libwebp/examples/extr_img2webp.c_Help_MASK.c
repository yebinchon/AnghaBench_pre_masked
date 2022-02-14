
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void) {
  FUNC_0("Usage:\n\n");
  FUNC_0("  img2webp [file-level options] [image files...] "
         "[per-frame options...]\n");
  FUNC_0("\n");

  FUNC_0("File-level options (only used at the start of compression):\n");
  FUNC_0(" -min_size ............ minimize size\n");
  FUNC_0(" -loop <int> .......... loop count (default: 0, = infinite loop)\n");
  FUNC_0(" -kmax <int> .......... maximum number of frame between key-frames\n"
         "                        (0=only keyframes)\n");
  FUNC_0(" -kmin <int> .......... minimum number of frame between key-frames\n"
         "                        (0=disable key-frames altogether)\n");
  FUNC_0(" -mixed ............... use mixed lossy/lossless automatic mode\n");
  FUNC_0(" -v ................... verbose mode\n");
  FUNC_0(" -h ................... this help\n");
  FUNC_0(" -version ............. print version number and exit\n");
  FUNC_0("\n");

  FUNC_0("Per-frame options (only used for subsequent images input):\n");
  FUNC_0(" -d <int> ............. frame duration in ms (default: 100)\n");
  FUNC_0(" -lossless  ........... use lossless mode (default)\n");
  FUNC_0(" -lossy ... ........... use lossy mode\n");
  FUNC_0(" -q <float> ........... quality\n");
  FUNC_0(" -m <int> ............. method to use\n");

  FUNC_0("\n");
  FUNC_0("example: img2webp -loop 2 in0.png -lossy in1.jpg\n"
         "                  -d 80 in2.tiff -o out.webp\n");
  FUNC_0("\nNote: if a single file name is passed as the argument, the "
         "arguments will be\n");
  FUNC_0("tokenized from this file. The file name must not start with "
         "the character '-'.\n");
}
