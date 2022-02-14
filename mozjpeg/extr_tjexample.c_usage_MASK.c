
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; int denom; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_3 ;
 char** VAR_4 ;

void FUNC_2(char *VAR_5)
{
  int VAR_6;

  FUNC_1("\nUSAGE: %s <Input image> <Output image> [options]\n\n",
         VAR_5);

  FUNC_1("Input and output images can be in Windows BMP or PBMPLUS (PPM/PGM) format.  If\n");
  FUNC_1("either filename ends in a .jpg extension, then the TurboJPEG API will be used\n");
  FUNC_1("to compress or decompress the image.\n\n");

  FUNC_1("Compression Options (used if the output image is a JPEG image)\n");
  FUNC_1("--------------------------------------------------------------\n\n");

  FUNC_1("-subsamp <444|422|420|gray> = Apply this level of chrominance subsampling when\n");
  FUNC_1("     compressing the output image.  The default is to use the same level of\n");
  FUNC_1("     subsampling as in the input image, if the input image is also a JPEG\n");
  FUNC_1("     image, or to use grayscale if the input image is a grayscale non-JPEG\n");
  FUNC_1("     image, or to use %s subsampling otherwise.\n\n",
         VAR_4[VAR_1]);

  FUNC_1("-q <1-100> = Compress the output image with this JPEG quality level\n");
  FUNC_1("     (default = %d).\n\n", VAR_0);

  FUNC_1("Decompression Options (used if the input image is a JPEG image)\n");
  FUNC_1("---------------------------------------------------------------\n\n");

  FUNC_1("-scale M/N = Scale the input image by a factor of M/N when decompressing it.\n");
  FUNC_1("(M/N = ");
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    FUNC_1("%d/%d", VAR_3[VAR_6].num, VAR_3[VAR_6].denom);
    if (VAR_2 == 2 && VAR_6 != VAR_2 - 1)
      FUNC_1(" or ");
    else if (VAR_2 > 2) {
      if (VAR_6 != VAR_2 - 1)
        FUNC_1(", ");
      if (VAR_6 == VAR_2 - 2)
        FUNC_1("or ");
    }
  }
  FUNC_1(")\n\n");

  FUNC_1("-hflip, -vflip, -transpose, -transverse, -rot90, -rot180, -rot270 =\n");
  FUNC_1("     Perform one of these lossless transform operations on the input image\n");
  FUNC_1("     prior to decompressing it (these options are mutually exclusive.)\n\n");

  FUNC_1("-grayscale = Perform lossless grayscale conversion on the input image prior\n");
  FUNC_1("     to decompressing it (can be combined with the other transform operations\n");
  FUNC_1("     above.)\n\n");

  FUNC_1("-crop WxH+X+Y = Perform lossless cropping on the input image prior to\n");
  FUNC_1("     decompressing it.  X and Y specify the upper left corner of the cropping\n");
  FUNC_1("     region, and W and H specify the width and height of the cropping region.\n");
  FUNC_1("     X and Y must be evenly divible by the MCU block size (8x8 if the input\n");
  FUNC_1("     image was compressed using no subsampling or grayscale, 16x8 if it was\n");
  FUNC_1("     compressed using 4:2:2 subsampling, or 16x16 if it was compressed using\n");
  FUNC_1("     4:2:0 subsampling.)\n\n");

  FUNC_1("General Options\n");
  FUNC_1("---------------\n\n");

  FUNC_1("-fastupsample = Use the fastest chrominance upsampling algorithm available in\n");
  FUNC_1("     the underlying codec.\n\n");

  FUNC_1("-fastdct = Use the fastest DCT/IDCT algorithms available in the underlying\n");
  FUNC_1("     codec.\n\n");

  FUNC_1("-accuratedct = Use the most accurate DCT/IDCT algorithms available in the\n");
  FUNC_1("     underlying codec.\n\n");

  FUNC_0(1);
}
