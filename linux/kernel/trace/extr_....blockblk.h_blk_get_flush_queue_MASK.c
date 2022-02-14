
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct blk_mq_ctx {int dummy; } ;
struct blk_flush_queue {int dummy; } ;
struct TYPE_2__ {struct blk_flush_queue* fq; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct request_queue*,int ,struct blk_mq_ctx*) ;

__attribute__((used)) static inline struct blk_flush_queue *
FUNC_1(struct request_queue *VAR_1, struct blk_mq_ctx *VAR_2)
{
 return FUNC_0(VAR_1, VAR_0, VAR_2)->fq;
}
