
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int default_cs; } ;
typedef TYPE_1__ fz_draw_device ;
typedef int fz_device ;
typedef int fz_default_colorspaces ;
typedef int fz_context ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_device *VAR_1, fz_default_colorspaces *VAR_2)
{
 fz_draw_device *VAR_3 = (fz_draw_device*)VAR_1;
 FUNC_0(VAR_0, VAR_3->default_cs);
 VAR_3->default_cs = FUNC_1(VAR_0, VAR_2);
}
