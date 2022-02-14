
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_rasterizer ;
struct TYPE_6__ {int y1; int y0; } ;
struct TYPE_5__ {float x0; float x1; float y0; float y1; } ;
struct TYPE_7__ {TYPE_2__ clip; TYPE_1__ bbox; } ;
struct TYPE_8__ {int n; int * index; TYPE_3__ super; } ;
typedef TYPE_4__ fz_edgebuffer ;
typedef int fz_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(fz_context *VAR_2, fz_rasterizer *VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7, int VAR_8)
{
 fz_edgebuffer *VAR_9 = (fz_edgebuffer *)VAR_3;
 int VAR_10, VAR_11;
 int VAR_12 = VAR_9->super.clip.y1 - VAR_9->super.clip.y0;

 if (VAR_5 == VAR_7)
  return;

 if (VAR_4 < VAR_6)
 {
  if (VAR_4 < VAR_9->super.bbox.x0) VAR_9->super.bbox.x0 = VAR_4;
  if (VAR_6 > VAR_9->super.bbox.x1) VAR_9->super.bbox.x1 = VAR_6;
 }
 else
 {
  if (VAR_4 > VAR_9->super.bbox.x1) VAR_9->super.bbox.x1 = VAR_4;
  if (VAR_6 < VAR_9->super.bbox.x0) VAR_9->super.bbox.x0 = VAR_6;
 }
 if (VAR_5 < VAR_7)
 {
  if (VAR_5 < VAR_9->super.bbox.y0) VAR_9->super.bbox.y0 = VAR_5;
  if (VAR_7 > VAR_9->super.bbox.y1) VAR_9->super.bbox.y1 = VAR_7;
 }
 else
 {
  if (VAR_7 < VAR_9->super.bbox.y0) VAR_9->super.bbox.y0 = VAR_7;
  if (VAR_5 > VAR_9->super.bbox.y1) VAR_9->super.bbox.y1 = VAR_5;
 }







 VAR_10 = (int)VAR_5;
 VAR_11 = (int)VAR_7;

 if (VAR_10 > VAR_11)
 {
  int VAR_13;
  VAR_13 = VAR_10; VAR_10 = VAR_11; VAR_11 = VAR_13;
 }
 VAR_11++;
 VAR_10--;

 VAR_11 -= VAR_9->super.clip.y0;
 if (VAR_11 < 0)
  return;
 VAR_10 -= VAR_9->super.clip.y0;
 if (VAR_10 < 0)
  VAR_10 = 0;
 else if (VAR_10 > VAR_12)
  return;
 if (VAR_11 > VAR_12-1)
  VAR_11 = VAR_12-1;




 VAR_9->index[VAR_10] += VAR_9->n;
 VAR_9->index[VAR_11+1] -= VAR_9->n;
}
