
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vgic_state_iter {int nr_cpus; scalar_t__ nr_lpis; int lpi_array; int nr_spis; } ;
struct TYPE_3__ {scalar_t__ vgic_model; int nr_spis; } ;
struct TYPE_4__ {TYPE_1__ vgic; } ;
struct kvm {TYPE_2__ arch; int online_vcpus; } ;
typedef int loff_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct vgic_state_iter*) ;
 int FUNC_2 (struct vgic_state_iter*,int ,int) ;
 scalar_t__ FUNC_3 (struct kvm*,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_1, struct vgic_state_iter *VAR_2,
        loff_t VAR_3)
{
 int VAR_4 = FUNC_0(&VAR_1->online_vcpus);

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->nr_cpus = VAR_4;
 VAR_2->nr_spis = VAR_1->arch.vgic.nr_spis;
 if (VAR_1->arch.vgic.vgic_model == VAR_0) {
  VAR_2->nr_lpis = FUNC_3(VAR_1, ((void*)0), &VAR_2->lpi_array);
  if (VAR_2->nr_lpis < 0)
   VAR_2->nr_lpis = 0;
 }


 while (VAR_3--)
  FUNC_1(VAR_2);
}
