
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_vcpu {int dummy; } ;
struct kvm_io_range {int len; int addr; } ;
struct kvm_io_bus {int dev_count; TYPE_1__* range; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kvm_io_range*,TYPE_1__*) ;
 int FUNC_1 (struct kvm_io_bus*,int ,int ) ;
 int FUNC_2 (struct kvm_vcpu*,int ,int ,int ,void*) ;

__attribute__((used)) static int FUNC_3(struct kvm_vcpu *VAR_1, struct kvm_io_bus *VAR_2,
        struct kvm_io_range *VAR_3, void *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3->addr, VAR_3->len);
 if (VAR_5 < 0)
  return -VAR_0;

 while (VAR_5 < VAR_2->dev_count &&
  FUNC_0(VAR_3, &VAR_2->range[VAR_5]) == 0) {
  if (!FUNC_2(VAR_1, VAR_2->range[VAR_5].dev, VAR_3->addr,
           VAR_3->len, VAR_4))
   return VAR_5;
  VAR_5++;
 }

 return -VAR_0;
}
