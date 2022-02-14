
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct hstate {scalar_t__ free_huge_pages; scalar_t__ resv_huge_pages; int max_huge_pages; int * free_huge_pages_node; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (struct page*) ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct page*) ;
 struct hstate* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct hstate*,struct page*) ;

int FUNC_12(struct page *VAR_2)
{
 int VAR_3 = -VAR_0;


 if (!FUNC_2(VAR_2))
  return 0;

 FUNC_9(&VAR_1);
 if (!FUNC_2(VAR_2)) {
  VAR_3 = 0;
  goto out;
 }

 if (!FUNC_6(VAR_2)) {
  struct page *VAR_4 = FUNC_4(VAR_2);
  struct hstate *VAR_5 = FUNC_7(VAR_4);
  int VAR_6 = FUNC_8(VAR_4);
  if (VAR_5->free_huge_pages - VAR_5->resv_huge_pages == 0)
   goto out;




  if (FUNC_1(VAR_4) && VAR_2 != VAR_4) {
   FUNC_3(VAR_2);
   FUNC_0(VAR_4);
  }
  FUNC_5(&VAR_4->lru);
  VAR_5->free_huge_pages--;
  VAR_5->free_huge_pages_node[VAR_6]--;
  VAR_5->max_huge_pages--;
  FUNC_11(VAR_5, VAR_4);
  VAR_3 = 0;
 }
out:
 FUNC_10(&VAR_1);
 return VAR_3;
}
