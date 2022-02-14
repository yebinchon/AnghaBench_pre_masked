
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int y0; int y1; int x0; int x1; } ;
struct TYPE_8__ {TYPE_1__ clip; } ;
typedef TYPE_2__ fz_rasterizer ;
typedef int fz_context ;


 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int,int,int,int,int*) ;
 int FUNC_1 (int,int,int,int,int,int,int*) ;
 float FUNC_2 (float) ;
 scalar_t__ FUNC_3 (float,int const,int const) ;
 int FUNC_4 (int *,TYPE_2__*,int,int,int,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(fz_context *VAR_5, fz_rasterizer *VAR_6, float VAR_7, float VAR_8, float VAR_9, float VAR_10, int VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;
 const int VAR_18 = FUNC_5(VAR_6);
 const int VAR_19 = FUNC_6(VAR_6);

 VAR_7 = FUNC_2(VAR_7 * VAR_18);
 VAR_9 = FUNC_2(VAR_9 * VAR_18);
 VAR_8 = FUNC_2(VAR_8 * VAR_19);
 VAR_10 = FUNC_2(VAR_10 * VAR_19);





 VAR_12 = (int)FUNC_3(VAR_7, VAR_1 * VAR_18, VAR_0 * VAR_18);
 VAR_13 = (int)FUNC_3(VAR_8, VAR_1 * VAR_19, VAR_0 * VAR_19);
 VAR_14 = (int)FUNC_3(VAR_9, VAR_1 * VAR_18, VAR_0 * VAR_18);
 VAR_15 = (int)FUNC_3(VAR_10, VAR_1 * VAR_19, VAR_0 * VAR_19);

 VAR_16 = FUNC_1(VAR_6->clip.y0, 0, VAR_12, VAR_13, VAR_14, VAR_15, &VAR_17);
 if (VAR_16 == VAR_4) return;
 if (VAR_16 == VAR_3) { VAR_15 = VAR_6->clip.y0; VAR_14 = VAR_17; }
 if (VAR_16 == VAR_2) { VAR_13 = VAR_6->clip.y0; VAR_12 = VAR_17; }

 VAR_16 = FUNC_1(VAR_6->clip.y1, 1, VAR_12, VAR_13, VAR_14, VAR_15, &VAR_17);
 if (VAR_16 == VAR_4) return;
 if (VAR_16 == VAR_3) { VAR_15 = VAR_6->clip.y1; VAR_14 = VAR_17; }
 if (VAR_16 == VAR_2) { VAR_13 = VAR_6->clip.y1; VAR_12 = VAR_17; }

 VAR_16 = FUNC_0(VAR_6->clip.x0, 0, VAR_12, VAR_13, VAR_14, VAR_15, &VAR_17);
 if (VAR_16 == VAR_4) {
  VAR_12 = VAR_14 = VAR_6->clip.x0;
 }
 if (VAR_16 == VAR_3) {
  FUNC_4(VAR_5, VAR_6, VAR_6->clip.x0, VAR_17, VAR_6->clip.x0, VAR_15);
  VAR_14 = VAR_6->clip.x0;
  VAR_15 = VAR_17;
 }
 if (VAR_16 == VAR_2) {
  FUNC_4(VAR_5, VAR_6, VAR_6->clip.x0, VAR_13, VAR_6->clip.x0, VAR_17);
  VAR_12 = VAR_6->clip.x0;
  VAR_13 = VAR_17;
 }

 VAR_16 = FUNC_0(VAR_6->clip.x1, 1, VAR_12, VAR_13, VAR_14, VAR_15, &VAR_17);
 if (VAR_16 == VAR_4) {
  VAR_12 = VAR_14 = VAR_6->clip.x1;
 }
 if (VAR_16 == VAR_3) {
  FUNC_4(VAR_5, VAR_6, VAR_6->clip.x1, VAR_17, VAR_6->clip.x1, VAR_15);
  VAR_14 = VAR_6->clip.x1;
  VAR_15 = VAR_17;
 }
 if (VAR_16 == VAR_2) {
  FUNC_4(VAR_5, VAR_6, VAR_6->clip.x1, VAR_13, VAR_6->clip.x1, VAR_17);
  VAR_12 = VAR_6->clip.x1;
  VAR_13 = VAR_17;
 }

 FUNC_4(VAR_5, VAR_6, VAR_12, VAR_13, VAR_14, VAR_15);
}
