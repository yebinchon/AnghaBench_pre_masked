
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int slab_list; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_2(struct page *VAR_0, struct list_head *VAR_1)
{
 FUNC_1(&VAR_0->slab_list, VAR_1);
 FUNC_0(VAR_0);
}
