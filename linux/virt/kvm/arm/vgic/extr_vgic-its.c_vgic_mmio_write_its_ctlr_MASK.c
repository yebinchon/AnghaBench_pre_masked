
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its {int enabled; int baser_device_table; int baser_coll_table; int cbaser; int cmd_lock; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*) ;
 int FUNC_3 (struct kvm*,struct vgic_its*) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_3, struct vgic_its *VAR_4,
         gpa_t VAR_5, unsigned int VAR_6,
         unsigned long VAR_7)
{
 FUNC_0(&VAR_4->cmd_lock);





 if (!VAR_4->enabled && (VAR_7 & VAR_2) &&
  (!(VAR_4->baser_device_table & VAR_0) ||
   !(VAR_4->baser_coll_table & VAR_0) ||
   !(VAR_4->cbaser & VAR_1)))
  goto out;

 VAR_4->enabled = !!(VAR_7 & VAR_2);
 if (!VAR_4->enabled)
  FUNC_2(VAR_3);





 FUNC_3(VAR_3, VAR_4);

out:
 FUNC_1(&VAR_4->cmd_lock);
}
