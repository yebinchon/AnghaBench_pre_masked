
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {float x; float y; } ;
struct TYPE_4__ {float x0; float x1; float y0; float y1; } ;
struct sctx {int toggle; int cap; float phase; float dash_total; int dash_len; float* dash_list; size_t offset; TYPE_3__ dash_cur; TYPE_1__ rect; TYPE_2__* stroke; } ;
typedef int fz_context ;
struct TYPE_5__ {int dash_cap; } ;


 int FUNC_0 (int *,struct sctx*,int,int) ;
 int FUNC_1 (int *,struct sctx*,float,float,int) ;
 int FUNC_2 (int *,struct sctx*,float,float) ;
 float FUNC_3 (float) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, struct sctx *VAR_1, float VAR_2, float VAR_3, int VAR_4)
{
 float VAR_5, VAR_6, VAR_7;
 float VAR_8, VAR_9, VAR_10, VAR_11;
 float VAR_12, VAR_13;
 float VAR_14, VAR_15;
 float VAR_16, VAR_17;
 int VAR_18;
 int VAR_19 = VAR_1->stroke->dash_cap;

 VAR_12 = VAR_1->dash_cur.x;
 VAR_13 = VAR_1->dash_cur.y;
 VAR_5 = VAR_2 - VAR_12;
 VAR_6 = VAR_3 - VAR_13;
 VAR_9 = 0;
 VAR_11 = 0;
 VAR_8 = FUNC_3(VAR_5 * VAR_5 + VAR_6 * VAR_6);



 if ((VAR_7 = VAR_1->rect.x0 - VAR_12) > 0)
 {
  if (VAR_2 < VAR_1->rect.x0)
  {

   VAR_11 = VAR_8;
   VAR_16 = VAR_2;
   VAR_17 = VAR_3;
   goto adjust_for_tail;
  }
  VAR_12 = VAR_1->rect.x0;
  goto a_moved_horizontally;
 }
 else if (VAR_7 < 0 && (VAR_7 = (VAR_1->rect.x1 - VAR_12)) < 0)
 {
  if (VAR_2 > VAR_1->rect.x1)
  {

   VAR_11 = VAR_8;
   VAR_16 = VAR_2;
   VAR_17 = VAR_3;
   goto adjust_for_tail;
  }
  VAR_12 = VAR_1->rect.x1;
a_moved_horizontally:
  VAR_13 += VAR_6 * VAR_7/VAR_5;
  VAR_9 = VAR_8 * VAR_7/VAR_5;
  VAR_8 -= VAR_9;
  VAR_5 = VAR_2 - VAR_12;
  VAR_6 = VAR_3 - VAR_13;
 }

 if ((VAR_7 = VAR_1->rect.y0 - VAR_13) > 0)
 {
  if (VAR_3 < VAR_1->rect.y0)
  {

   VAR_11 = VAR_8;
   VAR_16 = VAR_2;
   VAR_17 = VAR_3;
   goto adjust_for_tail;
  }
  VAR_13 = VAR_1->rect.y0;
  goto a_moved_vertically;
 }
 else if (VAR_7 < 0 && (VAR_7 = (VAR_1->rect.y1 - VAR_13)) < 0)
 {
  if (VAR_3 > VAR_1->rect.y1)
  {

   VAR_11 = VAR_8;
   VAR_16 = VAR_2;
   VAR_17 = VAR_3;
   goto adjust_for_tail;
  }
  VAR_13 = VAR_1->rect.y1;
a_moved_vertically:
  VAR_12 += VAR_5 * VAR_7/VAR_6;
  VAR_7 = VAR_8 * VAR_7/VAR_6;
  VAR_8 -= VAR_7;
  VAR_9 += VAR_7;
  VAR_5 = VAR_2 - VAR_12;
  VAR_6 = VAR_3 - VAR_13;
 }
 if (VAR_9 != 0.0f)
 {

  if (VAR_1->toggle)
  {
   FUNC_1(VAR_0, VAR_1, VAR_12, VAR_13, VAR_4);
  }
  else
  {
   FUNC_0(VAR_0, VAR_1, VAR_1->cap, VAR_1->stroke->dash_cap);
   VAR_1->cap = VAR_1->stroke->dash_cap;
   FUNC_2(VAR_0, VAR_1, VAR_12, VAR_13);
  }
  VAR_9 += VAR_1->phase;
  VAR_18 = VAR_9/VAR_1->dash_total;
  VAR_9 -= VAR_18*VAR_1->dash_total;
  if (VAR_18 & VAR_1->dash_len & 1)
   VAR_1->toggle = !VAR_1->toggle;
  while (VAR_9 >= VAR_1->dash_list[VAR_1->offset])
  {
   VAR_9 -= VAR_1->dash_list[VAR_1->offset];
   VAR_1->offset++;
   if (VAR_1->offset == VAR_1->dash_len)
    VAR_1->offset = 0;
   VAR_1->toggle = !VAR_1->toggle;
  }
  if (VAR_1->toggle)
  {
   FUNC_1(VAR_0, VAR_1, VAR_12, VAR_13, VAR_4);
  }
  else
  {
   FUNC_0(VAR_0, VAR_1, VAR_1->cap, VAR_1->stroke->dash_cap);
   VAR_1->cap = VAR_1->stroke->dash_cap;
   FUNC_2(VAR_0, VAR_1, VAR_12, VAR_13);
  }
  VAR_1->phase = VAR_9;
  VAR_9 = 0;
 }


 if ((VAR_7 = VAR_2 - VAR_1->rect.x0) < 0)
 {
  VAR_16 = VAR_2;
  VAR_17 = VAR_3;
  VAR_2 = VAR_1->rect.x0;
  goto b_moved_horizontally;
 }
 else if (VAR_7 > 0 && (VAR_7 = (VAR_2 - VAR_1->rect.x1)) > 0)
 {
  VAR_16 = VAR_2;
  VAR_17 = VAR_3;
  VAR_2 = VAR_1->rect.x1;
b_moved_horizontally:
  VAR_3 -= VAR_6 * VAR_7/VAR_5;
  VAR_11 = VAR_8 * VAR_7/VAR_5;
  VAR_8 -= VAR_11;
  VAR_5 = VAR_2 - VAR_12;
  VAR_6 = VAR_3 - VAR_13;
 }

 if ((VAR_7 = VAR_3 - VAR_1->rect.y0) < 0)
 {
  VAR_16 = VAR_2;
  VAR_17 = VAR_3;
  VAR_3 = VAR_1->rect.y0;
  goto b_moved_vertically;
 }
 else if (VAR_7 > 0 && (VAR_7 = (VAR_3 - VAR_1->rect.y1)) > 0)
 {
  float VAR_20;
  VAR_16 = VAR_2;
  VAR_17 = VAR_3;
  VAR_3 = VAR_1->rect.y1;
b_moved_vertically:
  VAR_2 -= VAR_5 * VAR_7/VAR_6;
  VAR_20 = VAR_8 * VAR_7/VAR_6;
  VAR_11 += VAR_20;
  VAR_8 -= VAR_20;
  VAR_5 = VAR_2 - VAR_12;
  VAR_6 = VAR_3 - VAR_13;
 }

 while (VAR_8 - VAR_9 > VAR_1->dash_list[VAR_1->offset] - VAR_1->phase)
 {
  VAR_9 += VAR_1->dash_list[VAR_1->offset] - VAR_1->phase;
  VAR_10 = VAR_9 / VAR_8;
  VAR_14 = VAR_12 + VAR_10 * VAR_5;
  VAR_15 = VAR_13 + VAR_10 * VAR_6;

  if (VAR_1->toggle)
  {
   FUNC_1(VAR_0, VAR_1, VAR_14, VAR_15, VAR_4);
  }
  else
  {
   FUNC_0(VAR_0, VAR_1, VAR_1->cap, VAR_19);
   VAR_1->cap = VAR_19;
   FUNC_2(VAR_0, VAR_1, VAR_14, VAR_15);
  }

  VAR_1->toggle = !VAR_1->toggle;
  VAR_1->phase = 0;
  VAR_1->offset ++;
  if (VAR_1->offset == VAR_1->dash_len)
   VAR_1->offset = 0;
 }

 VAR_1->phase += VAR_8 - VAR_9;

 if (VAR_11 == 0.0f)
 {
  VAR_1->dash_cur.x = VAR_2;
  VAR_1->dash_cur.y = VAR_3;

  if (VAR_1->toggle)
  {
   FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  }
 }
 else
 {
adjust_for_tail:
  VAR_1->dash_cur.x = VAR_16;
  VAR_1->dash_cur.y = VAR_17;

  if (VAR_1->toggle)
  {
   FUNC_1(VAR_0, VAR_1, VAR_16, VAR_17, VAR_4);
  }
  else
  {
   FUNC_0(VAR_0, VAR_1, VAR_1->cap, VAR_19);
   VAR_1->cap = VAR_19;
   FUNC_2(VAR_0, VAR_1, VAR_16, VAR_17);
  }
  VAR_11 += VAR_1->phase;
  VAR_18 = VAR_11/VAR_1->dash_total;
  VAR_11 -= VAR_18*VAR_1->dash_total;
  if (VAR_18 & VAR_1->dash_len & 1)
   VAR_1->toggle = !VAR_1->toggle;
  while (VAR_11 > VAR_1->dash_list[VAR_1->offset])
  {
   VAR_11 -= VAR_1->dash_list[VAR_1->offset];
   VAR_1->offset++;
   if (VAR_1->offset == VAR_1->dash_len)
    VAR_1->offset = 0;
   VAR_1->toggle = !VAR_1->toggle;
  }
  if (VAR_1->toggle)
  {
   FUNC_1(VAR_0, VAR_1, VAR_16, VAR_17, VAR_4);
  }
  else
  {
   FUNC_0(VAR_0, VAR_1, VAR_1->cap, VAR_19);
   VAR_1->cap = VAR_19;
   FUNC_2(VAR_0, VAR_1, VAR_16, VAR_17);
  }
  VAR_1->phase = VAR_11;
 }
}
