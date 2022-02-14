
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;
struct address_space {int i_pages; } ;


 int FUNC_0 (struct page*,TYPE_1__) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct page*,TYPE_1__) ;
 struct address_space* FUNC_5 (TYPE_1__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct page *VAR_0)
{
 swp_entry_t VAR_1 = { .val = FUNC_2(VAR_0) };
 struct address_space *VAR_2 = FUNC_5(VAR_1);

 FUNC_6(&VAR_2->i_pages);
 FUNC_0(VAR_0, VAR_1);
 FUNC_7(&VAR_2->i_pages);

 FUNC_4(VAR_0, VAR_1);
 FUNC_3(VAR_0, FUNC_1(VAR_0));
}
