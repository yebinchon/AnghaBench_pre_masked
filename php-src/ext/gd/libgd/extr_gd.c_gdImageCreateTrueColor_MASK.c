
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_5__ {int** tpixels; int sx; int sy; int transparent; int trueColor; int alphaBlendingFlag; int thick; int cx2; int cy2; int interpolation_id; int * interpolation; void* res_y; void* res_x; scalar_t__ cy1; scalar_t__ cx1; scalar_t__ AA; scalar_t__ saveAlphaFlag; scalar_t__ interlace; scalar_t__ style; scalar_t__ tile; scalar_t__ brush; scalar_t__ polyAllocated; scalar_t__ polyInts; } ;
typedef TYPE_1__ gdImage ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_3 (int,int) ;

gdImagePtr FUNC_4 (int VAR_2, int VAR_3)
{
 int VAR_4;
 gdImagePtr VAR_5;

 if (FUNC_3(VAR_2, VAR_3)) {
  return ((void*)0);
 }
 if (FUNC_3(sizeof(int *), VAR_3)) {
  return ((void*)0);
 }
 if (FUNC_3(sizeof(int), VAR_2)) {
  return ((void*)0);
 }

 VAR_5 = (gdImage *) FUNC_1(sizeof(gdImage));
 FUNC_2(VAR_5, 0, sizeof(gdImage));
 VAR_5->tpixels = (int **) FUNC_1(sizeof(int *) * VAR_3);
 VAR_5->polyInts = 0;
 VAR_5->polyAllocated = 0;
 VAR_5->brush = 0;
 VAR_5->tile = 0;
 VAR_5->style = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5->tpixels[VAR_4] = (int *) FUNC_0(VAR_2, sizeof(int));
 }
 VAR_5->sx = VAR_2;
 VAR_5->sy = VAR_3;
 VAR_5->transparent = (-1);
 VAR_5->interlace = 0;
 VAR_5->trueColor = 1;






 VAR_5->saveAlphaFlag = 0;
 VAR_5->alphaBlendingFlag = 1;
 VAR_5->thick = 1;
 VAR_5->AA = 0;
 VAR_5->cx1 = 0;
 VAR_5->cy1 = 0;
 VAR_5->cx2 = VAR_5->sx - 1;
 VAR_5->cy2 = VAR_5->sy - 1;
 VAR_5->res_x = VAR_1;
 VAR_5->res_y = VAR_1;
 VAR_5->interpolation = ((void*)0);
 VAR_5->interpolation_id = VAR_0;
 return VAR_5;
}
