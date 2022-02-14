
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int i_pages; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int *) ;
 int FUNC_3 (struct address_space*,struct page*) ;
 struct address_space* FUNC_4 (struct page*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct page *VAR_0)
{
 struct address_space *VAR_1 = FUNC_4(VAR_0);
 unsigned long VAR_2;

 FUNC_0(!FUNC_1(VAR_0));
 FUNC_5(&VAR_1->i_pages, VAR_2);
 FUNC_2(VAR_0, ((void*)0));
 FUNC_6(&VAR_1->i_pages, VAR_2);

 FUNC_3(VAR_1, VAR_0);
}
