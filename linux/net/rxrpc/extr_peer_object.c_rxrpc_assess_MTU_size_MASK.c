
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rxrpc_sock {int sk; } ;
struct TYPE_10__ {int sin6_addr; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {TYPE_2__ sin_addr; } ;
struct TYPE_11__ {int family; TYPE_4__ sin6; TYPE_3__ sin; } ;
struct TYPE_12__ {TYPE_5__ transport; } ;
struct rxrpc_peer {int if_mtu; TYPE_6__ srx; } ;
struct dst_entry {int error; } ;
struct rtable {struct dst_entry dst; } ;
struct net {int dummy; } ;
struct in6_addr {int dummy; } ;
struct flowi6 {void* fl6_sport; void* fl6_dport; int daddr; int flowi6_proto; int flowi6_scope; int flowi6_iif; } ;
struct flowi4 {int dummy; } ;
struct TYPE_7__ {struct flowi6 ip6; struct flowi4 ip4; } ;
struct flowi {TYPE_1__ u; } ;
typedef int fl ;




 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct rtable*) ;
 int VAR_1 ;
 int FUNC_2 (struct rtable*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct dst_entry*) ;
 void* FUNC_6 (int) ;
 struct dst_entry* FUNC_7 (struct net*,int *,struct flowi6*) ;
 struct rtable* FUNC_8 (struct net*,struct flowi4*,int *,int ,int ,void*,void*,int ,int ,int ) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (struct flowi*,int ,int) ;
 struct net* FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct rxrpc_sock *VAR_3,
      struct rxrpc_peer *VAR_4)
{
 struct net *VAR_5 = FUNC_11(&VAR_3->sk);
 struct dst_entry *VAR_6;
 struct rtable *VAR_7;
 struct flowi VAR_8;
 struct flowi4 *VAR_9 = &VAR_8.u.ip4;




 VAR_4->if_mtu = 1500;

 FUNC_10(&VAR_8, 0, sizeof(VAR_8));
 switch (VAR_4->srx.transport.family) {
 case 129:
  VAR_7 = FUNC_8(
   VAR_5, VAR_9, ((void*)0),
   VAR_4->srx.transport.sin.sin_addr.s_addr, 0,
   FUNC_6(7000), FUNC_6(7001), VAR_0, 0, 0);
  if (FUNC_1(VAR_7)) {
   FUNC_3(" [route err %ld]", FUNC_2(VAR_7));
   return;
  }
  VAR_6 = &VAR_7->dst;
  break;
 default:
  FUNC_0();
 }

 VAR_4->if_mtu = FUNC_4(VAR_6);
 FUNC_5(VAR_6);

 FUNC_3(" [if_mtu %u]", VAR_4->if_mtu);
}
