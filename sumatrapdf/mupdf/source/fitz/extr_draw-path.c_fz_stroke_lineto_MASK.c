
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int sn; scalar_t__ dot; scalar_t__ cap; int from_bezier; TYPE_2__* beg; TYPE_1__* seg; scalar_t__ dash_list; int linewidth; } ;
typedef TYPE_3__ sctx ;
typedef int fz_context ;
struct TYPE_10__ {float x; float y; } ;
struct TYPE_9__ {float x; float y; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (float,float,int ,float*,float*) ;
 int FUNC_1 (int *,TYPE_3__*,float,float,float,float) ;
 int FUNC_2 (int *,TYPE_3__*,float,float,float,float,int) ;
 int FUNC_3 (int *,TYPE_3__*,float,float,float,float,float,float,int) ;
 int FUNC_4 (int *,TYPE_3__*,float,float,float,float) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_4, sctx *VAR_5, float VAR_6, float VAR_7, int VAR_8)
{
 float VAR_9 = VAR_5->seg[VAR_5->sn-1].x;
 float VAR_10 = VAR_5->seg[VAR_5->sn-1].y;
 float VAR_11 = VAR_6 - VAR_9;
 float VAR_12 = VAR_7 - VAR_10;
 float VAR_13, VAR_14;

 if (FUNC_0(VAR_11, VAR_12, VAR_5->linewidth, &VAR_13, &VAR_14))
 {
  if (VAR_5->dot == VAR_3 && (VAR_5->cap == VAR_0 || VAR_5->dash_list))
   VAR_5->dot = VAR_2;
  return;
 }
 VAR_5->dot = VAR_1;

 if (VAR_5->sn == 2)
  FUNC_3(VAR_4, VAR_5, VAR_5->seg[0].x, VAR_5->seg[0].y, VAR_9, VAR_10, VAR_6, VAR_7, VAR_5->from_bezier & VAR_8);


 if (0 && VAR_11 == 0)
 {
  FUNC_4(VAR_4, VAR_5, VAR_9 - VAR_13, VAR_10, VAR_6 + VAR_13, VAR_7);
 }
 else if (VAR_12 == 0)
 {
  FUNC_1(VAR_4, VAR_5, VAR_9, VAR_10 - VAR_14, VAR_6, VAR_7 + VAR_14);
 }
 else

 {

  FUNC_2(VAR_4, VAR_5, VAR_9 - VAR_13, VAR_10 - VAR_14, VAR_6 - VAR_13, VAR_7 - VAR_14, 0);
  FUNC_2(VAR_4, VAR_5, VAR_6 + VAR_13, VAR_7 + VAR_14, VAR_9 + VAR_13, VAR_10 + VAR_14, 1);
 }

 if (VAR_5->sn == 2)
 {
  VAR_5->seg[0] = VAR_5->seg[1];
  VAR_5->seg[1].x = VAR_6;
  VAR_5->seg[1].y = VAR_7;
 }
 else
 {
  VAR_5->seg[1].x = VAR_5->beg[1].x = VAR_6;
  VAR_5->seg[1].y = VAR_5->beg[1].y = VAR_7;
  VAR_5->sn = 2;
 }
 VAR_5->from_bezier = VAR_8;
}
