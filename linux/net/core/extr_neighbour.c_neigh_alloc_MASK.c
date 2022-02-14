
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {scalar_t__ neigh_priv_len; } ;
struct TYPE_2__ {int hh_lock; } ;
struct neighbour {unsigned long updated; unsigned long used; int dead; int gc_list; int refcnt; struct neigh_table* tbl; int timer; int parms; TYPE_1__ hh; int output; int nud_state; int ha_lock; int lock; int arp_queue; } ;
struct neigh_table {int gc_thresh3; int gc_thresh2; int gc_entries; int entries; int parms; scalar_t__ entry_size; int id; scalar_t__ last_flush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct neigh_table*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 unsigned long VAR_4 ;
 struct neighbour* FUNC_6 (scalar_t__,int ) ;
 int VAR_5 ;
 int FUNC_7 (struct neigh_table*) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (unsigned long,scalar_t__) ;
 int FUNC_14 (int *,int ,int ) ;

__attribute__((used)) static struct neighbour *FUNC_15(struct neigh_table *VAR_8,
         struct net_device *VAR_9,
         bool VAR_10)
{
 struct neighbour *VAR_11 = ((void*)0);
 unsigned long VAR_12 = VAR_4;
 int VAR_13;

 if (VAR_10)
  goto do_alloc;

 VAR_13 = FUNC_5(&VAR_8->gc_entries) - 1;
 if (VAR_13 >= VAR_8->gc_thresh3 ||
     (VAR_13 >= VAR_8->gc_thresh2 &&
      FUNC_13(VAR_12, VAR_8->last_flush + 5 * VAR_1))) {
  if (!FUNC_7(VAR_8) &&
      VAR_13 >= VAR_8->gc_thresh3) {
   FUNC_9("%s: neighbor table overflow!\n",
          VAR_8->id);
   FUNC_1(VAR_8, VAR_7);
   goto out_entries;
  }
 }

do_alloc:
 VAR_11 = FUNC_6(VAR_8->entry_size + VAR_9->neigh_priv_len, VAR_0);
 if (!VAR_11)
  goto out_entries;

 FUNC_2(&VAR_11->arp_queue);
 FUNC_11(&VAR_11->lock);
 FUNC_12(&VAR_11->ha_lock);
 VAR_11->updated = VAR_11->used = VAR_12;
 VAR_11->nud_state = VAR_2;
 VAR_11->output = VAR_5;
 FUNC_12(&VAR_11->hh.hh_lock);
 VAR_11->parms = FUNC_8(&VAR_8->parms);
 FUNC_14(&VAR_11->timer, VAR_6, 0);

 FUNC_1(VAR_8, VAR_3);
 VAR_11->tbl = VAR_8;
 FUNC_10(&VAR_11->refcnt, 1);
 VAR_11->dead = 1;
 FUNC_0(&VAR_11->gc_list);

 FUNC_4(&VAR_8->entries);
out:
 return VAR_11;

out_entries:
 if (!VAR_10)
  FUNC_3(&VAR_8->gc_entries);
 goto out;
}
