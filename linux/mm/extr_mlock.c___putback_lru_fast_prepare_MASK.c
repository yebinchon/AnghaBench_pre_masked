
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (int,struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct pagevec*,struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static bool FUNC_8(struct page *VAR_0, struct pagevec *VAR_1,
  int *VAR_2)
{
 FUNC_3(FUNC_0(VAR_0), VAR_0);
 FUNC_3(!FUNC_1(VAR_0), VAR_0);

 if (FUNC_5(VAR_0) <= 1 && FUNC_4(VAR_0)) {
  FUNC_6(VAR_1, VAR_0);
  if (FUNC_2(VAR_0))
   (*VAR_2)++;
  FUNC_7(VAR_0);
  return 1;
 }

 return 0;
}
