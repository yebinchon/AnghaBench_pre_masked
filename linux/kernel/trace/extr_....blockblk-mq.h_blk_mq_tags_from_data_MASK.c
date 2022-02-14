
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct blk_mq_tags {int dummy; } ;
struct blk_mq_alloc_data {int flags; TYPE_1__* hctx; } ;
struct TYPE_2__ {struct blk_mq_tags* tags; struct blk_mq_tags* sched_tags; } ;


 int VAR_0 ;

__attribute__((used)) static inline struct blk_mq_tags *FUNC_0(struct blk_mq_alloc_data *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return VAR_1->hctx->sched_tags;

 return VAR_1->hctx->tags;
}
