
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recent_table {int lru_list; int nstamps_max_mask; } ;
struct recent_entry {int lru_list; int index; int nstamps; int * stamps; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct recent_table *VAR_1, struct recent_entry *VAR_2)
{
 VAR_2->index &= VAR_1->nstamps_max_mask;
 VAR_2->stamps[VAR_2->index++] = VAR_0;
 if (VAR_2->index > VAR_2->nstamps)
  VAR_2->nstamps = VAR_2->index;
 FUNC_0(&VAR_2->lru_list, &VAR_1->lru_list);
}
