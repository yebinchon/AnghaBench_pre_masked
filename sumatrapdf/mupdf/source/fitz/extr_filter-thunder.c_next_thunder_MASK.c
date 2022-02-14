
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* buffer; int run; int pixel; int lastpixel; int chain; scalar_t__ len; } ;
typedef TYPE_1__ fz_thunder ;
struct TYPE_5__ {unsigned char* rp; unsigned char* wp; int pos; TYPE_1__* state; } ;
typedef TYPE_2__ fz_stream ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_1, fz_stream *VAR_2, size_t VAR_3)
{
 fz_thunder *VAR_4 = VAR_2->state;
 unsigned char *VAR_5 = VAR_4->buffer;
 unsigned char *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_3 > (size_t)VAR_4->len)
  VAR_3 = (size_t)VAR_4->len;

 VAR_6 = VAR_5 + VAR_3;

 VAR_7 = 0;
 while (VAR_5 < VAR_6 && VAR_7 >= 0)
 {
  VAR_10 = 0;
  VAR_8 = 0;

  while (VAR_10 < 2)
  {
   if (VAR_4->run > 0)
   {
    VAR_8 <<= 4;
    VAR_8 |= VAR_4->pixel & 0xf;
    VAR_4->pixel >>= 4;
    VAR_4->run--;
    VAR_10++;

    if (VAR_4->run > 2)
     VAR_4->pixel |= ((VAR_4->pixel >> 4) & 0xf) << 8;
   }
   else
   {
    VAR_7 = FUNC_0(VAR_1, VAR_4->chain);
    if (VAR_7 < 0)
     break;

    switch ((VAR_7 >> 6) & 0x3)
    {
    case 0x0:
     VAR_4->run = VAR_7;
     VAR_4->pixel = (VAR_4->lastpixel << 8) | (VAR_4->lastpixel << 4) | (VAR_4->lastpixel << 0);
     break;

    case 0x1:
     for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
     {
      static const int VAR_12[] = { 0, 1, 0, -1 };
      VAR_11 = (VAR_7 >> (4 - VAR_9 * 2)) & 0x3;
      if (VAR_11 == 2)
       continue;

      VAR_4->lastpixel = (VAR_4->lastpixel + VAR_12[VAR_11]) & 0xf;
      VAR_4->pixel <<= 4;
      VAR_4->pixel |= VAR_4->lastpixel;
      VAR_4->run++;
     }
     break;

    case 0x2:
     for (VAR_9 = 0; VAR_9 < 2; VAR_9++)
     {
      static const int VAR_13[] = { 0, 1, 2, 3, 0, -3, -2, -1 };
      VAR_11 = (VAR_7 >> (3 - VAR_9 * 3)) & 0x7;
      if (VAR_11 == 4)
       continue;

      VAR_4->lastpixel = (VAR_4->lastpixel + VAR_13[VAR_11]) & 0xf;
      VAR_4->pixel <<= 4;
      VAR_4->pixel |= VAR_4->lastpixel;
      VAR_4->run++;
     }
     break;

    case 0x3:
     VAR_4->run = 1;
     VAR_4->pixel = VAR_7 & 0xf;
     VAR_4->lastpixel = VAR_4->pixel & 0xf;
     break;
    }
   }
  }

  if (VAR_10)
   *VAR_5++ = VAR_8;
 }

 VAR_2->rp = VAR_4->buffer;
 VAR_2->wp = VAR_5;
 VAR_2->pos += VAR_5 - VAR_4->buffer;

 if (VAR_2->rp != VAR_5)
  return *VAR_2->rp++;
 return VAR_0;
}
