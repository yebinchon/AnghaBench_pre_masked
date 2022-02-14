
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_lru_one {scalar_t__ nr_items; int list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct list_lru_one *VAR_0)
{
 FUNC_0(&VAR_0->list);
 VAR_0->nr_items = 0;
}
