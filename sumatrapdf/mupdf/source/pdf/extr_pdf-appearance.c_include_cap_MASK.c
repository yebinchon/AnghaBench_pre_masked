
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* y1; void* x1; void* y0; void* x0; } ;
typedef TYPE_1__ fz_rect ;


 void* FUNC_0 (void*,float) ;
 void* FUNC_1 (void*,float) ;

__attribute__((used)) static void FUNC_2(fz_rect *VAR_0, float VAR_1, float VAR_2, float VAR_3)
{
 VAR_0->x0 = FUNC_1(VAR_0->x0, VAR_1-VAR_3);
 VAR_0->y0 = FUNC_1(VAR_0->y0, VAR_2-VAR_3);
 VAR_0->x1 = FUNC_0(VAR_0->x1, VAR_1+VAR_3);
 VAR_0->y1 = FUNC_0(VAR_0->y1, VAR_2+VAR_3);
}
