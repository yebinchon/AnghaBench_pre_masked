
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int * rp; int pos; int * wp; TYPE_2__* state; } ;
typedef TYPE_1__ fz_stream ;
struct TYPE_5__ {int err; int w; int * temp; int chain; } ;
typedef TYPE_2__ fz_sgilog24 ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ,int *) ;

__attribute__((used)) static int
FUNC_3(fz_context *VAR_2, fz_stream *VAR_3, size_t VAR_4)
{
 fz_sgilog24 *VAR_5 = VAR_3->state;
 uint8_t *VAR_6;
 uint8_t *VAR_7;

 (void)VAR_4;

 if (VAR_5->err)
  return VAR_0;

 FUNC_1(VAR_5->temp, 0, VAR_5->w * 3);

 VAR_6 = VAR_5->temp;
 VAR_7 = VAR_6 + VAR_5->w * 3;
 while (VAR_6 < VAR_7)
 {
  int VAR_8 = FUNC_2(VAR_2, VAR_5->chain, VAR_6);
  if (VAR_8 < 0)
  {
   VAR_5->err = 1;
   FUNC_0(VAR_2, VAR_1, "premature end of data in run length decode");
  }
  VAR_6 += 3;
 }

 VAR_3->rp = VAR_5->temp;
 VAR_3->wp = VAR_6;
 VAR_3->pos += VAR_6 - VAR_3->rp;

 if (VAR_6 == VAR_3->rp)
  return VAR_0;

 return *VAR_3->rp++;
}
