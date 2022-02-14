
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct info {int width; int height; int maxval; int bitdepth; int cs; } ;
struct TYPE_4__ {unsigned char* samples; int w; int h; int n; } ;
typedef TYPE_1__ fz_pixmap ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,int ) ;
 TYPE_1__* FUNC_3 (int *,int ,int,int,int *,int ) ;
 int FUNC_4 (int *,int ,char*,...) ;
 int FUNC_5 (int *,int,int,int) ;
 unsigned char* FUNC_6 (int *,unsigned char const*,unsigned char const*,int*) ;
 unsigned char* FUNC_7 (int *,unsigned char const*,unsigned char const*,int) ;

__attribute__((used)) static fz_pixmap *
FUNC_8(fz_context *VAR_2, struct info *VAR_3, const unsigned char *VAR_4, const unsigned char *VAR_5, int VAR_6, int VAR_7, const unsigned char **VAR_8)
{
 fz_pixmap *VAR_9 = ((void*)0);

 VAR_4 = FUNC_6(VAR_2, VAR_4, VAR_5, &VAR_3->width);
 VAR_4 = FUNC_7(VAR_2, VAR_4, VAR_5, 0);

 if (VAR_7)
 {
  VAR_4 = FUNC_6(VAR_2, VAR_4, VAR_5, &VAR_3->height);
  VAR_4 = FUNC_7(VAR_2, VAR_4, VAR_5, 1);
  VAR_3->maxval = 1;
 }
 else
 {
  VAR_4 = FUNC_6(VAR_2, VAR_4, VAR_5, &VAR_3->height);
  VAR_4 = FUNC_7(VAR_2, VAR_4, VAR_5, 0);
  VAR_4 = FUNC_6(VAR_2, VAR_4, VAR_5, &VAR_3->maxval);
  VAR_4 = FUNC_7(VAR_2, VAR_4, VAR_5, 0);
 }

 if (VAR_3->maxval <= 0 || VAR_3->maxval >= 65536)
  FUNC_4(VAR_2, VAR_0, "maximum sample value of out range in pnm image: %d", VAR_3->maxval);

 VAR_3->bitdepth = FUNC_0(VAR_3->maxval);

 if (VAR_3->height <= 0)
  FUNC_4(VAR_2, VAR_0, "image height must be > 0");
 if (VAR_3->width <= 0)
  FUNC_4(VAR_2, VAR_0, "image width must be > 0");
 if ((unsigned int)VAR_3->height > VAR_1 / VAR_3->width / FUNC_2(VAR_2, VAR_3->cs) / (VAR_3->bitdepth / 8 + 1))
  FUNC_4(VAR_2, VAR_0, "image too large");

 if (VAR_6)
 {
  int VAR_10, VAR_11, VAR_12;
  int VAR_13, VAR_14, VAR_15;

  VAR_13 = VAR_3->width;
  VAR_14 = VAR_3->height;
  VAR_15 = FUNC_2(VAR_2, VAR_3->cs);

  if (VAR_7)
  {
   for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++)
    for (VAR_10 = -1; VAR_10 < VAR_13; VAR_10++)
    {
     VAR_4 = FUNC_6(VAR_2, VAR_4, VAR_5, ((void*)0));
     VAR_4 = FUNC_7(VAR_2, VAR_4, VAR_5, 0);
    }
  }
  else
  {
   for (VAR_11 = 0; VAR_11 < VAR_14; VAR_11++)
    for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
     for (VAR_12 = 0; VAR_12 < VAR_15; VAR_12++)
     {
      VAR_4 = FUNC_6(VAR_2, VAR_4, VAR_5, ((void*)0));
      VAR_4 = FUNC_7(VAR_2, VAR_4, VAR_5, 0);
     }
  }
 }
 else
 {
  unsigned char *VAR_16;
  int VAR_17, VAR_18, VAR_19;
  int VAR_20, VAR_21, VAR_22;

  VAR_9 = FUNC_3(VAR_2, VAR_3->cs, VAR_3->width, VAR_3->height, ((void*)0), 0);
  VAR_16 = VAR_9->samples;

  VAR_20 = VAR_9->w;
  VAR_21 = VAR_9->h;
  VAR_22 = VAR_9->n;

  if (VAR_7)
  {
   for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++)
   {
    for (VAR_17 = 0; VAR_17 < VAR_20; VAR_17++)
    {
     int VAR_23 = 0;
     VAR_4 = FUNC_6(VAR_2, VAR_4, VAR_5, &VAR_23);
     VAR_4 = FUNC_7(VAR_2, VAR_4, VAR_5, 0);
     *VAR_16++ = VAR_23 ? 0x00 : 0xff;
    }
   }
  }
  else
  {
   for (VAR_18 = 0; VAR_18 < VAR_21; VAR_18++)
    for (VAR_17 = 0; VAR_17 < VAR_20; VAR_17++)
     for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++)
     {
      int VAR_24 = 0;
      VAR_4 = FUNC_6(VAR_2, VAR_4, VAR_5, &VAR_24);
      VAR_4 = FUNC_7(VAR_2, VAR_4, VAR_5, 0);
      VAR_24 = FUNC_1(VAR_24, 0, VAR_3->maxval);
      *VAR_16++ = FUNC_5(VAR_2, VAR_24, VAR_3->maxval, 255);
     }
  }
 }

 if (VAR_8)
  *VAR_8 = VAR_4;

 return VAR_9;
}
