
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct vgic_its {int baser_device_table; } ;
struct kvm {int dummy; } ;
struct its_device {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct its_device*) ;
 scalar_t__ VAR_2 ;
 struct its_device* FUNC_1 (struct vgic_its*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct its_device* FUNC_6 (struct vgic_its*,int ,int ,scalar_t__) ;
 int FUNC_7 (struct vgic_its*,int ,int ,int *) ;
 int FUNC_8 (struct kvm*,struct its_device*) ;

__attribute__((used)) static int FUNC_9(struct kvm *VAR_3, struct vgic_its *VAR_4,
        u64 *VAR_5)
{
 u32 VAR_6 = FUNC_2(VAR_5);
 bool VAR_7 = FUNC_5(VAR_5);
 u8 VAR_8 = FUNC_4(VAR_5);
 gpa_t VAR_9 = FUNC_3(VAR_5);
 struct its_device *VAR_10;

 if (!FUNC_7(VAR_4, VAR_4->baser_device_table, VAR_6, ((void*)0)))
  return VAR_0;

 if (VAR_7 && VAR_8 > VAR_2)
  return VAR_1;

 VAR_10 = FUNC_1(VAR_4, VAR_6);






 if (VAR_10)
  FUNC_8(VAR_3, VAR_10);





 if (!VAR_7)
  return 0;

 VAR_10 = FUNC_6(VAR_4, VAR_6, VAR_9,
           VAR_8);

 return FUNC_0(VAR_10);
}
