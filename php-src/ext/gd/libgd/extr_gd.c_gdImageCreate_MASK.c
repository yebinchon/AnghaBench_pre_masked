
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* gdImagePtr ;
struct TYPE_4__ {unsigned char** pixels; int sx; int sy; int transparent; int thick; int* open; int cx2; int cy2; int interpolation_id; int * interpolation; void* res_y; void* res_x; scalar_t__ cy1; scalar_t__ cx1; scalar_t__ tpixels; scalar_t__ trueColor; scalar_t__* blue; scalar_t__* green; scalar_t__* red; scalar_t__ AA; scalar_t__ interlace; scalar_t__ colorsTotal; scalar_t__ style; scalar_t__ tile; scalar_t__ brush; scalar_t__ polyAllocated; scalar_t__ polyInts; } ;
typedef TYPE_1__ gdImage ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int,int) ;

gdImagePtr FUNC_3 (int VAR_3, int VAR_4)
{
 int VAR_5;
 gdImagePtr VAR_6;

 if (FUNC_2(VAR_3, VAR_4)) {
  return ((void*)0);
 }
 if (FUNC_2(sizeof(unsigned char *), VAR_4)) {
  return ((void*)0);
 }
 if (FUNC_2(sizeof(unsigned char), VAR_3)) {
  return ((void*)0);
 }

 VAR_6 = (gdImage *) FUNC_0(1, sizeof(gdImage));


 VAR_6->pixels = (unsigned char **) FUNC_1(sizeof(unsigned char *) * VAR_4);
 VAR_6->polyInts = 0;
 VAR_6->polyAllocated = 0;
 VAR_6->brush = 0;
 VAR_6->tile = 0;
 VAR_6->style = 0;
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {

  VAR_6->pixels[VAR_5] = (unsigned char *) FUNC_0(VAR_3, sizeof(unsigned char));
 }
 VAR_6->sx = VAR_3;
 VAR_6->sy = VAR_4;
 VAR_6->colorsTotal = 0;
 VAR_6->transparent = (-1);
 VAR_6->interlace = 0;
 VAR_6->thick = 1;
 VAR_6->AA = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_6->open[VAR_5] = 1;
  VAR_6->red[VAR_5] = 0;
  VAR_6->green[VAR_5] = 0;
  VAR_6->blue[VAR_5] = 0;
 }
 VAR_6->trueColor = 0;
 VAR_6->tpixels = 0;
 VAR_6->cx1 = 0;
 VAR_6->cy1 = 0;
 VAR_6->cx2 = VAR_6->sx - 1;
 VAR_6->cy2 = VAR_6->sy - 1;
 VAR_6->res_x = VAR_1;
 VAR_6->res_y = VAR_1;
 VAR_6->interpolation = ((void*)0);
 VAR_6->interpolation_id = VAR_0;
 return VAR_6;
}
