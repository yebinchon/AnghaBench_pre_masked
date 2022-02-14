
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int lru_lock; } ;
typedef TYPE_1__ pg_data_t ;


 int FUNC_0 (struct page*,int ,int *) ;
 struct page* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct page *VAR_0)
{
 pg_data_t *VAR_1 = FUNC_3(VAR_0);

 VAR_0 = FUNC_1(VAR_0);
 FUNC_4(&VAR_1->lru_lock);
 FUNC_0(VAR_0, FUNC_2(VAR_0, VAR_1), ((void*)0));
 FUNC_5(&VAR_1->lru_lock);
}
