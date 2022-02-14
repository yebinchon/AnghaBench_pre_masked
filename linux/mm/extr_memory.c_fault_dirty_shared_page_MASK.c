
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_file; TYPE_1__* vm_ops; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_2__ {int page_mkwrite; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,struct page*) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (int ) ;
 struct address_space* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static void FUNC_7(struct vm_area_struct *VAR_0,
        struct page *VAR_1)
{
 struct address_space *VAR_2;
 bool VAR_3;
 bool VAR_4 = VAR_0->vm_ops && VAR_0->vm_ops->page_mkwrite;

 VAR_3 = FUNC_5(VAR_1);
 FUNC_1(FUNC_0(VAR_1), VAR_1);






 VAR_2 = FUNC_4(VAR_1);
 FUNC_6(VAR_1);

 if ((VAR_3 || VAR_4) && VAR_2) {




  FUNC_2(VAR_2);
 }

 if (!VAR_4)
  FUNC_3(VAR_0->vm_file);
}
