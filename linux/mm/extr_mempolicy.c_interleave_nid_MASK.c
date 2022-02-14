
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; unsigned long vm_start; } ;
struct mempolicy {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mempolicy*) ;
 int FUNC_2 (struct mempolicy*,unsigned long) ;

__attribute__((used)) static inline unsigned FUNC_3(struct mempolicy *VAR_1,
   struct vm_area_struct *VAR_2, unsigned long VAR_3, int VAR_4)
{
 if (VAR_2) {
  unsigned long VAR_5;
  FUNC_0(VAR_4 < VAR_0);
  VAR_5 = VAR_2->vm_pgoff >> (VAR_4 - VAR_0);
  VAR_5 += (VAR_3 - VAR_2->vm_start) >> VAR_4;
  return FUNC_2(VAR_1, VAR_5);
 } else
  return FUNC_1(VAR_1);
}
