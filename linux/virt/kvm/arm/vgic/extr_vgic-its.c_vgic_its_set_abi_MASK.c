
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vgic_its_abi {int (* commit ) (struct vgic_its*) ;} ;
struct vgic_its {int abi_rev; } ;


 int FUNC_0 (struct vgic_its*) ;
 struct vgic_its_abi* FUNC_1 (struct vgic_its*) ;

__attribute__((used)) static int FUNC_2(struct vgic_its *VAR_0, u32 VAR_1)
{
 const struct vgic_its_abi *VAR_2;

 VAR_0->abi_rev = VAR_1;
 VAR_2 = FUNC_1(VAR_0);
 return VAR_2->commit(VAR_0);
}
