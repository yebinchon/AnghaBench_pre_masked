
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its_abi {int dte_esz; int cte_esz; } ;
struct vgic_its {int baser_coll_table; int baser_device_table; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct vgic_its_abi* FUNC_1 (struct vgic_its*) ;

__attribute__((used)) static int FUNC_2(struct vgic_its *VAR_2)
{
 const struct vgic_its_abi *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 VAR_2->baser_coll_table &= ~VAR_0;
 VAR_2->baser_device_table &= ~VAR_0;

 VAR_2->baser_coll_table |= (FUNC_0(VAR_3->cte_esz, 5)
     << VAR_1);

 VAR_2->baser_device_table |= (FUNC_0(VAR_3->dte_esz, 5)
     << VAR_1);
 return 0;
}
