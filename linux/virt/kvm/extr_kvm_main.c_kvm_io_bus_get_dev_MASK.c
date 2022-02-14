
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kvm_io_device {int dummy; } ;
struct kvm_io_bus {TYPE_1__* range; } ;
struct kvm {int srcu; int * buses; } ;
typedef int gpa_t ;
typedef enum kvm_bus { ____Placeholder_kvm_bus } kvm_bus ;
struct TYPE_2__ {struct kvm_io_device* dev; } ;


 int FUNC_0 (struct kvm_io_bus*,int ,int) ;
 struct kvm_io_bus* FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

struct kvm_io_device *FUNC_4(struct kvm *VAR_0, enum kvm_bus VAR_1,
      gpa_t VAR_2)
{
 struct kvm_io_bus *VAR_3;
 int VAR_4, VAR_5;
 struct kvm_io_device *VAR_6 = ((void*)0);

 VAR_5 = FUNC_2(&VAR_0->srcu);

 VAR_3 = FUNC_1(VAR_0->buses[VAR_1], &VAR_0->srcu);
 if (!VAR_3)
  goto out_unlock;

 VAR_4 = FUNC_0(VAR_3, VAR_2, 1);
 if (VAR_4 < 0)
  goto out_unlock;

 VAR_6 = VAR_3->range[VAR_4].dev;

out_unlock:
 FUNC_3(&VAR_0->srcu, VAR_5);

 return VAR_6;
}
