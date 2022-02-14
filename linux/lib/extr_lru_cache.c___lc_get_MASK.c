
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lru_cache {int flags; scalar_t__ pending_changes; scalar_t__ max_pending_changes; int used; int locked; int misses; int in_use; int hits; int starving; } ;
struct lc_element {scalar_t__ lc_new_number; scalar_t__ lc_number; int refcnt; int list; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (struct lc_element*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct lc_element* FUNC_3 (struct lru_cache*,unsigned int,int) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,int*) ;
 struct lc_element* FUNC_6 (struct lru_cache*,unsigned int) ;
 int FUNC_7 (struct lru_cache*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,int*) ;
 scalar_t__ FUNC_10 (int ,int*) ;

__attribute__((used)) static struct lc_element *FUNC_11(struct lru_cache *VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
 struct lc_element *VAR_9;

 FUNC_1();
 if (VAR_6->flags & VAR_2) {
  ++VAR_6->starving;
  FUNC_2(((void*)0));
 }

 VAR_9 = FUNC_3(VAR_6, VAR_7, 1);




 if (VAR_9) {
  if (VAR_9->lc_new_number != VAR_9->lc_number) {




   if (!(VAR_8 & VAR_1))
    FUNC_2(((void*)0));


   ++VAR_9->refcnt;
   ++VAR_6->hits;
   FUNC_2(VAR_9);
  }

  ++VAR_6->hits;
  if (VAR_9->refcnt++ == 0)
   VAR_6->used++;
  FUNC_8(&VAR_9->list, &VAR_6->in_use);
  FUNC_2(VAR_9);
 }


 ++VAR_6->misses;
 if (!(VAR_8 & VAR_0))
  FUNC_2(((void*)0));



 FUNC_9(VAR_3, &VAR_6->flags);




 if (FUNC_10(VAR_4, &VAR_6->flags)) {
  ++VAR_6->locked;
  FUNC_2(((void*)0));
 }




 if (!FUNC_7(VAR_6)) {
  FUNC_4(VAR_5, &VAR_6->flags);
  FUNC_2(((void*)0));
 }




 if (VAR_6->pending_changes >= VAR_6->max_pending_changes)
  FUNC_2(((void*)0));

 VAR_9 = FUNC_6(VAR_6, VAR_7);
 FUNC_0(!VAR_9);

 FUNC_5(VAR_5, &VAR_6->flags);
 FUNC_0(++VAR_9->refcnt != 1);
 VAR_6->used++;
 VAR_6->pending_changes++;

 FUNC_2(VAR_9);
}
