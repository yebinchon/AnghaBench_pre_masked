
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int lru; } ;
struct hugetlb_cgroup {int dummy; } ;
struct hugepage_subpool {int dummy; } ;
struct hstate {int hugepage_activelist; int resv_huge_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 struct page* FUNC_3 (struct hstate*,struct vm_area_struct*,unsigned long,int,long) ;
 int FUNC_4 (struct hstate*) ;
 struct hstate* FUNC_5 (struct vm_area_struct*) ;
 long FUNC_6 (struct hugepage_subpool*,int) ;
 long FUNC_7 (struct hugepage_subpool*,int) ;
 int FUNC_8 (struct hstate*,long) ;
 int FUNC_9 (int,int ,struct hugetlb_cgroup**) ;
 int FUNC_10 (int,int ,struct hugetlb_cgroup*,struct page*) ;
 int FUNC_11 (int,int ,struct hugetlb_cgroup*) ;
 int VAR_2 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (struct hstate*) ;
 int FUNC_14 (struct page*,unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 struct hugepage_subpool* FUNC_17 (struct vm_area_struct*) ;
 scalar_t__ FUNC_18 (int) ;
 long FUNC_19 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 int FUNC_20 (struct hstate*,struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_21 (struct vm_area_struct*,long) ;
 long FUNC_22 (struct hstate*,struct vm_area_struct*,unsigned long) ;

struct page *FUNC_23(struct vm_area_struct *VAR_3,
        unsigned long VAR_4, int VAR_5)
{
 struct hugepage_subpool *VAR_6 = FUNC_17(VAR_3);
 struct hstate *VAR_7 = FUNC_5(VAR_3);
 struct page *VAR_8;
 long VAR_9, VAR_10;
 long VAR_11;
 int VAR_12, VAR_13;
 struct hugetlb_cgroup *VAR_14;

 VAR_13 = FUNC_4(VAR_7);





 VAR_9 = VAR_11 = FUNC_22(VAR_7, VAR_3, VAR_4);
 if (VAR_9 < 0)
  return FUNC_0(-VAR_0);
 if (VAR_9 || VAR_5) {
  VAR_11 = FUNC_6(VAR_6, 1);
  if (VAR_11 < 0) {
   FUNC_20(VAR_7, VAR_3, VAR_4);
   return FUNC_0(-VAR_1);
  }
  if (VAR_5)
   VAR_11 = 1;
 }

 VAR_12 = FUNC_9(VAR_13, FUNC_13(VAR_7), &VAR_14);
 if (VAR_12)
  goto out_subpool_put;

 FUNC_15(&VAR_2);





 VAR_8 = FUNC_3(VAR_7, VAR_3, VAR_4, VAR_5, VAR_11);
 if (!VAR_8) {
  FUNC_16(&VAR_2);
  VAR_8 = FUNC_2(VAR_7, VAR_3, VAR_4);
  if (!VAR_8)
   goto out_uncharge_cgroup;
  if (!VAR_5 && FUNC_21(VAR_3, VAR_11)) {
   FUNC_1(VAR_8);
   VAR_7->resv_huge_pages--;
  }
  FUNC_15(&VAR_2);
  FUNC_12(&VAR_8->lru, &VAR_7->hugepage_activelist);

 }
 FUNC_10(VAR_13, FUNC_13(VAR_7), VAR_14, VAR_8);
 FUNC_16(&VAR_2);

 FUNC_14(VAR_8, (unsigned long)VAR_6);

 VAR_10 = FUNC_19(VAR_7, VAR_3, VAR_4);
 if (FUNC_18(VAR_9 > VAR_10)) {
  long VAR_15;

  VAR_15 = FUNC_7(VAR_6, 1);
  FUNC_8(VAR_7, -VAR_15);
 }
 return VAR_8;

out_uncharge_cgroup:
 FUNC_11(VAR_13, FUNC_13(VAR_7), VAR_14);
out_subpool_put:
 if (VAR_9 || VAR_5)
  FUNC_7(VAR_6, 1);
 FUNC_20(VAR_7, VAR_3, VAR_4);
 return FUNC_0(-VAR_1);
}
