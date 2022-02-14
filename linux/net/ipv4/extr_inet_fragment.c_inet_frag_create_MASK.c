
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_frags {int rhash_params; } ;
struct inet_frag_queue {int flags; int node; int key; int timer; } ;
struct fqdir {int rhashtable; scalar_t__ timeout; struct inet_frags* f; } ;


 int VAR_0 ;
 struct inet_frag_queue* FUNC_0 (int ) ;
 int VAR_1 ;
 struct inet_frag_queue* FUNC_1 (struct fqdir*,struct inet_frags*,void*) ;
 int FUNC_2 (struct inet_frag_queue*) ;
 int FUNC_3 (struct inet_frag_queue*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *,scalar_t__) ;
 struct inet_frag_queue* FUNC_5 (int *,int *,int *,int ) ;

__attribute__((used)) static struct inet_frag_queue *FUNC_6(struct fqdir *VAR_3,
      void *VAR_4,
      struct inet_frag_queue **VAR_5)
{
 struct inet_frags *VAR_6 = VAR_3->f;
 struct inet_frag_queue *VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_6, VAR_4);
 if (!VAR_7) {
  *VAR_5 = FUNC_0(-VAR_0);
  return ((void*)0);
 }
 FUNC_4(&VAR_7->timer, VAR_2 + VAR_3->timeout);

 *VAR_5 = FUNC_5(&VAR_3->rhashtable, &VAR_7->key,
       &VAR_7->node, VAR_6->rhash_params);
 if (*VAR_5) {
  VAR_7->flags |= VAR_1;
  FUNC_3(VAR_7);
  FUNC_2(VAR_7);
  return ((void*)0);
 }
 return VAR_7;
}
