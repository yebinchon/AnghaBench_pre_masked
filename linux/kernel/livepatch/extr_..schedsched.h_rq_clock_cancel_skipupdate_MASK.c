
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq {int clock_update_flags; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct rq *VAR_1)
{
 FUNC_0(&VAR_1->lock);
 VAR_1->clock_update_flags &= ~VAR_0;
}
