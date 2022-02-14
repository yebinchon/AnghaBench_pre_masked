
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vgic_its {int cmd_lock; scalar_t__ creadr; int cbaser; scalar_t__ enabled; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_2,
           struct vgic_its *VAR_3,
           gpa_t VAR_4, unsigned int VAR_5,
           unsigned long VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;

 FUNC_2(&VAR_3->cmd_lock);

 if (VAR_3->enabled) {
  VAR_8 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_1(VAR_6);
 if (VAR_7 >= FUNC_0(VAR_3->cbaser)) {
  VAR_8 = -VAR_1;
  goto out;
 }

 VAR_3->creadr = VAR_7;
out:
 FUNC_3(&VAR_3->cmd_lock);
 return VAR_8;
}
