
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct address_space*,struct page*) ;

int FUNC_4(struct address_space *VAR_1, struct page *VAR_2)
{
 FUNC_1(FUNC_0(VAR_2), VAR_2);

 if (VAR_2->mapping != VAR_1)
  return -VAR_0;

 FUNC_3(VAR_1, VAR_2);
 FUNC_2(VAR_2);
 return 0;
}
