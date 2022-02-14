
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {int dead; TYPE_1__* tbl; int gc_list; } ;
struct TYPE_2__ {int gc_entries; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct neighbour *VAR_0)
{
 VAR_0->dead = 1;
 if (!FUNC_2(&VAR_0->gc_list)) {
  FUNC_1(&VAR_0->gc_list);
  FUNC_0(&VAR_0->tbl->gc_entries);
 }
}
