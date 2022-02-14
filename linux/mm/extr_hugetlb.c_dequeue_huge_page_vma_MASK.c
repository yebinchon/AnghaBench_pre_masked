
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct mempolicy {int dummy; } ;
struct hstate {scalar_t__ free_huge_pages; scalar_t__ resv_huge_pages; } ;
typedef int nodemask_t ;
typedef int gfp_t ;


 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (struct hstate*,int ,int,int *) ;
 int FUNC_2 (struct hstate*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,int ,struct mempolicy**,int **) ;
 int FUNC_4 (struct mempolicy*) ;
 scalar_t__ FUNC_5 (struct vm_area_struct*,long) ;

__attribute__((used)) static struct page *FUNC_6(struct hstate *VAR_0,
    struct vm_area_struct *VAR_1,
    unsigned long VAR_2, int VAR_3,
    long VAR_4)
{
 struct page *VAR_5;
 struct mempolicy *VAR_6;
 gfp_t VAR_7;
 nodemask_t *VAR_8;
 int VAR_9;






 if (!FUNC_5(VAR_1, VAR_4) &&
   VAR_0->free_huge_pages - VAR_0->resv_huge_pages == 0)
  goto err;


 if (VAR_3 && VAR_0->free_huge_pages - VAR_0->resv_huge_pages == 0)
  goto err;

 VAR_7 = FUNC_2(VAR_0);
 VAR_9 = FUNC_3(VAR_1, VAR_2, VAR_7, &VAR_6, &VAR_8);
 VAR_5 = FUNC_1(VAR_0, VAR_7, VAR_9, VAR_8);
 if (VAR_5 && !VAR_3 && FUNC_5(VAR_1, VAR_4)) {
  FUNC_0(VAR_5);
  VAR_0->resv_huge_pages--;
 }

 FUNC_4(VAR_6);
 return VAR_5;

err:
 return ((void*)0);
}
