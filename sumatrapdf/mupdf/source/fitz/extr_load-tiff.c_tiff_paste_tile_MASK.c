
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {unsigned int tilelength; unsigned int imagelength; unsigned int tilewidth; unsigned int imagewidth; unsigned int samplesperpixel; unsigned char* samples; unsigned int stride; unsigned int bitspersample; unsigned int tilestride; } ;
typedef int fz_context ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, struct tiff *VAR_1, unsigned char *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1->tilelength && VAR_3 + VAR_6 < VAR_1->imagelength; VAR_6++)
 {
  for (VAR_5 = 0; VAR_5 < VAR_1->tilewidth && VAR_4 + VAR_5 < VAR_1->imagewidth; VAR_5++)
  {
   for (VAR_7 = 0; VAR_7 < VAR_1->samplesperpixel; VAR_7++)
   {
    unsigned char *VAR_8, *VAR_9;

    VAR_8 = VAR_1->samples;
    VAR_8 += (VAR_3 + VAR_6) * VAR_1->stride;
    VAR_8 += (((VAR_4 + VAR_5) * VAR_1->samplesperpixel + VAR_7) * VAR_1->bitspersample + 7) / 8;

    VAR_9 = VAR_2;
    VAR_9 += VAR_6 * VAR_1->tilestride;
    VAR_9 += ((VAR_5 * VAR_1->samplesperpixel + VAR_7) * VAR_1->bitspersample + 7) / 8;

    switch (VAR_1->bitspersample)
    {
    case 1: *VAR_8 |= (*VAR_9 >> (7 - 1 * ((VAR_4 + VAR_5) % 8))) & 0x1; break;
    case 2: *VAR_8 |= (*VAR_9 >> (6 - 2 * ((VAR_4 + VAR_5) % 4))) & 0x3; break;
    case 4: *VAR_8 |= (*VAR_9 >> (4 - 4 * ((VAR_4 + VAR_5) % 2))) & 0xf; break;
    case 8: *VAR_8 = *VAR_9; break;
    case 16: VAR_8[0] = VAR_9[0]; VAR_8[1] = VAR_9[1]; break;
    case 24: VAR_8[0] = VAR_9[0]; VAR_8[1] = VAR_9[1]; VAR_8[2] = VAR_9[2]; break;
    case 32: VAR_8[0] = VAR_9[0]; VAR_8[1] = VAR_9[1]; VAR_8[2] = VAR_9[2]; VAR_8[3] = VAR_9[3]; break;
    }
   }
  }
 }
}
