
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
struct vgic_its {int device_list; TYPE_1__* dev; } ;
struct kvm {int dummy; } ;
struct its_device {int itt_addr; int num_eventid_bits; } ;
typedef int gpa_t ;
struct TYPE_2__ {struct kvm* kvm; } ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 scalar_t__ FUNC_0 (int *,struct its_device*) ;
 unsigned long long FUNC_1 (unsigned long long) ;
 int FUNC_2 (struct kvm*,int ,unsigned long long*,int) ;

__attribute__((used)) static int FUNC_3(struct vgic_its *VAR_3, struct its_device *VAR_4,
        gpa_t VAR_5, int VAR_6)
{
 struct kvm *VAR_7 = VAR_3->dev->kvm;
 u64 VAR_8, VAR_9;
 u32 VAR_10;

 VAR_9 = VAR_4->itt_addr >> 8;
 VAR_10 = FUNC_0(&VAR_3->device_list, VAR_4);
 VAR_8 = (1ULL << VAR_2 |
        ((u64)VAR_10 << VAR_1) |
        (VAR_9 << VAR_0) |
  (VAR_4->num_eventid_bits - 1));
 VAR_8 = FUNC_1(VAR_8);
 return FUNC_2(VAR_7, VAR_5, &VAR_8, VAR_6);
}
