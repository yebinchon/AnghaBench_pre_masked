
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void) {
  FUNC_0("Usage:\n");
  FUNC_0(" cwebp [-preset <...>] [options] in_file [-o out_file]\n\n");
  FUNC_0("If input size (-s) for an image is not specified, it is\n"
         "assumed to be a PNG, JPEG, TIFF or WebP file.\n");



  FUNC_0("\nOptions:\n");
  FUNC_0("  -h / -help ............. short help\n");
  FUNC_0("  -H / -longhelp ......... long help\n");
  FUNC_0("  -q <float> ............. quality factor (0:small..100:big), "
         "default=75\n");
  FUNC_0("  -alpha_q <int> ......... transparency-compression quality (0..100),"
         "\n                           default=100\n");
  FUNC_0("  -preset <string> ....... preset setting, one of:\n");
  FUNC_0("                            default, photo, picture,\n");
  FUNC_0("                            drawing, icon, text\n");
  FUNC_0("     -preset must come first, as it overwrites other parameters\n");
  FUNC_0("  -z <int> ............... activates lossless preset with given\n"
         "                           level in [0:fast, ..., 9:slowest]\n");
  FUNC_0("\n");
  FUNC_0("  -m <int> ............... compression method (0=fast, 6=slowest), "
         "default=4\n");
  FUNC_0("  -segments <int> ........ number of segments to use (1..4), "
         "default=4\n");
  FUNC_0("  -size <int> ............ target size (in bytes)\n");
  FUNC_0("  -psnr <float> .......... target PSNR (in dB. typically: 42)\n");
  FUNC_0("\n");
  FUNC_0("  -s <int> <int> ......... input size (width x height) for YUV\n");
  FUNC_0("  -sns <int> ............. spatial noise shaping (0:off, 100:max), "
         "default=50\n");
  FUNC_0("  -f <int> ............... filter strength (0=off..100), "
         "default=60\n");
  FUNC_0("  -sharpness <int> ....... "
         "filter sharpness (0:most .. 7:least sharp), default=0\n");
  FUNC_0("  -strong ................ use strong filter instead "
                                     "of simple (default)\n");
  FUNC_0("  -nostrong .............. use simple filter instead of strong\n");
  FUNC_0("  -sharp_yuv ............. use sharper (and slower) RGB->YUV "
                                     "conversion\n");
  FUNC_0("  -partition_limit <int> . limit quality to fit the 512k limit on\n");
  FUNC_0("                           "
         "the first partition (0=no degradation ... 100=full)\n");
  FUNC_0("  -pass <int> ............ analysis pass number (1..10)\n");
  FUNC_0("  -crop <x> <y> <w> <h> .. crop picture with the given rectangle\n");
  FUNC_0("  -resize <w> <h> ........ resize picture (after any cropping)\n");
  FUNC_0("  -mt .................... use multi-threading if available\n");
  FUNC_0("  -low_memory ............ reduce memory usage (slower encoding)\n");
  FUNC_0("  -map <int> ............. print map of extra info\n");
  FUNC_0("  -print_psnr ............ prints averaged PSNR distortion\n");
  FUNC_0("  -print_ssim ............ prints averaged SSIM distortion\n");
  FUNC_0("  -print_lsim ............ prints local-similarity distortion\n");
  FUNC_0("  -d <file.pgm> .......... dump the compressed output (PGM file)\n");
  FUNC_0("  -alpha_method <int> .... transparency-compression method (0..1), "
         "default=1\n");
  FUNC_0("  -alpha_filter <string> . predictive filtering for alpha plane,\n");
  FUNC_0("                           one of: none, fast (default) or best\n");
  FUNC_0("  -exact ................. preserve RGB values in transparent area, "
         "default=off\n");
  FUNC_0("  -blend_alpha <hex> ..... blend colors against background color\n"
         "                           expressed as RGB values written in\n"
         "                           hexadecimal, e.g. 0xc0e0d0 for red=0xc0\n"
         "                           green=0xe0 and blue=0xd0\n");
  FUNC_0("  -noalpha ............... discard any transparency information\n");
  FUNC_0("  -lossless .............. encode image losslessly, default=off\n");
  FUNC_0("  -near_lossless <int> ... use near-lossless image\n"
         "                           preprocessing (0..100=off), "
         "default=100\n");
  FUNC_0("  -hint <string> ......... specify image characteristics hint,\n");
  FUNC_0("                           one of: photo, picture or graph\n");

  FUNC_0("\n");
  FUNC_0("  -metadata <string> ..... comma separated list of metadata to\n");
  FUNC_0("                           ");
  FUNC_0("copy from the input to the output if present.\n");
  FUNC_0("                           "
         "Valid values: all, none (default), exif, icc, xmp\n");

  FUNC_0("\n");
  FUNC_0("  -short ................. condense printed message\n");
  FUNC_0("  -quiet ................. don't print anything\n");
  FUNC_0("  -version ............... print version number and exit\n");

  FUNC_0("  -noasm ................. disable all assembly optimizations\n");

  FUNC_0("  -v ..................... verbose, e.g. print encoding/decoding "
         "times\n");
  FUNC_0("  -progress .............. report encoding progress\n");
  FUNC_0("\n");
  FUNC_0("Experimental Options:\n");
  FUNC_0("  -jpeg_like ............. roughly match expected JPEG size\n");
  FUNC_0("  -af .................... auto-adjust filter strength\n");
  FUNC_0("  -pre <int> ............. pre-processing filter\n");
  FUNC_0("\n");
}
