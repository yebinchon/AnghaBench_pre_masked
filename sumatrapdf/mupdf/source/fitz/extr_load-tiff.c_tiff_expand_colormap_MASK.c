
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {int bitspersample; int samplesperpixel; unsigned int colormaplen; int imagelength; int imagewidth; unsigned char* samples; unsigned int stride; int* colormap; scalar_t__ extrasamples; } ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*) ;
 unsigned char* FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (unsigned char*,unsigned int,int) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_2, struct tiff *VAR_3)
{
 int VAR_4 = 1 << VAR_3->bitspersample;
 unsigned char *VAR_5;
 unsigned char *VAR_6, *VAR_7;
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;





 if (VAR_3->samplesperpixel != 1 && VAR_3->samplesperpixel != 2)
  FUNC_2(VAR_2, VAR_0, "invalid number of samples for RGBPal");

 if (VAR_3->bitspersample != 1 && VAR_3->bitspersample != 2 && VAR_3->bitspersample != 4 && VAR_3->bitspersample != 8 && VAR_3->bitspersample != 16)
  FUNC_2(VAR_2, VAR_0, "invalid number of bits for RGBPal");

 if (VAR_3->colormaplen < (unsigned)VAR_4 * 3)
  FUNC_2(VAR_2, VAR_0, "insufficient colormap data");

 if (VAR_3->imagelength > VAR_1 / VAR_3->imagewidth / (VAR_3->samplesperpixel + 2))
  FUNC_2(VAR_2, VAR_0, "image too large");

 VAR_10 = VAR_3->imagewidth * (VAR_3->samplesperpixel + 2);

 VAR_5 = FUNC_1(VAR_2, VAR_10 * VAR_3->imagelength);

 for (VAR_9 = 0; VAR_9 < VAR_3->imagelength; VAR_9++)
 {
  VAR_6 = VAR_3->samples + (unsigned int)(VAR_3->stride * VAR_9);
  VAR_7 = VAR_5 + (unsigned int)(VAR_10 * VAR_9);

  for (VAR_8 = 0; VAR_8 < VAR_3->imagewidth; VAR_8++)
  {
   if (VAR_3->extrasamples)
   {
    int VAR_11 = FUNC_3(VAR_6, VAR_8 * 2, VAR_3->bitspersample);
    int VAR_12 = FUNC_3(VAR_6, VAR_8 * 2 + 1, VAR_3->bitspersample);
    *VAR_7++ = VAR_3->colormap[VAR_11 + 0] >> 8;
    *VAR_7++ = VAR_3->colormap[VAR_11 + VAR_4] >> 8;
    *VAR_7++ = VAR_3->colormap[VAR_11 + VAR_4 * 2] >> 8;
    if (VAR_3->bitspersample <= 8)
     *VAR_7++ = VAR_12 << (8 - VAR_3->bitspersample);
    else
     *VAR_7++ = VAR_12 >> (VAR_3->bitspersample - 8);
   }
   else
   {
    int VAR_13 = FUNC_3(VAR_6, VAR_8, VAR_3->bitspersample);
    *VAR_7++ = VAR_3->colormap[VAR_13 + 0] >> 8;
    *VAR_7++ = VAR_3->colormap[VAR_13 + VAR_4] >> 8;
    *VAR_7++ = VAR_3->colormap[VAR_13 + VAR_4 * 2] >> 8;
   }
  }
 }

 VAR_3->samplesperpixel += 2;
 VAR_3->bitspersample = 8;
 VAR_3->stride = VAR_10;
 FUNC_0(VAR_2, VAR_3->samples);
 VAR_3->samples = VAR_5;
}
