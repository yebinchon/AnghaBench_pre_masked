
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vgic_its {TYPE_1__* dev; } ;
typedef int phys_addr_t ;
typedef int indirect_ptr ;
typedef int gpa_t ;
typedef int gfn_t ;
struct TYPE_5__ {int srcu; } ;
struct TYPE_4__ {TYPE_2__* kvm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (TYPE_2__*,int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int,int*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static bool FUNC_11(struct vgic_its *VAR_4, u64 VAR_5, u32 VAR_6,
         gpa_t *VAR_7)
{
 int VAR_8 = FUNC_4(VAR_5) * VAR_2;
 u64 VAR_9, VAR_10 = FUNC_5(VAR_5);
 phys_addr_t VAR_11 = FUNC_2(VAR_5);
 int VAR_12 = FUNC_3(VAR_5);
 int VAR_13, VAR_14;
 gfn_t VAR_15;
 bool VAR_16;

 switch (VAR_10) {
 case 128:
  if (VAR_6 >= FUNC_0(VAR_3))
   return 0;
  break;
 case 129:

  if (VAR_6 >= FUNC_0(16))
   return 0;
  break;
 default:
  return 0;
 }

 if (!(VAR_5 & VAR_0)) {
  phys_addr_t VAR_17;

  if (VAR_6 >= (VAR_8 / VAR_12))
   return 0;

  VAR_17 = VAR_11 + VAR_6 * VAR_12;
  VAR_15 = VAR_17 >> VAR_1;

  if (VAR_7)
   *VAR_7 = VAR_17;

  goto out;
 }


 VAR_13 = VAR_6 / (VAR_2 / VAR_12);
 if (VAR_13 >= (VAR_8 / sizeof(u64)))
  return 0;


 if (FUNC_7(VAR_4->dev->kvm,
      VAR_11 + VAR_13 * sizeof(VAR_9),
      &VAR_9, sizeof(VAR_9)))
  return 0;

 VAR_9 = FUNC_8(VAR_9);


 if (!(VAR_9 & FUNC_0(63)))
  return 0;


 VAR_9 &= FUNC_1(51, 16);


 VAR_13 = VAR_6 % (VAR_2 / VAR_12);
 VAR_9 += VAR_13 * VAR_12;
 VAR_15 = VAR_9 >> VAR_1;

 if (VAR_7)
  *VAR_7 = VAR_9;

out:
 VAR_14 = FUNC_9(&VAR_4->dev->kvm->srcu);
 VAR_16 = FUNC_6(VAR_4->dev->kvm, VAR_15);
 FUNC_10(&VAR_4->dev->kvm->srcu, VAR_14);
 return VAR_16;
}
