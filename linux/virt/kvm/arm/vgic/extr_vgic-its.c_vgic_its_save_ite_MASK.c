
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct vgic_its {TYPE_3__* dev; } ;
struct kvm {int dummy; } ;
struct its_ite {TYPE_2__* collection; TYPE_1__* irq; } ;
struct its_device {int itt_head; } ;
typedef int gpa_t ;
struct TYPE_6__ {struct kvm* kvm; } ;
struct TYPE_5__ {int collection_id; } ;
struct TYPE_4__ {scalar_t__ intid; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,struct its_ite*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct kvm*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct vgic_its *VAR_2, struct its_device *VAR_3,
         struct its_ite *VAR_4, gpa_t VAR_5, int VAR_6)
{
 struct kvm *VAR_7 = VAR_2->dev->kvm;
 u32 VAR_8;
 u64 VAR_9;

 VAR_8 = FUNC_0(&VAR_3->itt_head, VAR_4);
 VAR_9 = ((u64)VAR_8 << VAR_0) |
        ((u64)VAR_4->irq->intid << VAR_1) |
  VAR_4->collection->collection_id;
 VAR_9 = FUNC_1(VAR_9);
 return FUNC_2(VAR_7, VAR_5, &VAR_9, VAR_6);
}
