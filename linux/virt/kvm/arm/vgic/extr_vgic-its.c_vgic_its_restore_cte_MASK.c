
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vgic_its {TYPE_1__* dev; } ;
struct kvm {int online_vcpus; } ;
struct its_collection {scalar_t__ target_addr; } ;
typedef int gpa_t ;
struct TYPE_2__ {struct kvm* kvm; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 struct its_collection* FUNC_2 (struct vgic_its*,scalar_t__) ;
 int FUNC_3 (struct kvm*,int ,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct vgic_its*,struct its_collection**,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct vgic_its *VAR_5, gpa_t VAR_6, int VAR_7)
{
 struct its_collection *VAR_8;
 struct kvm *VAR_9 = VAR_5->dev->kvm;
 u32 VAR_10, VAR_11;
 u64 VAR_12;
 int VAR_13;

 FUNC_0(VAR_7 > sizeof(VAR_12));
 VAR_13 = FUNC_3(VAR_9, VAR_6, &VAR_12, VAR_7);
 if (VAR_13)
  return VAR_13;
 VAR_12 = FUNC_4(VAR_12);
 if (!(VAR_12 & VAR_4))
  return 0;

 VAR_10 = (u32)(VAR_12 >> VAR_3);
 VAR_11 = VAR_12 & VAR_2;

 if (VAR_10 >= FUNC_1(&VAR_9->online_vcpus))
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_5, VAR_11);
 if (VAR_8)
  return -VAR_0;
 VAR_13 = FUNC_5(VAR_5, &VAR_8, VAR_11);
 if (VAR_13)
  return VAR_13;
 VAR_8->target_addr = VAR_10;
 return 1;
}
