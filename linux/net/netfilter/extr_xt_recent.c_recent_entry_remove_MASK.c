
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recent_table {int entries; } ;
struct recent_entry {int lru_list; int list; } ;


 int FUNC_0 (struct recent_entry*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct recent_table *VAR_0, struct recent_entry *VAR_1)
{
 FUNC_1(&VAR_1->list);
 FUNC_1(&VAR_1->lru_list);
 FUNC_0(VAR_1);
 VAR_0->entries--;
}
