
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {int imagelength; int stride; unsigned char* samples; int compression; int predictor; int imagewidth; int samplesperpixel; int bitspersample; int photometric; int extrasamples; scalar_t__ order; scalar_t__ colormap; scalar_t__ stripbytecounts; scalar_t__ stripoffsets; scalar_t__ rowsperstrip; scalar_t__ tilebytecounts; scalar_t__ tileoffsets; scalar_t__ tilewidth; scalar_t__ tilelength; } ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 unsigned char* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (unsigned char*,int,int) ;
 int FUNC_3 (int *,struct tiff*) ;
 int FUNC_4 (int *,struct tiff*) ;
 int FUNC_5 (int *,struct tiff*) ;
 int FUNC_6 (unsigned char*,int,int,int,int) ;
 int FUNC_7 (int *,unsigned char*,int,int) ;
 int FUNC_8 (unsigned char*,int) ;
 int FUNC_9 (unsigned char*,int,int,int) ;
 int FUNC_10 (int *,struct tiff*) ;

__attribute__((used)) static void
FUNC_11(fz_context *VAR_4, struct tiff *VAR_5)
{
 unsigned VAR_6;

 if (VAR_5->imagelength > VAR_3 / VAR_5->stride)
  FUNC_1(VAR_4, VAR_1, "image too large");
 VAR_5->samples = FUNC_0(VAR_4, VAR_5->imagelength * VAR_5->stride);
 FUNC_2(VAR_5->samples, 0x55, VAR_5->imagelength * VAR_5->stride);

 if (VAR_5->tilelength && VAR_5->tilewidth && VAR_5->tileoffsets && VAR_5->tilebytecounts)
  FUNC_4(VAR_4, VAR_5);
 else if (VAR_5->rowsperstrip && VAR_5->stripoffsets && VAR_5->stripbytecounts)
  FUNC_3(VAR_4, VAR_5);
 else
  FUNC_1(VAR_4, VAR_0, "image is missing both strip and tile data");


 if ((VAR_5->compression == 5 || VAR_5->compression == 8 || VAR_5->compression == 32946) && VAR_5->predictor == 2)
 {
  unsigned char *VAR_7 = VAR_5->samples;
  for (VAR_6 = 0; VAR_6 < VAR_5->imagelength; VAR_6++)
  {
   FUNC_9(VAR_7, VAR_5->imagewidth, VAR_5->samplesperpixel, VAR_5->bitspersample);
   VAR_7 += VAR_5->stride;
  }
 }


 if (VAR_5->photometric == 6 && VAR_5->compression != 6 && VAR_5->compression != 7)
  FUNC_10(VAR_4, VAR_5);


 if (VAR_5->photometric == 3 && VAR_5->colormap)
  FUNC_5(VAR_4, VAR_5);


 if (VAR_5->photometric == 0)
 {
  unsigned char *VAR_8 = VAR_5->samples;
  for (VAR_6 = 0; VAR_6 < VAR_5->imagelength; VAR_6++)
  {
   FUNC_6(VAR_8, VAR_5->imagewidth, VAR_5->samplesperpixel, VAR_5->bitspersample, VAR_5->extrasamples);
   VAR_8 += VAR_5->stride;
  }
 }


 if (VAR_5->extrasamples == 1)
 {



 }


 if (VAR_5->extrasamples == 2)
 {

 }


 if (VAR_5->bitspersample == 16 && VAR_5->order == VAR_2)
  FUNC_8(VAR_5->samples, VAR_5->imagewidth * VAR_5->imagelength * VAR_5->samplesperpixel);





 if (VAR_5->photometric == 8 && VAR_5->samplesperpixel == 3)
  FUNC_7(VAR_4, VAR_5->samples, VAR_5->bitspersample, VAR_5->imagewidth * VAR_5->imagelength);
}
