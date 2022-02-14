
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct address_space {int i_pages; } ;
typedef int pgoff_t ;


 int FUNC_0 (int ,int *,int ) ;
 struct page* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct page*) ;
 int VAR_0 ;
 struct page* FUNC_8 (int *) ;
 struct page* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *,struct page*) ;

struct page *FUNC_12(struct address_space *VAR_1, pgoff_t VAR_2)
{
 FUNC_0(VAR_0, &VAR_1->i_pages, VAR_2);
 struct page *VAR_3;

 FUNC_4();
repeat:
 FUNC_10(&VAR_0);
 VAR_3 = FUNC_8(&VAR_0);
 if (FUNC_11(&VAR_0, VAR_3))
  goto repeat;




 if (!VAR_3 || FUNC_7(VAR_3))
  goto out;

 if (!FUNC_2(VAR_3))
  goto repeat;






 if (FUNC_6(VAR_3 != FUNC_9(&VAR_0))) {
  FUNC_3(VAR_3);
  goto repeat;
 }
 VAR_3 = FUNC_1(VAR_3, VAR_2);
out:
 FUNC_5();

 return VAR_3;
}
