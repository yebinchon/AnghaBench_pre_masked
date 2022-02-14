
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_its_abi {int dte_esz; int cte_esz; } ;
struct vgic_its {int baser_device_table; int baser_coll_table; int its_lock; scalar_t__ enabled; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int,unsigned int,unsigned long) ;
 int FUNC_4 (struct kvm*,struct vgic_its*) ;
 int FUNC_5 (struct kvm*,struct vgic_its*) ;
 struct vgic_its_abi* FUNC_6 (struct vgic_its*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct kvm *VAR_5,
          struct vgic_its *VAR_6,
          gpa_t VAR_7, unsigned int VAR_8,
          unsigned long VAR_9)
{
 const struct vgic_its_abi *VAR_10 = FUNC_6(VAR_6);
 u64 VAR_11, VAR_12;
 u64 VAR_13, *VAR_14, VAR_15 = 0;


 if (VAR_6->enabled)
  return;

 switch (FUNC_0(VAR_7)) {
 case 0:
  VAR_14 = &VAR_6->baser_device_table;
  VAR_11 = VAR_10->dte_esz;
  VAR_12 = 128;
  break;
 case 1:
  VAR_14 = &VAR_6->baser_coll_table;
  VAR_11 = VAR_10->cte_esz;
  VAR_12 = 129;
  VAR_15 = VAR_1;
  break;
 default:
  return;
 }

 VAR_13 = FUNC_3(*VAR_14, VAR_7 & 7, VAR_8, VAR_9);
 VAR_13 &= ~VAR_2;
 VAR_13 &= ~VAR_15;

 VAR_13 |= (VAR_11 - 1) << VAR_0;
 VAR_13 |= VAR_12 << VAR_3;
 VAR_13 = FUNC_7(VAR_13);

 *VAR_14 = VAR_13;

 if (!(VAR_13 & VAR_4)) {

  FUNC_1(&VAR_6->its_lock);
  switch (VAR_12) {
  case 128:
   FUNC_5(VAR_5, VAR_6);
   break;
  case 129:
   FUNC_4(VAR_5, VAR_6);
   break;
  }
  FUNC_2(&VAR_6->its_lock);
 }
}
