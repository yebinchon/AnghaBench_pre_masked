
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int serial; } ;
struct rxrpc_skb_priv {TYPE_1__ hdr; } ;
struct rxrpc_peer {unsigned int maxdata; scalar_t__ mtu; int lock; scalar_t__ hdrsize; } ;
struct rxrpc_call {int tx_winsize; int cong_ssthresh; int waitq; struct rxrpc_peer* peer; } ;
struct rxrpc_ackinfo {int maxMTU; int rxMTU; int rwind; int jumbo_max; } ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__,unsigned int) ;
 int FUNC_1 (char*,int ,int,int,int,int) ;
 unsigned int FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 struct rxrpc_skb_priv* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rxrpc_call*,int ,int,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct rxrpc_call *VAR_1, struct sk_buff *VAR_2,
    struct rxrpc_ackinfo *VAR_3)
{
 struct rxrpc_skb_priv *VAR_4 = FUNC_4(VAR_2);
 struct rxrpc_peer *VAR_5;
 unsigned int VAR_6;
 bool VAR_7 = 0;
 u32 VAR_8 = FUNC_3(VAR_3->rwind);

 FUNC_1("Rx ACK %%%u Info { rx=%u max=%u rwin=%u jm=%u }",
        VAR_4->hdr.serial,
        FUNC_3(VAR_3->rxMTU), FUNC_3(VAR_3->maxMTU),
        VAR_8, FUNC_3(VAR_3->jumbo_max));

 if (VAR_1->tx_winsize != VAR_8) {
  if (VAR_8 > VAR_0 - 1)
   VAR_8 = VAR_0 - 1;
  if (VAR_8 > VAR_1->tx_winsize)
   VAR_7 = 1;
  FUNC_7(VAR_1, VAR_4->hdr.serial,
         FUNC_3(VAR_3->rwind), VAR_7);
  VAR_1->tx_winsize = VAR_8;
 }

 if (VAR_1->cong_ssthresh > VAR_8)
  VAR_1->cong_ssthresh = VAR_8;

 VAR_6 = FUNC_2(FUNC_3(VAR_3->rxMTU), FUNC_3(VAR_3->maxMTU));

 VAR_5 = VAR_1->peer;
 if (VAR_6 < VAR_5->maxdata) {
  FUNC_5(&VAR_5->lock);
  VAR_5->maxdata = VAR_6;
  VAR_5->mtu = VAR_6 + VAR_5->hdrsize;
  FUNC_6(&VAR_5->lock);
  FUNC_0("Net MTU %u (maxdata %u)", VAR_5->mtu, VAR_5->maxdata);
 }

 if (VAR_7)
  FUNC_8(&VAR_1->waitq);
}
