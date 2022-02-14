
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ee_info; } ;
struct sock_exterr_skb {TYPE_1__ ee; } ;
struct rxrpc_peer {int if_mtu; int hdrsize; int mtu; int maxdata; int lock; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rxrpc_peer *VAR_0, struct sock_exterr_skb *VAR_1)
{
 u32 VAR_2 = VAR_1->ee.ee_info;

 FUNC_0("Rx ICMP Fragmentation Needed (%d)", VAR_2);


 if (VAR_2 > 0 && VAR_0->if_mtu == 65535 && VAR_2 < VAR_0->if_mtu) {
  VAR_0->if_mtu = VAR_2;
  FUNC_0("I/F MTU %u", VAR_2);
 }

 if (VAR_2 == 0) {

  VAR_2 = VAR_0->if_mtu;
  if (VAR_2 > 1500) {
   VAR_2 >>= 1;
   if (VAR_2 < 1500)
    VAR_2 = 1500;
  } else {
   VAR_2 -= 100;
   if (VAR_2 < VAR_0->hdrsize)
    VAR_2 = VAR_0->hdrsize + 4;
  }
 }

 if (VAR_2 < VAR_0->mtu) {
  FUNC_1(&VAR_0->lock);
  VAR_0->mtu = VAR_2;
  VAR_0->maxdata = VAR_0->mtu - VAR_0->hdrsize;
  FUNC_2(&VAR_0->lock);
  FUNC_0("Net MTU %u (maxdata %u)",
       VAR_0->mtu, VAR_0->maxdata);
 }
}
