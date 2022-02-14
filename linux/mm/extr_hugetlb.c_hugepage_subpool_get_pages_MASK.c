
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugepage_subpool {int max_hpages; long used_hpages; int min_hpages; long rsv_hpages; int lock; } ;


 long VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static long FUNC_2(struct hugepage_subpool *VAR_1,
          long VAR_2)
{
 long VAR_3 = VAR_2;

 if (!VAR_1)
  return VAR_3;

 FUNC_0(&VAR_1->lock);

 if (VAR_1->max_hpages != -1) {
  if ((VAR_1->used_hpages + VAR_2) <= VAR_1->max_hpages)
   VAR_1->used_hpages += VAR_2;
  else {
   VAR_3 = -VAR_0;
   goto unlock_ret;
  }
 }


 if (VAR_1->min_hpages != -1 && VAR_1->rsv_hpages) {
  if (VAR_2 > VAR_1->rsv_hpages) {




   VAR_3 = VAR_2 - VAR_1->rsv_hpages;
   VAR_1->rsv_hpages = 0;
  } else {
   VAR_3 = 0;
   VAR_1->rsv_hpages -= VAR_2;
  }
 }

unlock_ret:
 FUNC_1(&VAR_1->lock);
 return VAR_3;
}
