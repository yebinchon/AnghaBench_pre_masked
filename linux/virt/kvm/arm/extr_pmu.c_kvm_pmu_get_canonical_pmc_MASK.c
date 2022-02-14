
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_pmc {int idx; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct kvm_pmc*) ;

__attribute__((used)) static struct kvm_pmc *FUNC_2(struct kvm_pmc *VAR_0)
{
 if (FUNC_1(VAR_0) &&
     FUNC_0(VAR_0->idx))
  return VAR_0 - 1;

 return VAR_0;
}
