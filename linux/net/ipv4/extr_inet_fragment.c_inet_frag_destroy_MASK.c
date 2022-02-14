
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_frags {unsigned int qsize; } ;
struct inet_frag_queue {int flags; int rcu; int rb_fragments; struct fqdir* fqdir; int timer; } ;
struct fqdir {struct inet_frags* f; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (struct fqdir*,unsigned int) ;

void FUNC_5(struct inet_frag_queue *VAR_2)
{
 struct fqdir *VAR_3;
 unsigned int VAR_4, VAR_5 = 0;
 struct inet_frags *VAR_6;

 FUNC_0(!(VAR_2->flags & VAR_0));
 FUNC_0(FUNC_2(&VAR_2->timer) != 0);


 VAR_3 = VAR_2->fqdir;
 VAR_6 = VAR_3->f;
 VAR_5 = FUNC_3(&VAR_2->rb_fragments);
 VAR_4 = VAR_5 + VAR_6->qsize;

 FUNC_1(&VAR_2->rcu, VAR_1);

 FUNC_4(VAR_3, VAR_4);
}
