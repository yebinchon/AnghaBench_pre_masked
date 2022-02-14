
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char* data; } ;
typedef TYPE_1__ fz_glyph ;


 unsigned char FUNC_0 (int,int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(int VAR_0, unsigned char *VAR_1, int VAR_2, const fz_glyph *VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 while (VAR_5--)
 {
  int VAR_8, VAR_9, VAR_10, VAR_11;
  const unsigned char *VAR_12;
  unsigned char *VAR_13 = VAR_1;
  int VAR_14 = ((const int *)(VAR_3->data))[VAR_7++];
  if (VAR_14 >= 0)
  {
   int VAR_15 = 0;
   VAR_12 = &VAR_3->data[VAR_14];
   VAR_11 = 0;
   VAR_9 = VAR_4;
   VAR_8 = VAR_6;
   while (VAR_8)
   {
    int VAR_16 = *VAR_12++;
    switch (VAR_16 & 3)
    {
    case 0:
     VAR_11 = VAR_16>>2;
     VAR_10 = 0;
     break;
    case 1:
     VAR_10 = (VAR_16>>2) + 1 + (VAR_11<<6);
     VAR_11 = 0;
     if (VAR_10 > VAR_8)
     {
      VAR_10 -= VAR_8;
      goto transparent_run;
     }
     break;
    case 2:
     VAR_15 = VAR_16 & 4;
     VAR_10 = (VAR_16>>3) + 1 + (VAR_11<<5);
     VAR_11 = 0;
     if (VAR_10 > VAR_8)
     {
      VAR_10 -= VAR_8;
      goto solid_run;
     }
     break;
    default:
     VAR_15 = VAR_16 & 4;
     VAR_10 = (VAR_16>>3) + 1 + (VAR_11<<5);
     VAR_11 = 0;
     if (VAR_10 > VAR_8)
     {
      VAR_12 += VAR_8;
      VAR_10 -= VAR_8;
      goto intermediate_run;
     }
     VAR_12 += VAR_10;
     break;
    }
    if (VAR_15)
    {
     VAR_9 = 0;
     break;
    }
    VAR_8 -= VAR_10;
   }
   while (VAR_9 > 0)
   {
    int VAR_17 = *VAR_12++;
    switch(VAR_17 & 3)
    {
    case 0:
     VAR_11 = VAR_17>>2;
     break;
    case 1:
     VAR_10 = (VAR_17>>2) + 1 + (VAR_11<<6);
     VAR_11 = 0;
transparent_run:
     if (VAR_10 > VAR_9)
      VAR_10 = VAR_9;
     VAR_9 -= VAR_10;
     VAR_13 += VAR_10;
     break;
    case 2:
     VAR_15 = VAR_17 & 4;
     VAR_10 = (VAR_17>>3) + 1 + (VAR_11<<5);
     VAR_11 = 0;
solid_run:
     if (VAR_10 > VAR_9)
      VAR_10 = VAR_9;
     VAR_9 -= VAR_10;
     do
     {
      *VAR_13++ = 0xFF;
     }
     while (--VAR_10);
     break;
    default:
     VAR_15 = VAR_17 & 4;
     VAR_10 = (VAR_17>>3) + 1 + (VAR_11<<5);
     VAR_11 = 0;
intermediate_run:
     if (VAR_10 > VAR_9)
      VAR_10 = VAR_9;
     VAR_9 -= VAR_10;
     do
     {
      int VAR_18 = *VAR_13;
      int VAR_19 = *VAR_12++;
      if (VAR_18 == 0)
      {
       *VAR_13++ = VAR_19;
      }
      else
      {
       VAR_19 = FUNC_1(VAR_19);
       *VAR_13 = FUNC_0(0xFF, VAR_18, VAR_19);
       VAR_13++;
      }
     }
     while (--VAR_10);
     break;
    }
    if (VAR_15)
     break;
   }
  }
  VAR_1 += VAR_0;
 }
}
