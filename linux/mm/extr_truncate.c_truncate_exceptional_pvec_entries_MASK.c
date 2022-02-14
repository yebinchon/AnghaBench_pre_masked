
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int nr; struct page** pages; } ;
struct page {int dummy; } ;
struct address_space {int i_pages; } ;
typedef scalar_t__ pgoff_t ;


 int FUNC_0 (struct address_space*,scalar_t__,struct page*) ;
 int FUNC_1 (struct address_space*,scalar_t__) ;
 int FUNC_2 (struct address_space*) ;
 int FUNC_3 (struct pagevec*) ;
 scalar_t__ FUNC_4 (struct address_space*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct address_space *VAR_0,
    struct pagevec *VAR_1, pgoff_t *VAR_2,
    pgoff_t VAR_3)
{
 int VAR_4, VAR_5;
 bool VAR_6, VAR_7;


 if (FUNC_4(VAR_0))
  return;

 for (VAR_5 = 0; VAR_5 < FUNC_3(VAR_1); VAR_5++)
  if (FUNC_6(VAR_1->pages[VAR_5]))
   break;

 if (VAR_5 == FUNC_3(VAR_1))
  return;

 VAR_6 = FUNC_2(VAR_0);
 VAR_7 = !VAR_6 && VAR_2[VAR_5] < VAR_3;
 if (VAR_7)
  FUNC_7(&VAR_0->i_pages);

 for (VAR_4 = VAR_5; VAR_4 < FUNC_3(VAR_1); VAR_4++) {
  struct page *VAR_8 = VAR_1->pages[VAR_4];
  pgoff_t VAR_9 = VAR_2[VAR_4];

  if (!FUNC_6(VAR_8)) {
   VAR_1->pages[VAR_5++] = VAR_8;
   continue;
  }

  if (VAR_9 >= VAR_3)
   continue;

  if (FUNC_5(VAR_6)) {
   FUNC_1(VAR_0, VAR_9);
   continue;
  }

  FUNC_0(VAR_0, VAR_9, VAR_8);
 }

 if (VAR_7)
  FUNC_8(&VAR_0->i_pages);
 VAR_1->nr = VAR_5;
}
