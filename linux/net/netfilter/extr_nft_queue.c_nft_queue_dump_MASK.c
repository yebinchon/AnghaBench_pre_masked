
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_queue {int flags; int queues_total; int queuenum; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct nft_queue* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3, const struct nft_expr *VAR_4)
{
 const struct nft_queue *VAR_5 = FUNC_1(VAR_4);

 if (FUNC_2(VAR_3, VAR_1, FUNC_0(VAR_5->queuenum)) ||
     FUNC_2(VAR_3, VAR_2, FUNC_0(VAR_5->queues_total)) ||
     FUNC_2(VAR_3, VAR_0, FUNC_0(VAR_5->flags)))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
