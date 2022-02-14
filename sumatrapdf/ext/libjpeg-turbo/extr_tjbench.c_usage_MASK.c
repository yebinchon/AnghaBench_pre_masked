
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; int denom; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* VAR_1 ;

void FUNC_2(char *VAR_2)
{
 int VAR_3;
 FUNC_1("USAGE: %s\n", VAR_2);
 FUNC_1("       <Inputfile (BMP|PPM)> <Quality> [options]\n\n");
 FUNC_1("       %s\n", VAR_2);
 FUNC_1("       <Inputfile (JPG)> [options]\n\n");
 FUNC_1("Options:\n\n");
 FUNC_1("-alloc = Dynamically allocate JPEG image buffers\n");
 FUNC_1("-bmp = Generate output images in Windows Bitmap format (default=PPM)\n");
 FUNC_1("-bottomup = Test bottom-up compression/decompression\n");
 FUNC_1("-tile = Test performance of the codec when the image is encoded as separate\n");
 FUNC_1("     tiles of varying sizes.\n");
 FUNC_1("-forcemmx, -forcesse, -forcesse2, -forcesse3 =\n");
 FUNC_1("     Force MMX, SSE, SSE2, or SSE3 code paths in the underlying codec\n");
 FUNC_1("-rgb, -bgr, -rgbx, -bgrx, -xbgr, -xrgb =\n");
 FUNC_1("     Test the specified color conversion path in the codec (default: BGR)\n");
 FUNC_1("-fastupsample = Use the fastest chrominance upsampling algorithm available in\n");
 FUNC_1("     the underlying codec\n");
 FUNC_1("-fastdct = Use the fastest DCT/IDCT algorithms available in the underlying\n");
 FUNC_1("     codec\n");
 FUNC_1("-accuratedct = Use the most accurate DCT/IDCT algorithms available in the\n");
 FUNC_1("     underlying codec\n");
 FUNC_1("-subsamp <s> = When testing JPEG compression, this option specifies the level\n");
 FUNC_1("     of chrominance subsampling to use (<s> = 444, 422, 440, 420, or GRAY).\n");
 FUNC_1("     The default is to test Grayscale, 4:2:0, 4:2:2, and 4:4:4 in sequence.\n");
 FUNC_1("-quiet = Output results in tabular rather than verbose format\n");
 FUNC_1("-yuvencode = Encode RGB input as planar YUV rather than compressing as JPEG\n");
 FUNC_1("-yuvdecode = Decode JPEG image to planar YUV rather than RGB\n");
 FUNC_1("-scale M/N = scale down the width/height of the decompressed JPEG image by a\n");
 FUNC_1("     factor of M/N (M/N = ");
 for(VAR_3=0; VAR_3<VAR_0; VAR_3++)
 {
  FUNC_1("%d/%d", VAR_1[VAR_3].num, VAR_1[VAR_3].denom);
  if(VAR_0==2 && VAR_3!=VAR_0-1) FUNC_1(" or ");
  else if(VAR_0>2)
  {
   if(VAR_3!=VAR_0-1) FUNC_1(", ");
   if(VAR_3==VAR_0-2) FUNC_1("or ");
  }
  if(VAR_3%8==0 && VAR_3!=0) FUNC_1("\n     ");
 }
 FUNC_1(")\n");
 FUNC_1("-hflip, -vflip, -transpose, -transverse, -rot90, -rot180, -rot270 =\n");
 FUNC_1("     Perform the corresponding lossless transform prior to\n");
 FUNC_1("     decompression (these options are mutually exclusive)\n");
 FUNC_1("-grayscale = Perform lossless grayscale conversion prior to decompression\n");
 FUNC_1("     test (can be combined with the other transforms above)\n");
 FUNC_1("-benchtime <t> = Run each benchmark for at least <t> seconds (default = 5.0)\n\n");
 FUNC_1("NOTE:  If the quality is specified as a range (e.g. 90-100), a separate\n");
 FUNC_1("test will be performed for all quality values in the range.\n\n");
 FUNC_0(1);
}
