
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udphdr {int dummy; } ;
struct rxrpc_wire_header {int dummy; } ;
struct rxrpc_sock {int dummy; } ;
struct TYPE_3__ {int family; } ;
struct TYPE_4__ {int transport_type; TYPE_1__ transport; } ;
struct rxrpc_peer {unsigned long hash_key; int mtu; int if_mtu; int hdrsize; int maxdata; TYPE_2__ srx; int rtt_last_req; } ;
struct ipv6hdr {int dummy; } ;
struct iphdr {int dummy; } ;




 int FUNC_0 () ;

 int FUNC_1 () ;
 int FUNC_2 (struct rxrpc_sock*,struct rxrpc_peer*) ;

__attribute__((used)) static void FUNC_3(struct rxrpc_sock *VAR_0, struct rxrpc_peer *VAR_1,
       unsigned long VAR_2)
{
 VAR_1->hash_key = VAR_2;
 FUNC_2(VAR_0, VAR_1);
 VAR_1->mtu = VAR_1->if_mtu;
 VAR_1->rtt_last_req = FUNC_1();

 switch (VAR_1->srx.transport.family) {
 case 130:
  VAR_1->hdrsize = sizeof(struct iphdr);
  break;





 default:
  FUNC_0();
 }

 switch (VAR_1->srx.transport_type) {
 case 128:
  VAR_1->hdrsize += sizeof(struct udphdr);
  break;
 default:
  FUNC_0();
 }

 VAR_1->hdrsize += sizeof(struct rxrpc_wire_header);
 VAR_1->maxdata = VAR_1->mtu - VAR_1->hdrsize;
}
