
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_flags {int cookie; int clock_update_flags; } ;
struct rq {scalar_t__ clock_update_flags; int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void FUNC_1(struct rq *VAR_2, struct rq_flags *VAR_3)
{





 FUNC_0(&VAR_2->lock, VAR_3->cookie);
}
