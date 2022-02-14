
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* rp; unsigned char* wp; int pos; TYPE_2__* state; } ;
typedef TYPE_1__ fz_stream ;
struct TYPE_5__ {unsigned char* buffer; int run; int n; void* c; int chain; } ;
typedef TYPE_2__ fz_rld ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static int
FUNC_2(fz_context *VAR_2, fz_stream *VAR_3, size_t VAR_4)
{
 fz_rld *VAR_5 = VAR_3->state;
 unsigned char *VAR_6 = VAR_5->buffer;
 unsigned char *VAR_7;

 if (VAR_5->run == 128)
  return VAR_0;

 if (VAR_4 > sizeof(VAR_5->buffer))
  VAR_4 = sizeof(VAR_5->buffer);
 VAR_7 = VAR_6 + VAR_4;

 while (VAR_6 < VAR_7)
 {
  if (VAR_5->run == 128)
   break;

  if (VAR_5->n == 0)
  {
   VAR_5->run = FUNC_0(VAR_2, VAR_5->chain);
   if (VAR_5->run < 0)
   {
    VAR_5->run = 128;
    break;
   }
   if (VAR_5->run < 128)
    VAR_5->n = VAR_5->run + 1;
   if (VAR_5->run > 128)
   {
    VAR_5->n = 257 - VAR_5->run;
    VAR_5->c = FUNC_0(VAR_2, VAR_5->chain);
    if (VAR_5->c < 0)
     FUNC_1(VAR_2, VAR_1, "premature end of data in run length decode");
   }
  }

  if (VAR_5->run < 128)
  {
   while (VAR_6 < VAR_7 && VAR_5->n)
   {
    int VAR_8 = FUNC_0(VAR_2, VAR_5->chain);
    if (VAR_8 < 0)
     FUNC_1(VAR_2, VAR_1, "premature end of data in run length decode");
    *VAR_6++ = VAR_8;
    VAR_5->n--;
   }
  }

  if (VAR_5->run > 128)
  {
   while (VAR_6 < VAR_7 && VAR_5->n)
   {
    *VAR_6++ = VAR_5->c;
    VAR_5->n--;
   }
  }
 }

 VAR_3->rp = VAR_5->buffer;
 VAR_3->wp = VAR_6;
 VAR_3->pos += VAR_6 - VAR_5->buffer;

 if (VAR_6 == VAR_3->rp)
  return VAR_0;

 return *VAR_3->rp++;
}
