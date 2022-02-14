
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int * pages; } ;
struct address_space {int i_pages; } ;


 int FUNC_0 (struct address_space*,struct pagevec*) ;
 int FUNC_1 (struct address_space*,int ) ;
 int FUNC_2 (struct pagevec*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct address_space*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct address_space *VAR_0,
      struct pagevec *VAR_1)
{
 int VAR_2;
 unsigned long VAR_3;

 if (!FUNC_2(VAR_1))
  return;

 FUNC_5(&VAR_0->i_pages, VAR_3);
 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_1); VAR_2++) {
  FUNC_3(VAR_1->pages[VAR_2]);

  FUNC_4(VAR_0, VAR_1->pages[VAR_2]);
 }
 FUNC_0(VAR_0, VAR_1);
 FUNC_6(&VAR_0->i_pages, VAR_3);

 for (VAR_2 = 0; VAR_2 < FUNC_2(VAR_1); VAR_2++)
  FUNC_1(VAR_0, VAR_1->pages[VAR_2]);
}
