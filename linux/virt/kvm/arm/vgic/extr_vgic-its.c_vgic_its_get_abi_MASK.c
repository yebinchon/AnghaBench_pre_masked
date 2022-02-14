
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its_abi {int dummy; } ;
struct vgic_its {size_t abi_rev; } ;


 struct vgic_its_abi const* VAR_0 ;

inline const struct vgic_its_abi *FUNC_0(struct vgic_its *VAR_1)
{
 return &VAR_0[VAR_1->abi_rev];
}
