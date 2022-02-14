
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct address_space*,struct page*,void*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct address_space*,struct page*) ;

void FUNC_3(struct page *VAR_0, void *VAR_1)
{
 struct address_space *VAR_2 = VAR_0->mapping;

 FUNC_1(VAR_0);

 FUNC_2(VAR_2, VAR_0);
 FUNC_0(VAR_2, VAR_0, VAR_1);
}
