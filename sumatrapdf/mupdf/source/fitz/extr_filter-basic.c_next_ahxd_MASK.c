
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* rp; unsigned char* wp; int pos; TYPE_2__* state; } ;
typedef TYPE_1__ fz_stream ;
typedef int fz_context ;
struct TYPE_5__ {unsigned char* buffer; int eod; int chain; } ;
typedef TYPE_2__ fz_ahxd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(fz_context *VAR_2, fz_stream *VAR_3, size_t VAR_4)
{
 fz_ahxd *VAR_5 = VAR_3->state;
 unsigned char *VAR_6 = VAR_5->buffer;
 unsigned char *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 if (VAR_4 > sizeof(VAR_5->buffer))
  VAR_4 = sizeof(VAR_5->buffer);
 VAR_7 = VAR_6 + VAR_4;

 VAR_11 = 0;

 while (VAR_6 < VAR_7)
 {
  if (VAR_5->eod)
   break;

  VAR_10 = FUNC_0(VAR_2, VAR_5->chain);
  if (VAR_10 < 0)
   break;

  if (FUNC_2(VAR_10))
  {
   if (!VAR_11)
   {
    VAR_8 = FUNC_4(VAR_10);
    VAR_11 = 1;
   }
   else
   {
    VAR_9 = FUNC_4(VAR_10);
    *VAR_6++ = (VAR_8 << 4) | VAR_9;
    VAR_11 = 0;
   }
  }
  else if (VAR_10 == '>')
  {
   if (VAR_11)
    *VAR_6++ = (VAR_8 << 4);
   VAR_5->eod = 1;
   break;
  }
  else if (!FUNC_3(VAR_10))
  {
   FUNC_1(VAR_2, VAR_1, "bad data in ahxd: '%c'", VAR_10);
  }
 }
 VAR_3->rp = VAR_5->buffer;
 VAR_3->wp = VAR_6;
 VAR_3->pos += VAR_6 - VAR_5->buffer;

 if (VAR_3->rp != VAR_6)
  return *VAR_3->rp++;
 return VAR_0;
}
