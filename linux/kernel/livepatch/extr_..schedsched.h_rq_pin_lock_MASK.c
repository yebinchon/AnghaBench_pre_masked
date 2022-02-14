
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_flags {scalar_t__ clock_update_flags; int cookie; } ;
struct rq {int clock_update_flags; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct rq *VAR_2, struct rq_flags *VAR_3)
{
 VAR_3->cookie = FUNC_0(&VAR_2->lock);





}
