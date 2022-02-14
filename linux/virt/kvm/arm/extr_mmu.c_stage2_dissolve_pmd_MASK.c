
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm {int dummy; } ;
typedef int pmd_t ;
typedef int phys_addr_t ;


 int FUNC_0 (struct kvm*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct kvm *VAR_0, phys_addr_t VAR_1, pmd_t *VAR_2)
{
 if (!FUNC_2(*VAR_2))
  return;

 FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_3(FUNC_4(VAR_2));
}
