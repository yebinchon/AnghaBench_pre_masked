
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; int * data; } ;
struct nft_queue {size_t sreg_qnum; int flags; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 struct nft_queue* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_2,
    struct nft_regs *VAR_3,
    const struct nft_pktinfo *VAR_4)
{
 struct nft_queue *VAR_5 = FUNC_1(VAR_2);
 u32 VAR_6, VAR_7;

 VAR_6 = VAR_3->data[VAR_5->sreg_qnum];

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_5->flags & VAR_0)
  VAR_7 |= VAR_1;

 VAR_3->verdict.code = VAR_7;
}
