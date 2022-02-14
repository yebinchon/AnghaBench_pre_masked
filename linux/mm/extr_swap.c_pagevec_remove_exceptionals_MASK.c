
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int nr; struct page** pages; } ;
struct page {int dummy; } ;


 int FUNC_0 (struct pagevec*) ;
 int FUNC_1 (struct page*) ;

void FUNC_2(struct pagevec *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0, VAR_2 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  struct page *VAR_3 = VAR_0->pages[VAR_1];
  if (!FUNC_1(VAR_3))
   VAR_0->pages[VAR_2++] = VAR_3;
 }
 VAR_0->nr = VAR_2;
}
