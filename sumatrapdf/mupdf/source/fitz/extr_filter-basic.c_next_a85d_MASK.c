
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int word ;
struct TYPE_4__ {unsigned char* rp; unsigned char* wp; int pos; TYPE_2__* state; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;
struct TYPE_5__ {unsigned char* buffer; int eod; int chain; } ;
typedef TYPE_2__ fz_a85d ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(fz_context *VAR_2, fz_stream *VAR_3, size_t VAR_4)
{
 fz_a85d *VAR_5 = VAR_3->state;
 unsigned char *VAR_6 = VAR_5->buffer;
 unsigned char *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10;

 if (VAR_5->eod)
  return VAR_0;

 if (VAR_4 > sizeof(VAR_5->buffer))
  VAR_4 = sizeof(VAR_5->buffer);

 VAR_7 = VAR_6 + VAR_4;
 while (VAR_6 < VAR_7)
 {
  VAR_10 = FUNC_0(VAR_2, VAR_5->chain);
  if (VAR_10 < 0)
   break;

  if (VAR_10 >= '!' && VAR_10 <= 'u')
  {
   if (VAR_8 == 4)
   {
    VAR_9 = VAR_9 * 85 + (VAR_10 - '!');

    *VAR_6++ = (VAR_9 >> 24) & 0xff;
    *VAR_6++ = (VAR_9 >> 16) & 0xff;
    *VAR_6++ = (VAR_9 >> 8) & 0xff;
    *VAR_6++ = (VAR_9) & 0xff;

    VAR_9 = 0;
    VAR_8 = 0;
   }
   else
   {
    VAR_9 = VAR_9 * 85 + (VAR_10 - '!');
    VAR_8 ++;
   }
  }

  else if (VAR_10 == 'z' && VAR_8 == 0)
  {
   *VAR_6++ = 0;
   *VAR_6++ = 0;
   *VAR_6++ = 0;
   *VAR_6++ = 0;
  }

  else if (VAR_10 == '~')
  {
   VAR_10 = FUNC_0(VAR_2, VAR_5->chain);
   if (VAR_10 != '>')
    FUNC_2(VAR_2, "bad eod marker in a85d");

   switch (VAR_8) {
   case 0:
    break;
   case 1:



    FUNC_2(VAR_2, "partial final byte in a85d");
    break;
   case 2:
    VAR_9 = VAR_9 * (85 * 85 * 85) + 0xffffff;
    *VAR_6++ = VAR_9 >> 24;
    break;
   case 3:
    VAR_9 = VAR_9 * (85 * 85) + 0xffff;
    *VAR_6++ = VAR_9 >> 24;
    *VAR_6++ = VAR_9 >> 16;
    break;
   case 4:
    VAR_9 = VAR_9 * 85 + 0xff;
    *VAR_6++ = VAR_9 >> 24;
    *VAR_6++ = VAR_9 >> 16;
    *VAR_6++ = VAR_9 >> 8;
    break;
   }
   VAR_5->eod = 1;
   break;
  }

  else if (!FUNC_3(VAR_10))
  {
   FUNC_1(VAR_2, VAR_1, "bad data in a85d: '%c'", VAR_10);
  }
 }

 VAR_3->rp = VAR_5->buffer;
 VAR_3->wp = VAR_6;
 VAR_3->pos += VAR_6 - VAR_5->buffer;

 if (VAR_6 == VAR_3->rp)
  return VAR_0;

 return *VAR_3->rp++;
}
