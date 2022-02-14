
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct mm_walk {TYPE_1__* ops; struct vm_area_struct* vma; } ;
struct TYPE_2__ {scalar_t__ hugetlb_entry; } ;


 scalar_t__ FUNC_0 (struct vm_area_struct*) ;
 int FUNC_1 (unsigned long,unsigned long,struct mm_walk*) ;
 int FUNC_2 (unsigned long,unsigned long,struct mm_walk*) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_0, unsigned long VAR_1,
   struct mm_walk *VAR_2)
{
 int VAR_3 = 0;
 struct vm_area_struct *VAR_4 = VAR_2->vma;

 if (VAR_4 && FUNC_0(VAR_4)) {
  if (VAR_2->ops->hugetlb_entry)
   VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 } else
  VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);

 return VAR_3;
}
