
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 struct page* FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (struct page*) ;

int FUNC_9(struct page *VAR_0)
{
 struct page *VAR_1 = FUNC_3(VAR_0);

 if (!FUNC_1(VAR_1) && FUNC_2(VAR_1)) {






  if (!FUNC_0(VAR_1)) {
   FUNC_6("Memory failure: %#lx: non anonymous thp\n",
    FUNC_5(VAR_0));
   return 0;
  }
 }

 if (FUNC_4(VAR_1)) {
  if (VAR_1 == FUNC_3(VAR_0))
   return 1;

  FUNC_7("Memory failure: %#lx cannot catch tail\n",
   FUNC_5(VAR_0));
  FUNC_8(VAR_1);
 }

 return 0;
}
