
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_rasterizer ;
struct TYPE_5__ {float x0; float x1; float y0; float y1; } ;
struct TYPE_6__ {TYPE_1__ bbox; } ;
struct TYPE_7__ {TYPE_2__ super; } ;
typedef TYPE_3__ fz_edgebuffer ;
typedef int fz_context ;
typedef int fixed ;


 int FUNC_0 (float) ;
 int FUNC_1 (int *,TYPE_3__*,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, fz_rasterizer *VAR_1, float VAR_2, float VAR_3, float VAR_4, float VAR_5, int VAR_6)
{
 fz_edgebuffer *VAR_7 = (fz_edgebuffer *)VAR_1;
 fixed VAR_8 = FUNC_0(VAR_2);
 fixed VAR_9 = FUNC_0(VAR_3);
 fixed VAR_10 = FUNC_0(VAR_4);
 fixed VAR_11 = FUNC_0(VAR_5);

 if (VAR_2 < VAR_4)
 {
  if (VAR_2 < VAR_7->super.bbox.x0) VAR_7->super.bbox.x0 = VAR_2;
  if (VAR_4 > VAR_7->super.bbox.x1) VAR_7->super.bbox.x1 = VAR_4;
 }
 else
 {
  if (VAR_2 > VAR_7->super.bbox.x1) VAR_7->super.bbox.x1 = VAR_2;
  if (VAR_4 < VAR_7->super.bbox.x0) VAR_7->super.bbox.x0 = VAR_4;
 }
 if (VAR_3 < VAR_5)
 {
  if (VAR_3 < VAR_7->super.bbox.y0) VAR_7->super.bbox.y0 = VAR_3;
  if (VAR_5 > VAR_7->super.bbox.y1) VAR_7->super.bbox.y1 = VAR_5;
 }
 else
 {
  if (VAR_5 < VAR_7->super.bbox.y0) VAR_7->super.bbox.y0 = VAR_5;
  if (VAR_3 > VAR_7->super.bbox.y1) VAR_7->super.bbox.y1 = VAR_3;
 }

 FUNC_1(VAR_0, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_6);
}
