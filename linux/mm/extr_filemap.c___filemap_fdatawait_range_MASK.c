
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {struct page** pages; } ;
struct page {int dummy; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct pagevec*) ;
 int FUNC_3 (struct pagevec*,struct address_space*,scalar_t__*,scalar_t__,int ) ;
 int FUNC_4 (struct pagevec*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static void FUNC_6(struct address_space *VAR_2,
         loff_t VAR_3, loff_t VAR_4)
{
 pgoff_t VAR_5 = VAR_3 >> VAR_1;
 pgoff_t VAR_6 = VAR_4 >> VAR_1;
 struct pagevec VAR_7;
 int VAR_8;

 if (VAR_4 < VAR_3)
  return;

 FUNC_2(&VAR_7);
 while (VAR_5 <= VAR_6) {
  unsigned VAR_9;

  VAR_8 = FUNC_3(&VAR_7, VAR_2, &VAR_5,
    VAR_6, VAR_0);
  if (!VAR_8)
   break;

  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   struct page *VAR_10 = VAR_7.pages[VAR_9];

   FUNC_5(VAR_10);
   FUNC_0(VAR_10);
  }
  FUNC_4(&VAR_7);
  FUNC_1();
 }
}
