
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {scalar_t__ free_huge_pages; scalar_t__ resv_huge_pages; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 struct page* FUNC_0 (struct hstate*,int ,int,int *) ;
 struct page* FUNC_1 (struct hstate*,int ,int,int *) ;
 int FUNC_2 (struct hstate*) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

struct page *FUNC_5(struct hstate *VAR_1, int VAR_2,
  nodemask_t *VAR_3)
{
 gfp_t VAR_4 = FUNC_2(VAR_1);

 FUNC_3(&VAR_0);
 if (VAR_1->free_huge_pages - VAR_1->resv_huge_pages > 0) {
  struct page *VAR_5;

  VAR_5 = FUNC_1(VAR_1, VAR_4, VAR_2, VAR_3);
  if (VAR_5) {
   FUNC_4(&VAR_0);
   return VAR_5;
  }
 }
 FUNC_4(&VAR_0);

 return FUNC_0(VAR_1, VAR_4, VAR_2, VAR_3);
}
