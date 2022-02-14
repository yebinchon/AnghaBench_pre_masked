
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
typedef TYPE_1__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_context ;



__attribute__((used)) static void
FUNC_0(fz_context *VAR_0, fz_device *VAR_1, int VAR_2, int VAR_3)
{
 fz_draw_device *VAR_4 = (fz_draw_device*)VAR_1;
 VAR_4->flags = (VAR_4->flags | VAR_2 ) & ~VAR_3;
}
