
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d9_texture {int flags; int wined3d_srv; } ;


 int VAR_0 ;
 int FUNC_0 (struct d3d9_texture*) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct d3d9_texture *VAR_1)
{
    if (!(VAR_1->flags & VAR_0))
        return;
    FUNC_0(VAR_1);
    FUNC_1(VAR_1->wined3d_srv);
    VAR_1->flags &= ~VAR_0;
}
