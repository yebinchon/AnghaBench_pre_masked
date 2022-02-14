
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int i_pages; } ;
typedef int pgoff_t ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_1 ;
 struct page* FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,struct page*) ;

bool FUNC_6(struct address_space *VAR_2,
      loff_t VAR_3, loff_t VAR_4)
{
 struct page *VAR_5;
 FUNC_0(VAR_1, &VAR_2->i_pages, VAR_3 >> VAR_0);
 pgoff_t VAR_6 = VAR_4 >> VAR_0;

 if (VAR_4 < VAR_3)
  return 0;

 FUNC_1();
 for (;;) {
  VAR_5 = FUNC_4(&VAR_1, VAR_6);
  if (FUNC_5(&VAR_1, VAR_5))
   continue;

  if (FUNC_3(VAR_5))
   continue;





  break;
 }
 FUNC_2();

 return VAR_5 != ((void*)0);
}
