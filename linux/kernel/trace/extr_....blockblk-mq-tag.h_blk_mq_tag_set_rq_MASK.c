
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct blk_mq_hw_ctx {TYPE_1__* tags; } ;
struct TYPE_2__ {struct request** rqs; } ;



__attribute__((used)) static inline void FUNC_0(struct blk_mq_hw_ctx *VAR_0,
  unsigned int VAR_1, struct request *VAR_2)
{
 VAR_0->tags->rqs[VAR_1] = VAR_2;
}
