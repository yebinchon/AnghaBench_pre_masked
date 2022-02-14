
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int users_count; } ;


 int FUNC_0 (struct kvm*) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct kvm *VAR_0)
{
 if (FUNC_1(&VAR_0->users_count))
  FUNC_0(VAR_0);
}
