
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_lru_one {int nr_items; } ;
struct list_head {int dummy; } ;


 int FUNC_0 (struct list_head*) ;

void FUNC_1(struct list_lru_one *VAR_0, struct list_head *VAR_1)
{
 FUNC_0(VAR_1);
 VAR_0->nr_items--;
}
