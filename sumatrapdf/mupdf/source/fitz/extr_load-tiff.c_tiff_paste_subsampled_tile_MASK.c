
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {int samplesperpixel; int bitspersample; unsigned int imagewidth; unsigned int imagelength; unsigned int* ycbcrsubsamp; unsigned int stride; unsigned char* samples; } ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_3(fz_context *VAR_1, struct tiff *VAR_2, unsigned char *VAR_3, unsigned VAR_4, unsigned VAR_5, unsigned VAR_6, unsigned VAR_7, unsigned VAR_8)
{
 unsigned char *VAR_9 = VAR_3;
 unsigned char *VAR_10;
 unsigned VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;
 int VAR_20[4 * 4 * 3];
 int *VAR_21 = VAR_20;

 FUNC_0(VAR_2->samplesperpixel == 3);
 FUNC_0(VAR_2->bitspersample == 8);

 VAR_13 = VAR_2->imagewidth;
 VAR_14 = VAR_2->imagelength;

 VAR_15 = 0;
 VAR_16 = 0;
 VAR_17 = VAR_2->ycbcrsubsamp[0];
 VAR_18 = VAR_2->ycbcrsubsamp[1];
 if (VAR_17 > 4 || VAR_18 > 4 || !FUNC_1(VAR_17) || !FUNC_1(VAR_18))
  FUNC_2(VAR_1, VAR_0, "Illegal TIFF Subsample values %d %d", VAR_17, VAR_18);

 for (VAR_19 = 0; VAR_19 < 3; VAR_19++)
  for (VAR_12 = 0; VAR_12 < VAR_18; VAR_12++)
   for (VAR_11 = 0; VAR_11 < VAR_17; VAR_11++)
    *VAR_21++ = VAR_19 + VAR_12 * VAR_2->stride + VAR_11 * 3;

 VAR_21 = VAR_20;
 VAR_11 = VAR_7;
 VAR_12 = VAR_8;
 VAR_19 = 0;

 VAR_10 = &VAR_2->samples[VAR_8 * VAR_2->stride + VAR_7 * 3];

 while (VAR_9 < VAR_3 + VAR_4)
 {
  if (VAR_19 == 0)
  {
   if (VAR_12 + VAR_16 < VAR_14 && VAR_12 + VAR_16 < VAR_8 + VAR_6 && VAR_11 + VAR_15 < VAR_13 && VAR_11 + VAR_15 < VAR_7 + VAR_5)
    VAR_10[*VAR_21] = *VAR_9;
   VAR_21++;

   if (++VAR_15 >= VAR_17)
   {
    VAR_15 = 0;
    if (++VAR_16 >= VAR_18)
    {
     VAR_16 = 0;
     VAR_19++;
    }
   }
  }
  else
  {
   for (VAR_16 = 0; VAR_16 < VAR_18; VAR_16++)
    for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++)
    {
     if (VAR_12 + VAR_16 < VAR_14 && VAR_12 + VAR_16 < VAR_8 + VAR_6 && VAR_11 + VAR_15 < VAR_13 && VAR_11 + VAR_15 < VAR_7 + VAR_5)
      VAR_10[*VAR_21] = *VAR_9;
     VAR_21++;
    }

   if (++VAR_19 >= 3)
   {
    VAR_19 = VAR_15 = VAR_16 = 0;
    VAR_21 = VAR_20;

    VAR_10 += VAR_17 * 3;

    VAR_11 += VAR_17;
    if (VAR_11 >= VAR_7 + VAR_5)
    {
     VAR_10 -= (VAR_11 - (VAR_7 + VAR_5)) * 3;
     VAR_10 += (VAR_18 - 1) * VAR_13 * 3;
     VAR_10 += VAR_7 * 3;
     VAR_11 = VAR_7;
     VAR_12 += VAR_18;
    }
   }
  }

  VAR_9++;
 }
}
