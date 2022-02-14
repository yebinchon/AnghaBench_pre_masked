
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int (* reset ) (int *,TYPE_4__*) ;} ;
struct TYPE_13__ {void* y1; void* x1; void* y0; void* x0; } ;
struct TYPE_12__ {int x0; int y0; int x1; int y1; } ;
struct TYPE_15__ {TYPE_3__ fns; TYPE_2__ bbox; TYPE_1__ clip; } ;
typedef TYPE_4__ fz_rasterizer ;
struct TYPE_16__ {int const x0; int const x1; int const y0; int const y1; } ;
typedef TYPE_5__ fz_irect ;
typedef int fz_context ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,TYPE_4__*) ;

int FUNC_4(fz_context *VAR_2, fz_rasterizer *VAR_3, fz_irect VAR_4)
{
 const int VAR_5 = FUNC_1(VAR_3);
 const int VAR_6 = FUNC_2(VAR_3);

 if (FUNC_0(VAR_4))
 {
  VAR_3->clip.x0 = VAR_3->clip.y0 = VAR_1;
  VAR_3->clip.x1 = VAR_3->clip.y1 = VAR_0;
 }
 else {
  VAR_3->clip.x0 = VAR_4.x0 * VAR_5;
  VAR_3->clip.x1 = VAR_4.x1 * VAR_5;
  VAR_3->clip.y0 = VAR_4.y0 * VAR_6;
  VAR_3->clip.y1 = VAR_4.y1 * VAR_6;
 }

 VAR_3->bbox.x0 = VAR_3->bbox.y0 = VAR_0;
 VAR_3->bbox.x1 = VAR_3->bbox.y1 = VAR_1;
 if (VAR_3->fns.reset)
  return VAR_3->fns.reset(VAR_2, VAR_3);
 return 0;
}
