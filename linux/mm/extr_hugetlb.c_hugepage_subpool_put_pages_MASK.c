
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugepage_subpool {int max_hpages; long used_hpages; int min_hpages; long rsv_hpages; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct hugepage_subpool*) ;

__attribute__((used)) static long FUNC_2(struct hugepage_subpool *VAR_0,
           long VAR_1)
{
 long VAR_2 = VAR_1;

 if (!VAR_0)
  return VAR_1;

 FUNC_0(&VAR_0->lock);

 if (VAR_0->max_hpages != -1)
  VAR_0->used_hpages -= VAR_1;


 if (VAR_0->min_hpages != -1 && VAR_0->used_hpages < VAR_0->min_hpages) {
  if (VAR_0->rsv_hpages + VAR_1 <= VAR_0->min_hpages)
   VAR_2 = 0;
  else
   VAR_2 = VAR_0->rsv_hpages + VAR_1 - VAR_0->min_hpages;

  VAR_0->rsv_hpages += VAR_1;
  if (VAR_0->rsv_hpages > VAR_0->min_hpages)
   VAR_0->rsv_hpages = VAR_0->min_hpages;
 }





 FUNC_1(VAR_0);

 return VAR_2;
}
