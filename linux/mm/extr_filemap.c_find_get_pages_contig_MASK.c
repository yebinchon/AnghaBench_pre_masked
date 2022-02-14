
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {int i_pages; } ;
typedef int pgoff_t ;
struct TYPE_8__ {int xa_index; } ;


 int FUNC_0 (TYPE_1__,int *,int ) ;
 struct page* FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (struct page*) ;
 TYPE_1__ VAR_0 ;
 struct page* FUNC_8 (TYPE_1__*) ;
 struct page* FUNC_9 (TYPE_1__*) ;
 struct page* FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 scalar_t__ FUNC_12 (TYPE_1__*,struct page*) ;

unsigned FUNC_13(struct address_space *VAR_1, pgoff_t VAR_2,
          unsigned int VAR_3, struct page **VAR_4)
{
 FUNC_0(VAR_0, &VAR_1->i_pages, VAR_2);
 struct page *VAR_5;
 unsigned int VAR_6 = 0;

 if (FUNC_6(!VAR_3))
  return 0;

 FUNC_4();
 for (VAR_5 = FUNC_8(&VAR_0); VAR_5; VAR_5 = FUNC_9(&VAR_0)) {
  if (FUNC_12(&VAR_0, VAR_5))
   continue;




  if (FUNC_7(VAR_5))
   break;

  if (!FUNC_2(VAR_5))
   goto retry;


  if (FUNC_6(VAR_5 != FUNC_10(&VAR_0)))
   goto put_page;

  VAR_4[VAR_6] = FUNC_1(VAR_5, VAR_0.xa_index);
  if (++VAR_6 == VAR_3)
   break;
  continue;
put_page:
  FUNC_3(VAR_5);
retry:
  FUNC_11(&VAR_0);
 }
 FUNC_5();
 return VAR_6;
}
