
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct anon_vma* anon_vma; } ;
struct page {int mapping; } ;
struct anon_vma {int dummy; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int,struct page*) ;
 int FUNC_2 (int,struct vm_area_struct*) ;
 int FUNC_3 (int ,struct address_space*) ;
 struct page* FUNC_4 (struct page*) ;

void FUNC_5(struct page *VAR_1, struct vm_area_struct *VAR_2)
{
 struct anon_vma *VAR_3 = VAR_2->anon_vma;

 VAR_1 = FUNC_4(VAR_1);

 FUNC_1(!FUNC_0(VAR_1), VAR_1);
 FUNC_2(!VAR_3, VAR_2);

 VAR_3 = (void *) VAR_3 + VAR_0;





 FUNC_3(VAR_1->mapping, (struct address_space *) VAR_3);
}
