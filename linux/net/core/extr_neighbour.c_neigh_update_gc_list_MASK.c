
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct neighbour {int nud_state; int flags; TYPE_1__* tbl; int lock; int gc_list; } ;
struct TYPE_2__ {int lock; int gc_entries; int gc_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct neighbour *VAR_2)
{
 bool VAR_3, VAR_4;

 FUNC_6(&VAR_2->tbl->lock);
 FUNC_5(&VAR_2->lock);




 VAR_4 = VAR_2->nud_state & VAR_1 ||
    VAR_2->flags & VAR_0;
 VAR_3 = !FUNC_4(&VAR_2->gc_list);

 if (VAR_4 && VAR_3) {
  FUNC_3(&VAR_2->gc_list);
  FUNC_0(&VAR_2->tbl->gc_entries);
 } else if (!VAR_4 && !VAR_3) {

  FUNC_2(&VAR_2->gc_list, &VAR_2->tbl->gc_list);
  FUNC_1(&VAR_2->tbl->gc_entries);
 }

 FUNC_7(&VAR_2->lock);
 FUNC_8(&VAR_2->tbl->lock);
}
