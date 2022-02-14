
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rq {int clock_task; int lock; } ;


 int FUNC_0 (struct rq*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline u64 FUNC_2(struct rq *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0);

 return VAR_0->clock_task;
}
