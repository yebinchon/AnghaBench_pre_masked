
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_ioeventfd {int flags; int len; scalar_t__ addr; } ;
struct kvm {int dummy; } ;
typedef enum kvm_bus { ____Placeholder_kvm_bus } kvm_bus ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm*,int,struct kvm_ioeventfd*) ;
 int FUNC_2 (struct kvm*,int,struct kvm_ioeventfd*) ;

__attribute__((used)) static int
FUNC_3(struct kvm *VAR_5, struct kvm_ioeventfd *VAR_6)
{
 enum kvm_bus VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_6->flags);

 switch (VAR_6->len) {
 case 0:
 case 1:
 case 2:
 case 4:
 case 8:
  break;
 default:
  return -VAR_0;
 }


 if (VAR_6->addr + VAR_6->len < VAR_6->addr)
  return -VAR_0;


 if (VAR_6->flags & ~VAR_3)
  return -VAR_0;


 if (!VAR_6->len && (VAR_6->flags & VAR_2))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_5, VAR_7, VAR_6);
 if (VAR_8)
  goto fail;




 if (!VAR_6->len && VAR_7 == VAR_4) {
  VAR_8 = FUNC_1(VAR_5, VAR_1, VAR_6);
  if (VAR_8 < 0)
   goto fast_fail;
 }

 return 0;

fast_fail:
 FUNC_2(VAR_5, VAR_7, VAR_6);
fail:
 return VAR_8;
}
