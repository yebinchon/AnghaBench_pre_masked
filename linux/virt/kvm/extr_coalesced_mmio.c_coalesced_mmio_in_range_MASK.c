
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ addr; scalar_t__ size; } ;
struct kvm_coalesced_mmio_dev {TYPE_1__ zone; } ;
typedef scalar_t__ gpa_t ;



__attribute__((used)) static int FUNC_0(struct kvm_coalesced_mmio_dev *VAR_0,
       gpa_t VAR_1, int VAR_2)
{




 if (VAR_2 < 0)
  return 0;
 if (VAR_1 + VAR_2 < VAR_1)
  return 0;
 if (VAR_1 < VAR_0->zone.addr)
  return 0;
 if (VAR_1 + VAR_2 > VAR_0->zone.addr + VAR_0->zone.size)
  return 0;
 return 1;
}
