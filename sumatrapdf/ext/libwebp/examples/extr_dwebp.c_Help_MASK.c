
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void) {
  FUNC_0("Usage: dwebp in_file [options] [-o out_file]\n\n"
         "Decodes the WebP image file to PNG format [Default]\n"
         "Use following options to convert into alternate image formats:\n"
         "  -pam ......... save the raw RGBA samples as a color PAM\n"
         "  -ppm ......... save the raw RGB samples as a color PPM\n"
         "  -bmp ......... save as uncompressed BMP format\n"
         "  -tiff ........ save as uncompressed TIFF format\n"
         "  -pgm ......... save the raw YUV samples as a grayscale PGM\n"
         "                 file with IMC4 layout\n"
         "  -yuv ......... save the raw YUV samples in flat layout\n"
         "\n"
         " Other options are:\n"
         "  -version ..... print version number and exit\n"
         "  -nofancy ..... don't use the fancy YUV420 upscaler\n"
         "  -nofilter .... disable in-loop filtering\n"
         "  -nodither .... disable dithering\n"
         "  -dither <d> .. dithering strength (in 0..100)\n"
         "  -alpha_dither  use alpha-plane dithering if needed\n"
         "  -mt .......... use multi-threading\n"
         "  -crop <x> <y> <w> <h> ... crop output with the given rectangle\n"
         "  -resize <w> <h> ......... scale the output (*after* any cropping)\n"
         "  -flip ........ flip the output vertically\n"
         "  -alpha ....... only save the alpha plane\n"
         "  -incremental . use incremental decoding (useful for tests)\n"
         "  -h ........... this help message\n"
         "  -v ........... verbose (e.g. print encoding/decoding times)\n"
         "  -quiet ....... quiet mode, don't print anything\n"

         "  -noasm ....... disable all assembly optimizations\n"

        );
}
