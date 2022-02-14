
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_msg_zcopy_queue {int zcookie_head; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct rds_msg_zcopy_queue *VAR_0)
{
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_0->zcookie_head);
}
