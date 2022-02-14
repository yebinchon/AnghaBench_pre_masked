
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugepage_subpool {scalar_t__ count; scalar_t__ used_hpages; int min_hpages; int hstate; int lock; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct hugepage_subpool*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct hugepage_subpool *VAR_0)
{
 bool VAR_1 = (VAR_0->count == 0) && (VAR_0->used_hpages == 0);

 FUNC_2(&VAR_0->lock);




 if (VAR_1) {
  if (VAR_0->min_hpages != -1)
   FUNC_0(VAR_0->hstate,
      -VAR_0->min_hpages);
  FUNC_1(VAR_0);
 }
}
