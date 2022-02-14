
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hugepage_subpool {int count; long max_hpages; long min_hpages; long rsv_hpages; struct hstate* hstate; int lock; } ;
struct hstate {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hstate*,long) ;
 int FUNC_1 (struct hugepage_subpool*) ;
 struct hugepage_subpool* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

struct hugepage_subpool *FUNC_4(struct hstate *VAR_1, long VAR_2,
      long VAR_3)
{
 struct hugepage_subpool *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 FUNC_3(&VAR_4->lock);
 VAR_4->count = 1;
 VAR_4->max_hpages = VAR_2;
 VAR_4->hstate = VAR_1;
 VAR_4->min_hpages = VAR_3;

 if (VAR_3 != -1 && FUNC_0(VAR_1, VAR_3)) {
  FUNC_1(VAR_4);
  return ((void*)0);
 }
 VAR_4->rsv_hpages = VAR_3;

 return VAR_4;
}
