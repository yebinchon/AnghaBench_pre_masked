
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_state_iter {scalar_t__ dist_id; scalar_t__ vcpu_id; scalar_t__ nr_cpus; scalar_t__ intid; scalar_t__ nr_spis; scalar_t__ lpi_idx; scalar_t__ nr_lpis; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct vgic_state_iter *VAR_1)
{
 return VAR_1->dist_id > 0 &&
  VAR_1->vcpu_id == VAR_1->nr_cpus &&
  VAR_1->intid >= (VAR_1->nr_spis + VAR_0) &&
  VAR_1->lpi_idx > VAR_1->nr_lpis;
}
