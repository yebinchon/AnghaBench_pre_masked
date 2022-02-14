
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct anon_vma* anon_vma; } ;
struct page {int index; struct address_space* mapping; } ;
struct anon_vma {struct anon_vma* root; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_1,
 struct vm_area_struct *VAR_2, unsigned long VAR_3, int VAR_4)
{
 struct anon_vma *VAR_5 = VAR_2->anon_vma;

 FUNC_0(!VAR_5);

 if (FUNC_1(VAR_1))
  return;






 if (!VAR_4)
  VAR_5 = VAR_5->root;

 VAR_5 = (void *) VAR_5 + VAR_0;
 VAR_1->mapping = (struct address_space *) VAR_5;
 VAR_1->index = FUNC_2(VAR_2, VAR_3);
}
