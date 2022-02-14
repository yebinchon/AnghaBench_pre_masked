
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d9_texture {int usage; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct d3d9_texture *VAR_2)
{
    if (VAR_2->usage & VAR_1)
        VAR_2->flags |= VAR_0;
}
