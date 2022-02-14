
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct worker_pool {int nr_running; } ;
struct worker {scalar_t__ task; unsigned int flags; struct worker_pool* pool; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void FUNC_2(struct worker *VAR_2, unsigned int VAR_3)
{
 struct worker_pool *VAR_4 = VAR_2->pool;

 FUNC_0(VAR_2->task != VAR_1);


 if ((VAR_3 & VAR_0) &&
     !(VAR_2->flags & VAR_0)) {
  FUNC_1(&VAR_4->nr_running);
 }

 VAR_2->flags |= VAR_3;
}
