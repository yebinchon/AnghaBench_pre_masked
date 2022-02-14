
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_queue {int queues_total; int flags; scalar_t__ queuenum; } ;
struct nft_pktinfo {int skb; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int,int ,int ) ;
 struct nft_queue* FUNC_2 (struct nft_expr const*) ;
 int FUNC_3 (struct nft_pktinfo const*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(const struct nft_expr *VAR_4,
      struct nft_regs *VAR_5,
      const struct nft_pktinfo *VAR_6)
{
 struct nft_queue *VAR_7 = FUNC_2(VAR_4);
 u32 VAR_8 = VAR_7->queuenum;
 u32 VAR_9;

 if (VAR_7->queues_total > 1) {
  if (VAR_7->flags & VAR_1) {
   int VAR_10 = FUNC_4();

   VAR_8 = VAR_7->queuenum + VAR_10 % VAR_7->queues_total;
  } else {
   VAR_8 = FUNC_1(VAR_6->skb, VAR_8,
          VAR_7->queues_total, FUNC_3(VAR_6),
          VAR_3);
  }
 }

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_7->flags & VAR_0)
  VAR_9 |= VAR_2;

 VAR_5->verdict.code = VAR_9;
}
