
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct swap_info_struct {int flags; TYPE_1__* swap_file; } ;
struct page {int dummy; } ;
struct address_space {TYPE_2__* a_ops; } ;
struct TYPE_4__ {int (* set_page_dirty ) (struct page*) ;} ;
struct TYPE_3__ {struct address_space* f_mapping; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct page*) ;
 int FUNC_2 (struct page*) ;
 struct swap_info_struct* FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(struct page *VAR_1)
{
 struct swap_info_struct *VAR_2 = FUNC_3(VAR_1);

 if (VAR_2->flags & VAR_0) {
  struct address_space *VAR_3 = VAR_2->swap_file->f_mapping;

  FUNC_1(!FUNC_0(VAR_1), VAR_1);
  return VAR_3->a_ops->set_page_dirty(VAR_1);
 } else {
  return FUNC_2(VAR_1);
 }
}
