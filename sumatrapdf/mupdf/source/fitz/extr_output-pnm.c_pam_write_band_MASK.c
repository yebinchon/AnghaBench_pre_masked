
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_output ;
typedef int fz_context ;
struct TYPE_3__ {int w; int h; int n; int alpha; int * out; } ;
typedef TYPE_1__ fz_band_writer ;
typedef int buffer ;


 int FUNC_0 (int *,int *,...) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_band_writer *VAR_1, int VAR_2, int VAR_3, int VAR_4, const unsigned char *VAR_5)
{
 fz_output *VAR_6 = VAR_1->out;
 int VAR_7 = VAR_1->w;
 int VAR_8 = VAR_1->h;
 int VAR_9 = VAR_1->n;
 int VAR_10 = VAR_1->alpha;
 int VAR_11, VAR_12;
 int VAR_13 = VAR_3 + VAR_4;

 if (!VAR_6)
  return;

 if (VAR_13 > VAR_8)
  VAR_13 = VAR_8;
 VAR_13 -= VAR_3;

 if (VAR_10)
 {


  char VAR_14[2*3*4*5*6];
  char *VAR_15 = VAR_14;
  VAR_2 -= VAR_9 * VAR_7;
  switch (VAR_9)
  {
  case 2:
   for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   {
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
     int VAR_16 = VAR_5[1];
     *VAR_15++ = VAR_16 ? (VAR_5[0] * 255 + (VAR_16>>1))/VAR_16 : 0;
     *VAR_15++ = VAR_16;
     VAR_5 += 2;
     if (VAR_15 == &VAR_14[sizeof(VAR_14)])
     {
      FUNC_0(VAR_0, VAR_6, VAR_14, sizeof(VAR_14));
      VAR_15 = VAR_14;
     }
    }
    VAR_5 += VAR_2;
   }
   if (VAR_15 != VAR_14)
    FUNC_0(VAR_0, VAR_6, VAR_14, VAR_15 - VAR_14);
   break;
  case 4:
   for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   {
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
     int VAR_17 = VAR_5[3];
     int VAR_18 = VAR_17 ? 256 * 255 / VAR_17 : 0;
     *VAR_15++ = (VAR_5[0] * VAR_18 + 128)>>8;
     *VAR_15++ = (VAR_5[1] * VAR_18 + 128)>>8;
     *VAR_15++ = (VAR_5[2] * VAR_18 + 128)>>8;
     *VAR_15++ = VAR_17;
     VAR_5 += 4;
     if (VAR_15 == &VAR_14[sizeof(VAR_14)])
     {
      FUNC_0(VAR_0, VAR_6, VAR_14, sizeof(VAR_14));
      VAR_15 = VAR_14;
     }
    }
    VAR_5 += VAR_2;
   }
   if (VAR_15 != VAR_14)
    FUNC_0(VAR_0, VAR_6, VAR_14, VAR_15 - VAR_14);
   break;
  case 5:
   for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   {
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
     int VAR_19 = VAR_5[4];
     int VAR_20 = VAR_19 ? 256 * 255 / VAR_19 : 0;
     *VAR_15++ = (VAR_5[0] * VAR_20 + 128)>>8;
     *VAR_15++ = (VAR_5[1] * VAR_20 + 128)>>8;
     *VAR_15++ = (VAR_5[2] * VAR_20 + 128)>>8;
     *VAR_15++ = (VAR_5[3] * VAR_20 + 128)>>8;
     *VAR_15++ = VAR_19;
     VAR_5 += 5;
     if (VAR_15 == &VAR_14[sizeof(VAR_14)])
     {
      FUNC_0(VAR_0, VAR_6, VAR_14, sizeof(VAR_14));
      VAR_15 = VAR_14;
     }
    }
    VAR_5 += VAR_2;
   }
   if (VAR_15 != VAR_14)
    FUNC_0(VAR_0, VAR_6, VAR_14, VAR_15 - VAR_14);
   break;
  default:
   for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   {
    for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++)
    {
     int VAR_21 = VAR_5[VAR_9-1];
     int VAR_22 = VAR_21 ? 256 * 255 / VAR_21 : 0;
     int VAR_23;
     for (VAR_23 = 0; VAR_23 < VAR_9-1; VAR_23++)
      *VAR_15++ = (*VAR_5++ * VAR_22 + 128)>>8;
     *VAR_15++ = VAR_21;
     VAR_5++;
     if (VAR_15 >= &VAR_14[sizeof(VAR_14)] - VAR_9)
     {
      FUNC_0(VAR_0, VAR_6, VAR_14, VAR_15 - VAR_14);
      VAR_15 = VAR_14;
     }
    }
    VAR_5 += VAR_2;
   }
   if (VAR_15 != VAR_14)
    FUNC_0(VAR_0, VAR_6, VAR_14, VAR_15 - VAR_14);
   break;
  }
 }
 else
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
  {
   FUNC_0(VAR_0, VAR_6, VAR_5, VAR_7 * VAR_9);
   VAR_5 += VAR_2;
  }
}
