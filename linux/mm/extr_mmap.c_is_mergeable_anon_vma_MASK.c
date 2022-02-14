
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int anon_vma_chain; } ;
struct anon_vma {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;

__attribute__((used)) static inline int FUNC_1(struct anon_vma *VAR_0,
     struct anon_vma *VAR_1,
     struct vm_area_struct *VAR_2)
{




 if ((!VAR_0 || !VAR_1) && (!VAR_2 ||
  FUNC_0(&VAR_2->anon_vma_chain)))
  return 1;
 return VAR_0 == VAR_1;
}
