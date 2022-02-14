
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct vgic_its {TYPE_1__* dev; } ;
struct its_device {int dummy; } ;
typedef int gpa_t ;
struct TYPE_2__ {int kvm; } ;


 scalar_t__ FUNC_0 (struct its_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct its_device*) ;
 int FUNC_2 (int) ;
 struct its_device* FUNC_3 (struct vgic_its*,int,int,int) ;
 int FUNC_4 (int ,struct its_device*) ;
 int FUNC_5 (struct vgic_its*,struct its_device*) ;

__attribute__((used)) static int FUNC_6(struct vgic_its *VAR_6, u32 VAR_7,
    void *VAR_8, void *VAR_9)
{
 struct its_device *VAR_10;
 gpa_t VAR_11;
 u8 VAR_12;
 u64 VAR_13 = *(u64 *)VAR_8;
 bool VAR_14;
 u32 VAR_15;
 int VAR_16;

 VAR_13 = FUNC_2(VAR_13);

 VAR_14 = VAR_13 >> VAR_5;
 VAR_12 = (VAR_13 & VAR_4) + 1;
 VAR_11 = ((VAR_13 & VAR_0)
   >> VAR_1) << 8;

 if (!VAR_14)
  return 1;


 VAR_15 = (VAR_13 & VAR_2) >> VAR_3;

 VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_11, VAR_12);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_16 = FUNC_5(VAR_6, VAR_10);
 if (VAR_16) {
  FUNC_4(VAR_6->dev->kvm, VAR_10);
  return VAR_16;
 }

 return VAR_15;
}
