
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pgd; } ;
struct kvm {TYPE_1__ arch; } ;


 int FUNC_0 (struct kvm*,unsigned long,unsigned long,int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,unsigned long) ;

int FUNC_2(struct kvm *VAR_1,
   unsigned long VAR_2, unsigned long VAR_3)
{
 if (!VAR_1->arch.pgd)
  return 0;

 FUNC_1(VAR_2, VAR_3);
 FUNC_0(VAR_1, VAR_2, VAR_3, &VAR_0, ((void*)0));
 return 0;
}
