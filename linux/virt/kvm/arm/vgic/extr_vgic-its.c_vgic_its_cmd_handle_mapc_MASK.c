
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct vgic_its {int dummy; } ;
struct kvm {int online_vcpus; } ;
struct its_collection {scalar_t__ target_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct its_collection* FUNC_1 (struct vgic_its*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct kvm*,struct vgic_its*,struct its_collection*) ;
 int FUNC_6 (struct vgic_its*,struct its_collection**,int ) ;
 int FUNC_7 (struct vgic_its*,int ) ;
 int FUNC_8 (struct kvm*) ;

__attribute__((used)) static int FUNC_9(struct kvm *VAR_1, struct vgic_its *VAR_2,
        u64 *VAR_3)
{
 u16 VAR_4;
 u32 VAR_5;
 struct its_collection *VAR_6;
 bool VAR_7;

 VAR_7 = FUNC_4(VAR_3);
 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_3(VAR_3);

 if (VAR_5 >= FUNC_0(&VAR_1->online_vcpus))
  return VAR_0;

 if (!VAR_7) {
  FUNC_7(VAR_2, VAR_4);
  FUNC_8(VAR_1);
 } else {
  VAR_6 = FUNC_1(VAR_2, VAR_4);

  if (!VAR_6) {
   int VAR_8;

   VAR_8 = FUNC_6(VAR_2, &VAR_6,
       VAR_4);
   if (VAR_8)
    return VAR_8;
   VAR_6->target_addr = VAR_5;
  } else {
   VAR_6->target_addr = VAR_5;
   FUNC_5(VAR_1, VAR_2, VAR_6);
  }
 }

 return 0;
}
