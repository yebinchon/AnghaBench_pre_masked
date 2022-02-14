
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct hstate {scalar_t__ surplus_huge_pages; scalar_t__ nr_overcommit_huge_pages; int * surplus_huge_pages_node; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct hstate*,int ,int,int *,int *) ;
 scalar_t__ FUNC_2 (struct hstate*) ;
 int VAR_0 ;
 size_t FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct page *FUNC_7(struct hstate *VAR_1, gfp_t VAR_2,
  int VAR_3, nodemask_t *VAR_4)
{
 struct page *VAR_5 = ((void*)0);

 if (FUNC_2(VAR_1))
  return ((void*)0);

 FUNC_5(&VAR_0);
 if (VAR_1->surplus_huge_pages >= VAR_1->nr_overcommit_huge_pages)
  goto out_unlock;
 FUNC_6(&VAR_0);

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, ((void*)0));
 if (!VAR_5)
  return ((void*)0);

 FUNC_5(&VAR_0);







 if (VAR_1->surplus_huge_pages >= VAR_1->nr_overcommit_huge_pages) {
  FUNC_0(VAR_5);
  FUNC_6(&VAR_0);
  FUNC_4(VAR_5);
  return ((void*)0);
 } else {
  VAR_1->surplus_huge_pages++;
  VAR_1->surplus_huge_pages_node[FUNC_3(VAR_5)]++;
 }

out_unlock:
 FUNC_6(&VAR_0);

 return VAR_5;
}
