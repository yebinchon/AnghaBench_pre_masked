
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {TYPE_2__* tag_set; struct blk_mq_hw_ctx** queue_hw_ctx; } ;
struct blk_mq_hw_ctx {int dummy; } ;
typedef enum hctx_type { ____Placeholder_hctx_type } hctx_type ;
struct TYPE_4__ {TYPE_1__* map; } ;
struct TYPE_3__ {size_t* mq_map; } ;



__attribute__((used)) static inline struct blk_mq_hw_ctx *FUNC_0(struct request_queue *VAR_0,
         enum hctx_type VAR_1,
         unsigned int VAR_2)
{
 return VAR_0->queue_hw_ctx[VAR_0->tag_set->map[VAR_1].mq_map[VAR_2]];
}
