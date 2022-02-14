
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_io_range {int dummy; } ;
struct kvm_io_device {int dummy; } ;
struct kvm_io_bus {int dev_count; struct kvm_io_bus* range; struct kvm_io_device* dev; } ;
struct kvm {int srcu; int * buses; } ;
typedef enum kvm_bus { ____Placeholder_kvm_bus } kvm_bus ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_io_bus*) ;
 struct kvm_io_bus* FUNC_1 (int ,int ) ;
 struct kvm_io_bus* FUNC_2 (struct kvm*,int) ;
 int FUNC_3 (struct kvm_io_bus*,struct kvm_io_bus*,int) ;
 int FUNC_4 (char*) ;
 int VAR_1 ;
 int FUNC_5 (int ,struct kvm_io_bus*) ;
 int FUNC_6 (struct kvm_io_bus*,int ,int) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct kvm *VAR_2, enum kvm_bus VAR_3,
          struct kvm_io_device *VAR_4)
{
 int VAR_5;
 struct kvm_io_bus *VAR_6, *VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_7)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_7->dev_count; VAR_5++)
  if (VAR_7->range[VAR_5].dev == VAR_4) {
   break;
  }

 if (VAR_5 == VAR_7->dev_count)
  return;

 VAR_6 = FUNC_1(FUNC_6(VAR_7, VAR_1, VAR_7->dev_count - 1),
     VAR_0);
 if (!VAR_6) {
  FUNC_4("kvm: failed to shrink bus, removing it completely\n");
  goto broken;
 }

 FUNC_3(VAR_6, VAR_7, sizeof(*VAR_7) + VAR_5 * sizeof(struct kvm_io_range));
 VAR_6->dev_count--;
 FUNC_3(VAR_6->range + VAR_5, VAR_7->range + VAR_5 + 1,
        (VAR_6->dev_count - VAR_5) * sizeof(struct kvm_io_range));

broken:
 FUNC_5(VAR_2->buses[VAR_3], VAR_6);
 FUNC_7(&VAR_2->srcu);
 FUNC_0(VAR_7);
 return;
}
