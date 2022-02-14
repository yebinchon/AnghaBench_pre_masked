
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int y1; int x1; int y0; int x0; } ;
struct TYPE_9__ {TYPE_1__ clip; } ;
typedef TYPE_2__ fz_rasterizer ;
struct TYPE_10__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_3__ fz_irect ;
typedef int fz_context ;


 void* FUNC_0 (int ,int const) ;
 void* FUNC_1 (int ,int const) ;
 int FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (TYPE_2__ const*) ;

__attribute__((used)) static fz_irect FUNC_4(fz_context *VAR_0, const fz_rasterizer *VAR_1)
{
 fz_irect VAR_2;
 const int VAR_3 = FUNC_2(VAR_1);
 const int VAR_4 = FUNC_3(VAR_1);

 VAR_2.x0 = FUNC_0(VAR_1->clip.x0, VAR_3);
 VAR_2.y0 = FUNC_0(VAR_1->clip.y0, VAR_4);
 VAR_2.x1 = FUNC_1(VAR_1->clip.x1, VAR_3);
 VAR_2.y1 = FUNC_1(VAR_1->clip.y1, VAR_4);

 return VAR_2;
}
