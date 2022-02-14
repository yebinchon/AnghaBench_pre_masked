
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tiff {int samplesperpixel; unsigned int imagelength; unsigned char* samples; unsigned int stride; unsigned int imagewidth; } ;
typedef int fz_context ;


 unsigned char FUNC_0 (int,int ,int) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, struct tiff *VAR_1)
{
 unsigned VAR_2, VAR_3;
 int VAR_4 = VAR_1->samplesperpixel;

 for (VAR_3 = 0; VAR_3 < VAR_1->imagelength; VAR_3++)
 {
  unsigned char * VAR_5 = &VAR_1->samples[VAR_1->stride * VAR_3];
  for (VAR_2 = 0; VAR_2 < VAR_1->imagewidth; VAR_2++)
  {
   int VAR_6[3];
   VAR_6[0] = VAR_5[VAR_2 * VAR_4 + 0];
   VAR_6[1] = VAR_5[VAR_2 * VAR_4 + 1] - 128;
   VAR_6[2] = VAR_5[VAR_2 * VAR_4 + 2] - 128;

   VAR_5[VAR_2 * VAR_4 + 0] = FUNC_0(VAR_6[0] + 1.402f * VAR_6[2], 0, 255);
   VAR_5[VAR_2 * VAR_4 + 1] = FUNC_0(VAR_6[0] - 0.34413f * VAR_6[1] - 0.71414f * VAR_6[2], 0, 255);
   VAR_5[VAR_2 * VAR_4 + 2] = FUNC_0(VAR_6[0] + 1.772f * VAR_6[1], 0, 255);
  }
 }
}
