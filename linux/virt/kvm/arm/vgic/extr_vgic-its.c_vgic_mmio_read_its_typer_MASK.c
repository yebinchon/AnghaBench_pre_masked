
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_its_abi {int ite_esz; } ;
struct vgic_its {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_1 (int,int,unsigned int) ;
 struct vgic_its_abi* FUNC_2 (struct vgic_its*) ;

__attribute__((used)) static unsigned long FUNC_3(struct kvm *VAR_6,
           struct vgic_its *VAR_7,
           gpa_t VAR_8, unsigned int VAR_9)
{
 const struct vgic_its_abi *VAR_10 = FUNC_2(VAR_7);
 u64 VAR_11 = VAR_3;
 VAR_11 |= FUNC_0(VAR_4, 5) << VAR_0;
 VAR_11 |= FUNC_0(VAR_5, 5) << VAR_1;
 VAR_11 |= FUNC_0(VAR_10->ite_esz, 4) << VAR_2;

 return FUNC_1(VAR_11, VAR_8 & 7, VAR_9);
}
