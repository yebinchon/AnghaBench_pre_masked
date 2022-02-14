
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct vm_area_struct {int vm_page_prot; int vm_mm; } ;
struct page {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int spinlock_t ;
typedef int pte_t ;
typedef int pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ,int ) ;
 struct page* FUNC_4 (struct page*,struct vm_area_struct*,unsigned long) ;
 int FUNC_5 (struct page*,struct vm_area_struct*) ;
 int FUNC_6 (struct page*,struct mem_cgroup*,int) ;
 int FUNC_7 (struct page*,struct mem_cgroup*,int,int) ;
 scalar_t__ FUNC_8 (struct page*,int ,int ,struct mem_cgroup**,int) ;
 int FUNC_9 (struct page*,int ) ;
 int FUNC_10 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_11 (struct page*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_12 (int ) ;
 int * FUNC_13 (int ,int *,unsigned long,int **) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (struct page*) ;
 int FUNC_17 (int ,unsigned long,int *,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int) ;
 int FUNC_21 (struct page*) ;

__attribute__((used)) static int FUNC_22(struct vm_area_struct *VAR_4, pmd_t *VAR_5,
  unsigned long VAR_6, swp_entry_t VAR_7, struct page *VAR_8)
{
 struct page *VAR_9;
 struct mem_cgroup *VAR_10;
 spinlock_t *VAR_11;
 pte_t *VAR_12;
 int VAR_13 = 1;

 VAR_9 = VAR_8;
 VAR_8 = FUNC_4(VAR_8, VAR_4, VAR_6);
 if (FUNC_20(!VAR_8))
  return -VAR_0;

 if (FUNC_8(VAR_8, VAR_4->vm_mm, VAR_1,
    &VAR_10, 0)) {
  VAR_13 = -VAR_0;
  goto out_nolock;
 }

 VAR_12 = FUNC_13(VAR_4->vm_mm, VAR_5, VAR_6, &VAR_11);
 if (FUNC_20(!FUNC_14(*VAR_12, FUNC_19(VAR_7)))) {
  FUNC_6(VAR_8, VAR_10, 0);
  VAR_13 = 0;
  goto out;
 }

 FUNC_1(VAR_4->vm_mm, VAR_3);
 FUNC_3(VAR_4->vm_mm, VAR_2);
 FUNC_2(VAR_8);
 FUNC_17(VAR_4->vm_mm, VAR_6, VAR_12,
     FUNC_12(FUNC_9(VAR_8, VAR_4->vm_page_prot)));
 if (VAR_8 == VAR_9) {
  FUNC_10(VAR_8, VAR_4, VAR_6, 0);
  FUNC_7(VAR_8, VAR_10, 1, 0);
 } else {
  FUNC_11(VAR_8, VAR_4, VAR_6, 0);
  FUNC_7(VAR_8, VAR_10, 0, 0);
  FUNC_5(VAR_8, VAR_4);
 }
 FUNC_18(VAR_7);




 FUNC_0(VAR_8);
out:
 FUNC_15(VAR_12, VAR_11);
out_nolock:
 if (VAR_8 != VAR_9) {
  FUNC_21(VAR_8);
  FUNC_16(VAR_8);
 }
 return VAR_13;
}
