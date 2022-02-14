
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct vgic_its {scalar_t__ creadr; scalar_t__ cwriter; int cmd_lock; scalar_t__ enabled; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static unsigned long FUNC_2(struct kvm *VAR_2,
          struct vgic_its *VAR_3,
          gpa_t VAR_4, unsigned int VAR_5)
{
 u32 VAR_6 = 0;

 FUNC_0(&VAR_3->cmd_lock);
 if (VAR_3->creadr == VAR_3->cwriter)
  VAR_6 |= VAR_1;
 if (VAR_3->enabled)
  VAR_6 |= VAR_0;
 FUNC_1(&VAR_3->cmd_lock);

 return VAR_6;
}
