
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* set_page_dirty ) (struct page*) ;} ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 struct page* FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (struct address_space*) ;
 struct address_space* FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

int FUNC_9(struct page *VAR_0)
{
 struct address_space *VAR_1 = FUNC_7(VAR_0);

 VAR_0 = FUNC_5(VAR_0);
 if (FUNC_6(VAR_1)) {
  int (*VAR_2)(struct page *) = VAR_1->a_ops->set_page_dirty;
  if (FUNC_2(VAR_0))
   FUNC_0(VAR_0);




  return (*VAR_2)(VAR_0);
 }
 if (!FUNC_1(VAR_0)) {
  if (!FUNC_3(VAR_0))
   return 1;
 }
 return 0;
}
