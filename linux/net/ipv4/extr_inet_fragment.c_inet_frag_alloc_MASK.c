
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_frags {int frag_expire; int qsize; int (* constructor ) (struct inet_frag_queue*,void*) ;int frags_cachep; } ;
struct inet_frag_queue {int refcnt; int lock; int timer; struct fqdir* fqdir; } ;
struct fqdir {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fqdir*,int ) ;
 struct inet_frag_queue* FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inet_frag_queue*,void*) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static struct inet_frag_queue *FUNC_6(struct fqdir *VAR_1,
            struct inet_frags *VAR_2,
            void *VAR_3)
{
 struct inet_frag_queue *VAR_4;

 VAR_4 = FUNC_1(VAR_2->frags_cachep, VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->fqdir = VAR_1;
 VAR_2->constructor(VAR_4, VAR_3);
 FUNC_0(VAR_1, VAR_2->qsize);

 FUNC_5(&VAR_4->timer, VAR_2->frag_expire, 0);
 FUNC_3(&VAR_4->lock);
 FUNC_2(&VAR_4->refcnt, 3);

 return VAR_4;
}
