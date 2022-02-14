
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vgic_its {int cmd_lock; scalar_t__ cwriter; int cbaser; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (scalar_t__,int,unsigned int,unsigned long) ;
 int FUNC_5 (struct kvm*,struct vgic_its*) ;

__attribute__((used)) static void FUNC_6(struct kvm *VAR_0, struct vgic_its *VAR_1,
     gpa_t VAR_2, unsigned int VAR_3,
     unsigned long VAR_4)
{
 u64 VAR_5;

 if (!VAR_1)
  return;

 FUNC_2(&VAR_1->cmd_lock);

 VAR_5 = FUNC_4(VAR_1->cwriter, VAR_2 & 7, VAR_3, VAR_4);
 VAR_5 = FUNC_1(VAR_5);
 if (VAR_5 >= FUNC_0(VAR_1->cbaser)) {
  FUNC_3(&VAR_1->cmd_lock);
  return;
 }
 VAR_1->cwriter = VAR_5;

 FUNC_5(VAR_0, VAR_1);

 FUNC_3(&VAR_1->cmd_lock);
}
