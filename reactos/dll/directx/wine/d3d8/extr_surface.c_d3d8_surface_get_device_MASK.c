
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct d3d8_surface {int * parent_device; TYPE_1__* texture; } ;
struct d3d8_device {int dummy; } ;
struct TYPE_2__ {int * parent_device; } ;
typedef int IDirect3DDevice8 ;


 struct d3d8_device* FUNC_0 (int *) ;

struct d3d8_device *FUNC_1(const struct d3d8_surface *VAR_0)
{
    IDirect3DDevice8 *VAR_1;
    VAR_1 = VAR_0->texture ? VAR_0->texture->parent_device : VAR_0->parent_device;
    return FUNC_0(VAR_1);
}
