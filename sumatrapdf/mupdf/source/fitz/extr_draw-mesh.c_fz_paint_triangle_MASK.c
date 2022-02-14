
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ w; scalar_t__ x; } ;
typedef TYPE_1__ fz_pixmap ;
struct TYPE_10__ {float y0; float y1; int x1; int x0; } ;
typedef TYPE_2__ fz_irect ;
struct TYPE_11__ {int * v; scalar_t__ x; } ;
typedef TYPE_3__ edge_data ;


 int FUNC_0 (int) ;
 float FUNC_1 (int ) ;
 int FUNC_2 (float,float) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (float,float) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,float,int,int,int,int,int *,int *,int) ;
 int FUNC_7 (float*,float*,TYPE_3__*,float,int) ;
 int FUNC_8 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_9(fz_pixmap *VAR_0, float *VAR_1[3], int VAR_2, fz_irect VAR_3)
{
 edge_data VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;
 float VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_6 = VAR_8 = 0;
 if (VAR_1[1][1] < VAR_1[0][1]) VAR_6 = 1; else VAR_8 = 1;
 if (VAR_1[2][1] < VAR_1[VAR_6][1]) VAR_6 = 2;
 else if (VAR_1[2][1] > VAR_1[VAR_8][1]) VAR_8 = 2;
 if (VAR_1[VAR_6][1] == VAR_1[VAR_8][1]) return;


 if (VAR_1[VAR_8][1] < VAR_3.y0) return;
 if (VAR_1[VAR_6][1] > VAR_3.y1) return;


 VAR_7 = 3^VAR_6^VAR_8;

 FUNC_0(VAR_6 != VAR_8 && VAR_6 != VAR_7 && VAR_7 != VAR_8);

 VAR_11 = FUNC_3(VAR_3.x0, VAR_0->x);
 VAR_12 = FUNC_5(VAR_3.x1, VAR_0->x + VAR_0->w);

 VAR_9 = FUNC_1(FUNC_2(VAR_3.y0, VAR_1[VAR_6][1]));
 VAR_10 = FUNC_1(FUNC_4(VAR_3.y1, VAR_1[VAR_7][1]));

 VAR_2 -= 2;
 FUNC_7(VAR_1[VAR_6], VAR_1[VAR_8], &VAR_4, VAR_9, VAR_2);
 if (VAR_9 < VAR_10)
 {
  FUNC_7(VAR_1[VAR_6], VAR_1[VAR_7], &VAR_5, VAR_9, VAR_2);

  do
  {
   FUNC_6(VAR_0, VAR_9, (int)VAR_4, (int)VAR_5, VAR_11, VAR_12, &VAR_4[0], &VAR_5[0], VAR_2);
   FUNC_8(&VAR_4, VAR_2);
   FUNC_8(&VAR_5, VAR_2);
   VAR_9 ++;
  }
  while (VAR_9 < VAR_10);
 }

 VAR_10 = FUNC_1(FUNC_4(VAR_3.y1, VAR_1[VAR_8][1]));
 if (VAR_9 < VAR_10)
 {
  FUNC_7(VAR_1[VAR_7], VAR_1[VAR_8], &VAR_5, VAR_9, VAR_2);

  do
  {
   FUNC_6(VAR_0, VAR_9, (int)VAR_4, (int)VAR_5, VAR_11, VAR_12, &VAR_4[0], &VAR_5[0], VAR_2);
   VAR_9 ++;
   if (VAR_9 >= VAR_10)
    break;
   FUNC_8(&VAR_4, VAR_2);
   FUNC_8(&VAR_5, VAR_2);
  }
  while (1);
 }
}
