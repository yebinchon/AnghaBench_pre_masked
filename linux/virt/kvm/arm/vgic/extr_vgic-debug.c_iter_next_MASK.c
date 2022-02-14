
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_state_iter {scalar_t__ dist_id; scalar_t__ intid; scalar_t__ vcpu_id; scalar_t__ nr_cpus; scalar_t__ nr_spis; size_t lpi_idx; size_t nr_lpis; scalar_t__* lpi_array; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct vgic_state_iter *VAR_1)
{
 if (VAR_1->dist_id == 0) {
  VAR_1->dist_id++;
  return;
 }

 VAR_1->intid++;
 if (VAR_1->intid == VAR_0 &&
     ++VAR_1->vcpu_id < VAR_1->nr_cpus)
  VAR_1->intid = 0;

 if (VAR_1->intid >= (VAR_1->nr_spis + VAR_0)) {
  if (VAR_1->lpi_idx < VAR_1->nr_lpis)
   VAR_1->intid = VAR_1->lpi_array[VAR_1->lpi_idx];
  VAR_1->lpi_idx++;
 }
}
