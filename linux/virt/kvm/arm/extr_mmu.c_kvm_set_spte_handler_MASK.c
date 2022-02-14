
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct kvm {int dummy; } ;
typedef int pte_t ;
typedef int gpa_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kvm*,int *,int ,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_1, gpa_t VAR_2, u64 VAR_3, void *VAR_4)
{
 pte_t *VAR_5 = (pte_t *)VAR_4;

 FUNC_0(VAR_3 != VAR_0);







 FUNC_1(VAR_1, ((void*)0), VAR_2, VAR_5, 0);
 return 0;
}
