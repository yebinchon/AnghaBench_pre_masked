
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int const x0; int const x1; int const y0; int const y1; } ;
struct TYPE_8__ {TYPE_1__ clip; } ;
typedef TYPE_2__ fz_rasterizer ;
typedef int fz_context ;


 int const VAR_0 ;
 int const VAR_1 ;
 float FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float,int const,int const) ;
 int FUNC_3 (int *,TYPE_2__*,int,int,int,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_2, fz_rasterizer *VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 const int VAR_12 = FUNC_4(VAR_3);
 const int VAR_13 = FUNC_5(VAR_3);

 if (VAR_4 <= VAR_6)
 {
  VAR_4 = FUNC_1(VAR_4 * VAR_12);
  VAR_6 = FUNC_0(VAR_6 * VAR_12);
 }
 else
 {
  VAR_4 = FUNC_0(VAR_4 * VAR_12);
  VAR_6 = FUNC_1(VAR_6 * VAR_12);
 }
 if (VAR_5 <= VAR_7)
 {
  VAR_5 = FUNC_1(VAR_5 * VAR_13);
  VAR_7 = FUNC_0(VAR_7 * VAR_13);
 }
 else
 {
  VAR_5 = FUNC_0(VAR_5 * VAR_13);
  VAR_7 = FUNC_1(VAR_7 * VAR_13);
 }

 VAR_4 = FUNC_2(VAR_4, VAR_3->clip.x0, VAR_3->clip.x1);
 VAR_6 = FUNC_2(VAR_6, VAR_3->clip.x0, VAR_3->clip.x1);
 VAR_5 = FUNC_2(VAR_5, VAR_3->clip.y0, VAR_3->clip.y1);
 VAR_7 = FUNC_2(VAR_7, VAR_3->clip.y0, VAR_3->clip.y1);





 VAR_8 = (int)FUNC_2(VAR_4, VAR_1 * VAR_12, VAR_0 * VAR_12);
 VAR_9 = (int)FUNC_2(VAR_5, VAR_1 * VAR_13, VAR_0 * VAR_13);
 VAR_10 = (int)FUNC_2(VAR_6, VAR_1 * VAR_12, VAR_0 * VAR_12);
 VAR_11 = (int)FUNC_2(VAR_7, VAR_1 * VAR_13, VAR_0 * VAR_13);

 FUNC_3(VAR_2, VAR_3, VAR_10, VAR_9, VAR_10, VAR_11);
 FUNC_3(VAR_2, VAR_3, VAR_8, VAR_11, VAR_8, VAR_9);
}
