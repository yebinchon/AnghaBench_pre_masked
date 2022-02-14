
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ x1; scalar_t__ x0; scalar_t__ y1; scalar_t__ y0; } ;
struct TYPE_10__ {TYPE_1__ bbox; } ;
typedef TYPE_2__ fz_rasterizer ;
struct TYPE_11__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_3__ fz_irect ;
typedef int fz_context ;


 TYPE_3__ VAR_0 ;
 void* FUNC_0 (scalar_t__,int const) ;
 void* FUNC_1 (scalar_t__,int const) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*) ;

fz_irect
FUNC_4(fz_context *VAR_1, const fz_rasterizer *VAR_2)
{
 fz_irect VAR_3;
 const int VAR_4 = FUNC_2(VAR_2);
 const int VAR_5 = FUNC_3(VAR_2);

 if (VAR_2->bbox.x1 < VAR_2->bbox.x0 || VAR_2->bbox.y1 < VAR_2->bbox.y0)
 {
  VAR_3 = VAR_0;
 }
 else
 {
  VAR_3.x0 = FUNC_0(VAR_2->bbox.x0, VAR_4);
  VAR_3.y0 = FUNC_0(VAR_2->bbox.y0, VAR_5);
  VAR_3.x1 = FUNC_1(VAR_2->bbox.x1, VAR_4);
  VAR_3.y1 = FUNC_1(VAR_2->bbox.y1, VAR_5);
 }
 return VAR_3;
}
