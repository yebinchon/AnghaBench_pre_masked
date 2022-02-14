
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_flags {int clock_update_flags; int cookie; } ;
struct rq {int clock_update_flags; int lock; } ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static inline void FUNC_1(struct rq *VAR_0, struct rq_flags *VAR_1)
{
 FUNC_0(&VAR_0->lock, VAR_1->cookie);







}
