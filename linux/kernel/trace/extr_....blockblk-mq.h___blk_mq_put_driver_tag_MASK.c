
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int tag; int rq_flags; int mq_ctx; } ;
struct blk_mq_hw_ctx {int nr_active; int tags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct blk_mq_hw_ctx*,int ,int ,int) ;

__attribute__((used)) static inline void FUNC_2(struct blk_mq_hw_ctx *VAR_1,
        struct request *VAR_2)
{
 FUNC_1(VAR_1, VAR_1->tags, VAR_2->mq_ctx, VAR_2->tag);
 VAR_2->tag = -1;

 if (VAR_2->rq_flags & VAR_0) {
  VAR_2->rq_flags &= ~VAR_0;
  FUNC_0(&VAR_1->nr_active);
 }
}
