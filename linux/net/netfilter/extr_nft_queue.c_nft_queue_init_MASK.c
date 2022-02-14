
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct nft_queue {int queuenum; int queues_total; int flags; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct nft_queue* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nlattr const* const) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(const struct nft_ctx *VAR_7,
     const struct nft_expr *VAR_8,
     const struct nlattr * const VAR_9[])
{
 struct nft_queue *VAR_10 = FUNC_0(VAR_8);
 u32 VAR_11;

 VAR_10->queuenum = FUNC_2(FUNC_1(VAR_9[VAR_3]));

 if (VAR_9[VAR_4])
  VAR_10->queues_total = FUNC_2(FUNC_1(VAR_9[VAR_4]));
 else
  VAR_10->queues_total = 1;

 if (VAR_10->queues_total == 0)
  return -VAR_0;

 VAR_11 = VAR_10->queues_total - 1 + VAR_10->queuenum;
 if (VAR_11 > VAR_6)
  return -VAR_1;

 if (VAR_9[VAR_2]) {
  VAR_10->flags = FUNC_2(FUNC_1(VAR_9[VAR_2]));
  if (VAR_10->flags & ~VAR_5)
   return -VAR_0;
 }
 return 0;
}
