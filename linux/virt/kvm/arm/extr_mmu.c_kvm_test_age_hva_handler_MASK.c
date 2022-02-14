
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm {int dummy; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int gpa_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kvm*,int ,int **,int **,int **) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_3, gpa_t VAR_4, u64 VAR_5, void *VAR_6)
{
 pud_t *VAR_7;
 pmd_t *VAR_8;
 pte_t *VAR_9;

 FUNC_0(VAR_5 != VAR_0 && VAR_5 != VAR_1 && VAR_5 != VAR_2);
 if (!FUNC_4(VAR_3, VAR_4, &VAR_7, &VAR_8, &VAR_9))
  return 0;

 if (VAR_7)
  return FUNC_1(*VAR_7);
 else if (VAR_8)
  return FUNC_2(*VAR_8);
 else
  return FUNC_3(*VAR_9);
}
