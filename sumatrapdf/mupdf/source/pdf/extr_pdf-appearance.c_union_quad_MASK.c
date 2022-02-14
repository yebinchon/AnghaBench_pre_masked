
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_1__ fz_rect ;
struct TYPE_9__ {void* x; void* y; } ;
typedef TYPE_2__ fz_point ;


 int FUNC_0 (TYPE_1__,float) ;
 void* FUNC_1 (void*,void*) ;
 void* FUNC_2 (void*,void*) ;
 TYPE_1__ FUNC_3 (TYPE_1__,int ) ;

__attribute__((used)) static void
FUNC_4(fz_rect *VAR_0, const fz_point VAR_1[4], float VAR_2)
{
 fz_rect VAR_3;
 VAR_3.x0 = FUNC_2(FUNC_2(VAR_1[0].x, VAR_1[1].x), FUNC_2(VAR_1[2].x, VAR_1[3].x));
 VAR_3.y0 = FUNC_2(FUNC_2(VAR_1[0].y, VAR_1[1].y), FUNC_2(VAR_1[2].y, VAR_1[3].y));
 VAR_3.x1 = FUNC_1(FUNC_1(VAR_1[0].x, VAR_1[1].x), FUNC_1(VAR_1[2].x, VAR_1[3].x));
 VAR_3.y1 = FUNC_1(FUNC_1(VAR_1[0].y, VAR_1[1].y), FUNC_1(VAR_1[2].y, VAR_1[3].y));
 *VAR_0 = FUNC_3(*VAR_0, FUNC_0(VAR_3, VAR_2));
}
