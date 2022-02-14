
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet_frag_queue {int flags; int refcnt; int node; struct fqdir* fqdir; int timer; } ;
struct fqdir {TYPE_1__* f; int rhashtable; int dead; } ;
struct TYPE_2__ {int rhash_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;

void FUNC_5(struct inet_frag_queue *VAR_2)
{
 if (FUNC_0(&VAR_2->timer))
  FUNC_3(&VAR_2->refcnt);

 if (!(VAR_2->flags & VAR_0)) {
  struct fqdir *VAR_3 = VAR_2->fqdir;

  VAR_2->flags |= VAR_0;
  FUNC_1();





  if (!VAR_3->dead) {
   FUNC_4(&VAR_3->rhashtable, &VAR_2->node,
            VAR_3->f->rhash_params);
   FUNC_3(&VAR_2->refcnt);
  } else {
   VAR_2->flags |= VAR_1;
  }
  FUNC_2();
 }
}
