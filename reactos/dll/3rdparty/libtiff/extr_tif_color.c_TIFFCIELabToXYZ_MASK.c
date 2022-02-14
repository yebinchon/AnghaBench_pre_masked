
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32 ;
typedef scalar_t__ int32 ;
struct TYPE_3__ {float Y0; float X0; float Z0; } ;
typedef TYPE_1__ TIFFCIELabToRGB ;



void
FUNC_0(TIFFCIELabToRGB *VAR_0, uint32 VAR_1, int32 VAR_2, int32 VAR_3,
  float *VAR_4, float *VAR_5, float *VAR_6)
{
 float VAR_7 = (float)VAR_1 * 100.0F / 255.0F;
 float VAR_8, VAR_9;

 if( VAR_7 < 8.856F ) {
  *VAR_5 = (VAR_7 * VAR_0->Y0) / 903.292F;
  VAR_8 = 7.787F * (*VAR_5 / VAR_0->Y0) + 16.0F / 116.0F;
 } else {
  VAR_8 = (VAR_7 + 16.0F) / 116.0F;
  *VAR_5 = VAR_0->Y0 * VAR_8 * VAR_8 * VAR_8;
 }

 VAR_9 = (float)VAR_2 / 500.0F + VAR_8;
 if( VAR_9 < 0.2069F )
  *VAR_4 = VAR_0->X0 * (VAR_9 - 0.13793F) / 7.787F;
 else
  *VAR_4 = VAR_0->X0 * VAR_9 * VAR_9 * VAR_9;

 VAR_9 = VAR_8 - (float)VAR_3 / 200.0F;
 if( VAR_9 < 0.2069F )
  *VAR_6 = VAR_0->Z0 * (VAR_9 - 0.13793F) / 7.787F;
 else
  *VAR_6 = VAR_0->Z0 * VAR_9 * VAR_9 * VAR_9;
}
