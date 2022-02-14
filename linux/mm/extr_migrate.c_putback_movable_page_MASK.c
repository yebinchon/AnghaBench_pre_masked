
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* putback_page ) (struct page*) ;} ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int,struct page*) ;
 int FUNC_4 (struct page*) ;
 struct address_space* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

void FUNC_7(struct page *VAR_0)
{
 struct address_space *VAR_1;

 FUNC_3(!FUNC_1(VAR_0), VAR_0);
 FUNC_3(!FUNC_2(VAR_0), VAR_0);
 FUNC_3(!FUNC_0(VAR_0), VAR_0);

 VAR_1 = FUNC_5(VAR_0);
 VAR_1->a_ops->putback_page(VAR_0);
 FUNC_4(VAR_0);
}
