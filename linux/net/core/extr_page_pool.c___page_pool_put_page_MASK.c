
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_pool {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page_pool*,struct page*) ;
 scalar_t__ FUNC_1 (struct page*,struct page_pool*) ;
 int FUNC_2 (struct page_pool*,struct page*) ;
 int FUNC_3 (struct page_pool*,struct page*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

void FUNC_8(struct page_pool *VAR_0,
     struct page *VAR_1, bool VAR_2)
{






 if (FUNC_5(FUNC_6(VAR_1) == 1)) {


  if (VAR_2 && FUNC_4())
   if (FUNC_1(VAR_1, VAR_0))
    return;

  if (!FUNC_2(VAR_0, VAR_1)) {

   FUNC_3(VAR_0, VAR_1);
  }
  return;
 }
 FUNC_0(VAR_0, VAR_1);
 FUNC_7(VAR_1);
}
