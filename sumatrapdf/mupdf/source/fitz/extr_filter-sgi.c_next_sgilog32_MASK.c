
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int * rp; int pos; int * wp; TYPE_2__* state; } ;
typedef TYPE_1__ fz_stream ;
struct TYPE_5__ {int run; int w; int n; int c; int * temp; int chain; } ;
typedef TYPE_2__ fz_sgilog32 ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_4(fz_context *VAR_2, fz_stream *VAR_3, size_t VAR_4)
{
 fz_sgilog32 *VAR_5 = VAR_3->state;
 uint32_t *VAR_6;
 uint32_t *VAR_7;
 uint8_t *VAR_8;
 int VAR_9;

 (void)VAR_4;

 if (VAR_5->run < 0)
  return VAR_0;

 FUNC_2(VAR_5->temp, 0, VAR_5->w * sizeof(uint32_t));

 for (VAR_9 = 24; VAR_9 >= 0; VAR_9 -= 8)
 {
  VAR_6 = VAR_5->temp;
  VAR_7 = VAR_6 + VAR_5->w;
  while (VAR_6 < VAR_7)
  {
   if (VAR_5->n == 0)
   {
    VAR_5->run = FUNC_0(VAR_2, VAR_5->chain);
    if (VAR_5->run < 0)
    {
     VAR_5->run = -1;
     FUNC_1(VAR_2, VAR_1, "premature end of data in run length decode");
    }
    if (VAR_5->run < 128)
     VAR_5->n = VAR_5->run;
    else
    {
     VAR_5->n = VAR_5->run - 126;
     VAR_5->c = FUNC_0(VAR_2, VAR_5->chain);
     if (VAR_5->c < 0)
     {
      VAR_5->run = -1;
      FUNC_1(VAR_2, VAR_1, "premature end of data in run length decode");
     }
    }
   }

   if (VAR_5->run < 128)
   {
    while (VAR_6 < VAR_7 && VAR_5->n)
    {
     int VAR_10 = FUNC_0(VAR_2, VAR_5->chain);
     if (VAR_10 < 0)
     {
      VAR_5->run = -1;
      FUNC_1(VAR_2, VAR_1, "premature end of data in run length decode");
     }
     *VAR_6++ |= VAR_10<<VAR_9;
     VAR_5->n--;
    }
   }
   else
   {
    while (VAR_6 < VAR_7 && VAR_5->n)
    {
     *VAR_6++ |= VAR_5->c<<VAR_9;
     VAR_5->n--;
    }
   }
  }
 }

 VAR_6 = VAR_5->temp;
 VAR_8 = (uint8_t *)VAR_6;
 VAR_7 = VAR_6 + VAR_5->w;
 while (VAR_6 < VAR_7)
 {
  FUNC_3(VAR_2, *VAR_6++, VAR_8);
  VAR_8 += 3;
 }

 VAR_3->rp = (uint8_t *)(VAR_5->temp);
 VAR_3->wp = VAR_8;
 VAR_3->pos += VAR_8 - VAR_3->rp;

 if (VAR_8 == VAR_3->rp)
  return VAR_0;

 return *VAR_3->rp++;
}
