
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* mq_ops; } ;
struct blk_mq_hw_ctx {struct request_queue* queue; } ;
struct TYPE_2__ {int (* put_budget ) (struct blk_mq_hw_ctx*) ;} ;


 int FUNC_0 (struct blk_mq_hw_ctx*) ;

__attribute__((used)) static inline void FUNC_1(struct blk_mq_hw_ctx *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->queue;

 if (VAR_1->mq_ops->put_budget)
  VAR_1->mq_ops->put_budget(VAR_0);
}
