
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int anon_vma; } ;
struct rmap_item {int anon_vma; int address; struct mm_struct* mm; } ;
struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rmap_item*) ;
 int FUNC_4 (struct vm_area_struct*,struct page*,struct page*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct rmap_item *VAR_1,
          struct page *VAR_2, struct page *VAR_3)
{
 struct mm_struct *VAR_4 = VAR_1->mm;
 struct vm_area_struct *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_0(&VAR_4->mmap_sem);
 VAR_5 = FUNC_1(VAR_4, VAR_1->address);
 if (!VAR_5)
  goto out;

 VAR_6 = FUNC_4(VAR_5, VAR_2, VAR_3);
 if (VAR_6)
  goto out;


 FUNC_3(VAR_1);


 VAR_1->anon_vma = VAR_5->anon_vma;
 FUNC_2(VAR_5->anon_vma);
out:
 FUNC_5(&VAR_4->mmap_sem);
 return VAR_6;
}
