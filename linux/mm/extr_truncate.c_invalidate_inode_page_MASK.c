
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct address_space*,struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct address_space* FUNC_4 (struct page*) ;

int FUNC_5(struct page *VAR_0)
{
 struct address_space *VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1)
  return 0;
 if (FUNC_0(VAR_0) || FUNC_1(VAR_0))
  return 0;
 if (FUNC_3(VAR_0))
  return 0;
 return FUNC_2(VAR_1, VAR_0);
}
