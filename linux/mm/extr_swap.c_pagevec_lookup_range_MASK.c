
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int pages; int nr; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int FUNC_0 (struct address_space*,int *,int ,int ,int ) ;
 int FUNC_1 (struct pagevec*) ;

unsigned FUNC_2(struct pagevec *VAR_1,
  struct address_space *VAR_2, pgoff_t *VAR_3, pgoff_t VAR_4)
{
 VAR_1->nr = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_0,
     VAR_1->pages);
 return FUNC_1(VAR_1);
}
