
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inet_frag_queue {int refcnt; } ;
struct fqdir {scalar_t__ high_thresh; TYPE_1__* f; int rhashtable; } ;
struct TYPE_2__ {int rhash_params; } ;


 int FUNC_0 (struct inet_frag_queue*) ;
 scalar_t__ FUNC_1 (struct fqdir*) ;
 struct inet_frag_queue* FUNC_2 (struct fqdir*,void*,struct inet_frag_queue**) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 struct inet_frag_queue* FUNC_6 (int *,void*,int ) ;

struct inet_frag_queue *FUNC_7(struct fqdir *VAR_0, void *VAR_1)
{
 struct inet_frag_queue *VAR_2 = ((void*)0), *VAR_3;

 if (!VAR_0->high_thresh || FUNC_1(VAR_0) > VAR_0->high_thresh)
  return ((void*)0);

 FUNC_3();

 VAR_3 = FUNC_6(&VAR_0->rhashtable, VAR_1, VAR_0->f->rhash_params);
 if (!VAR_3)
  VAR_2 = FUNC_2(VAR_0, VAR_1, &VAR_3);
 if (!FUNC_0(VAR_3)) {
  VAR_2 = VAR_3;
  if (!FUNC_5(&VAR_2->refcnt))
   VAR_2 = ((void*)0);
 }
 FUNC_4();
 return VAR_2;
}
