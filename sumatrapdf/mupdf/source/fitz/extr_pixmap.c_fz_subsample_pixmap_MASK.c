
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stride; int w; int n; unsigned char* samples; int h; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 unsigned char* FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int) ;
 int FUNC_3 (int *,int ,char*) ;

void
FUNC_4(fz_context *VAR_2, fz_pixmap *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned char *VAR_16, *VAR_17;

 int VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;


 if (!VAR_3)
  return;

 FUNC_0(VAR_3->stride >= VAR_3->w * VAR_3->n);

 VAR_16 = VAR_17 = VAR_3->samples;
 VAR_15 = 1<<VAR_4;
 VAR_7 = VAR_3->w;
 VAR_8 = VAR_3->h;
 VAR_14 = VAR_3->n;
 VAR_5 = (VAR_7 + VAR_15-1)>>VAR_4;
 VAR_6 = (VAR_8 + VAR_15-1)>>VAR_4;
 VAR_9 = VAR_3->stride;
 VAR_12 = VAR_15*VAR_9-VAR_14;
 VAR_13 = VAR_15*VAR_14-1;
 VAR_10 = (VAR_15-1)*VAR_14;
 VAR_11 = (VAR_15-1)*VAR_9 + VAR_3->stride - VAR_7 * VAR_14;
 VAR_4 *= 2;
 for (VAR_19 = VAR_8 - VAR_15; VAR_19 >= 0; VAR_19 -= VAR_15)
 {
  for (VAR_18 = VAR_7 - VAR_15; VAR_18 >= 0; VAR_18 -= VAR_15)
  {
   for (VAR_22 = VAR_14; VAR_22 > 0; VAR_22--)
   {
    int VAR_23 = 0;
    for (VAR_20 = VAR_15; VAR_20 > 0; VAR_20--)
    {
     for (VAR_21 = VAR_15; VAR_21 > 0; VAR_21--)
     {
      VAR_23 += *VAR_16;
      VAR_16 += VAR_9;
     }
     VAR_16 -= VAR_12;
    }
    *VAR_17++ = VAR_23 >> VAR_4;
    VAR_16 -= VAR_13;
   }
   VAR_16 += VAR_10;
  }

  VAR_18 += VAR_15;
  if (VAR_18 > 0)
  {
   int VAR_24 = VAR_18 * VAR_15;
   int VAR_25 = (VAR_18-1) * VAR_14;
   int VAR_26 = VAR_18*VAR_14-1;
   for (VAR_22 = VAR_14; VAR_22 > 0; VAR_22--)
   {
    int VAR_27 = 0;
    for (VAR_20 = VAR_18; VAR_20 > 0; VAR_20--)
    {
     for (VAR_21 = VAR_15; VAR_21 > 0; VAR_21--)
     {
      VAR_27 += *VAR_16;
      VAR_16 += VAR_9;
     }
     VAR_16 -= VAR_12;
    }
    *VAR_17++ = VAR_27 / VAR_24;
    VAR_16 -= VAR_26;
   }
   VAR_16 += VAR_25;
  }
  VAR_16 += VAR_11;
 }

 VAR_19 += VAR_15;
 if (VAR_19 > 0)
 {
  int VAR_28 = VAR_19 * VAR_15;
  int VAR_29 = VAR_9 * VAR_19 - VAR_14;
  for (VAR_18 = VAR_7 - VAR_15; VAR_18 >= 0; VAR_18 -= VAR_15)
  {
   for (VAR_22 = VAR_14; VAR_22 > 0; VAR_22--)
   {
    int VAR_30 = 0;
    for (VAR_20 = VAR_15; VAR_20 > 0; VAR_20--)
    {
     for (VAR_21 = VAR_19; VAR_21 > 0; VAR_21--)
     {
      VAR_30 += *VAR_16;
      VAR_16 += VAR_9;
     }
     VAR_16 -= VAR_29;
    }
    *VAR_17++ = VAR_30 / VAR_28;
    VAR_16 -= VAR_13;
   }
   VAR_16 += VAR_10;
  }

  VAR_18 += VAR_15;
  if (VAR_18 > 0)
  {
   int VAR_31 = VAR_18 * VAR_14 - 1;
   VAR_28 = VAR_18 * VAR_19;
   for (VAR_22 = VAR_14; VAR_22 > 0; VAR_22--)
   {
    int VAR_32 = 0;
    for (VAR_20 = VAR_18; VAR_20 > 0; VAR_20--)
    {
     for (VAR_21 = VAR_19; VAR_21 > 0; VAR_21--)
     {
      VAR_32 += *VAR_16;
      VAR_16 += VAR_9;
     }
     VAR_16 -= VAR_29;
    }
    *VAR_17++ = VAR_32 / VAR_28;
    VAR_16 -= VAR_31;
   }
  }
 }

 VAR_3->w = VAR_5;
 VAR_3->h = VAR_6;
 VAR_3->stride = VAR_5 * VAR_14;
 if (VAR_6 > VAR_1 / (VAR_5 * VAR_14))
  FUNC_3(VAR_2, VAR_0, "pixmap too large");
 VAR_3->samples = FUNC_1(VAR_2, VAR_3->samples, VAR_6 * VAR_5 * VAR_14);
}
