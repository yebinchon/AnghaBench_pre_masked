
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct address_space {int i_pages; TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* freepage ) (struct page*) ;} ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,int *) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_9(struct address_space *VAR_1, struct page *VAR_2)
{
 unsigned long VAR_3;

 if (VAR_2->mapping != VAR_1)
  return 0;

 if (FUNC_3(VAR_2) && !FUNC_6(VAR_2, VAR_0))
  return 0;

 FUNC_7(&VAR_1->i_pages, VAR_3);
 if (FUNC_1(VAR_2))
  goto failed;

 FUNC_0(FUNC_3(VAR_2));
 FUNC_2(VAR_2, ((void*)0));
 FUNC_8(&VAR_1->i_pages, VAR_3);

 if (VAR_1->a_ops->freepage)
  VAR_1->a_ops->freepage(VAR_2);

 FUNC_4(VAR_2);
 return 1;
failed:
 FUNC_8(&VAR_1->i_pages, VAR_3);
 return 0;
}
