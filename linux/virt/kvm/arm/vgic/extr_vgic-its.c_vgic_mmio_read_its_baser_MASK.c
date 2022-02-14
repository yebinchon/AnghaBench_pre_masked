
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_its {int baser_coll_table; int baser_device_table; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ,int,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_2(struct kvm *VAR_0,
           struct vgic_its *VAR_1,
           gpa_t VAR_2, unsigned int VAR_3)
{
 u64 VAR_4;

 switch (FUNC_0(VAR_2)) {
 case 0:
  VAR_4 = VAR_1->baser_device_table;
  break;
 case 1:
  VAR_4 = VAR_1->baser_coll_table;
  break;
 default:
  VAR_4 = 0;
  break;
 }

 return FUNC_1(VAR_4, VAR_2 & 7, VAR_3);
}
