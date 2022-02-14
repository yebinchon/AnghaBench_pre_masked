
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {float x0; float y0; float x1; float y1; } ;
typedef TYPE_2__ fz_rect ;
struct TYPE_8__ {scalar_t__ y1; scalar_t__ x1; scalar_t__ y0; scalar_t__ x0; } ;
struct TYPE_10__ {TYPE_1__ clip; } ;
typedef TYPE_3__ fz_rasterizer ;
typedef int fz_context ;


 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (TYPE_3__ const*) ;

fz_rect FUNC_2(fz_context *VAR_0, const fz_rasterizer *VAR_1)
{
 fz_rect VAR_2;
 const int VAR_3 = FUNC_0(VAR_1);
 const int VAR_4 = FUNC_1(VAR_1);

 VAR_2.x0 = ((float)VAR_1->clip.x0) / VAR_3;
 VAR_2.y0 = ((float)VAR_1->clip.y0) / VAR_4;
 VAR_2.x1 = ((float)VAR_1->clip.x1) / VAR_3;
 VAR_2.y1 = ((float)VAR_1->clip.y1) / VAR_4;

 return VAR_2;
}
