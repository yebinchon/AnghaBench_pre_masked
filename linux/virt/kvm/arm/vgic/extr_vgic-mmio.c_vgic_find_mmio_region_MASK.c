
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_register_region {int dummy; } ;
typedef int regions ;


 struct vgic_register_region const* FUNC_0 (void*,struct vgic_register_region const*,int,int,int ) ;
 int VAR_0 ;

const struct vgic_register_region *
FUNC_1(const struct vgic_register_region *VAR_1,
        int VAR_2, unsigned int VAR_3)
{
 return FUNC_0((void *)(uintptr_t)VAR_3, VAR_1, VAR_2,
         sizeof(VAR_1[0]), VAR_0);
}
