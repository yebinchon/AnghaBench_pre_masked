
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int* index; int max_len; scalar_t__ new_line; scalar_t__ patch_l; } ;
typedef TYPE_1__ fz_weights ;
struct TYPE_7__ {float (* fn ) (TYPE_2__*,float) ;} ;
typedef TYPE_2__ fz_scale_filter ;


 int FUNC_0 (int) ;
 float FUNC_1 (TYPE_2__*,float) ;

__attribute__((used)) static void
FUNC_2(fz_weights *VAR_0, int VAR_1, int VAR_2, fz_scale_filter *VAR_3,
 float VAR_4, float VAR_5, float VAR_6, int VAR_7, float VAR_8)
{
 float VAR_9 = VAR_1 - VAR_4 + 0.5f - ((VAR_2 + 0.5f)*VAR_8/VAR_7);
 float VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_9 *= VAR_6;
 if (VAR_9 < 0)
  VAR_9 = -VAR_9;
 VAR_10 = VAR_3->fn(VAR_3, VAR_9)*VAR_5;
 VAR_14 = (int)(256*VAR_10+0.5f);


 if (VAR_2 < 0 || VAR_2 >= VAR_7)
  return;
 if (VAR_14 == 0)
 {



  if (VAR_0->new_line && VAR_10 > 0)
   VAR_14 = 1;
  else
   return;
 }


 VAR_1 -= VAR_0->patch_l;
 if (VAR_0->new_line)
 {

  VAR_0->new_line = 0;
  VAR_13 = VAR_0->index[VAR_1];
  VAR_0->index[VAR_13] = VAR_2;
  VAR_0->index[VAR_13+1] = 0;
 }
 VAR_13 = VAR_0->index[VAR_1];
 VAR_11 = VAR_0->index[VAR_13++];
 VAR_12 = VAR_0->index[VAR_13++];
 while (VAR_2 < VAR_11)
 {



  int VAR_15;

  for (VAR_15 = VAR_12; VAR_15 > 0; VAR_15--)
  {
   VAR_0->index[VAR_13+VAR_15] = VAR_0->index[VAR_13+VAR_15-1];
  }
  VAR_0->index[VAR_13] = 0;
  VAR_11--;
  VAR_12++;
  VAR_0->index[VAR_13-2] = VAR_11;
  VAR_0->index[VAR_13-1] = VAR_12;
 }
 if (VAR_2-VAR_11 >= VAR_12)
 {

  while (VAR_2-VAR_11 >= ++VAR_12)
  {
   VAR_0->index[VAR_13+VAR_12-1] = 0;
  }
  FUNC_0(VAR_12-1 == VAR_2-VAR_11);
  VAR_0->index[VAR_13+VAR_2-VAR_11] = VAR_14;
  VAR_0->index[VAR_13-1] = VAR_12;
  FUNC_0(VAR_12 <= VAR_0->max_len);
 }
 else
 {

  VAR_0->index[VAR_13+VAR_2-VAR_11] += VAR_14;
 }
}
