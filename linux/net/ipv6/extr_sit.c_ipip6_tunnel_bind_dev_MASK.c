
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net_device {scalar_t__ mtu; scalar_t__ hard_header_len; int flags; } ;
struct iphdr {int tos; int saddr; scalar_t__ daddr; } ;
struct TYPE_4__ {scalar_t__ link; struct iphdr iph; } ;
struct ip_tunnel {int hlen; TYPE_2__ parms; int net; } ;
struct flowi4 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct rtable*) ;
 int FUNC_1 (int ) ;
 struct net_device* FUNC_2 (int ,scalar_t__) ;
 struct rtable* FUNC_3 (int ,struct flowi4*,int *,scalar_t__,int ,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_4 (struct rtable*) ;
 struct ip_tunnel* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_3)
{
 struct net_device *VAR_4 = ((void*)0);
 struct ip_tunnel *VAR_5;
 const struct iphdr *VAR_6;
 struct flowi4 VAR_7;

 VAR_5 = FUNC_5(VAR_3);
 VAR_6 = &VAR_5->parms.iph;

 if (VAR_6->daddr) {
  struct rtable *VAR_8 = FUNC_3(VAR_5->net, &VAR_7,
         ((void*)0),
         VAR_6->daddr, VAR_6->saddr,
         0, 0,
         VAR_1,
         FUNC_1(VAR_6->tos),
         VAR_5->parms.link);

  if (!FUNC_0(VAR_8)) {
   VAR_4 = VAR_8->dst.dev;
   FUNC_4(VAR_8);
  }
  VAR_3->flags |= VAR_0;
 }

 if (!VAR_4 && VAR_5->parms.link)
  VAR_4 = FUNC_2(VAR_5->net, VAR_5->parms.link);

 if (VAR_4 && !FUNC_6(VAR_4)) {
  int VAR_9 = VAR_5->hlen + sizeof(struct iphdr);

  VAR_3->hard_header_len = VAR_4->hard_header_len + sizeof(struct iphdr);
  VAR_3->mtu = VAR_4->mtu - VAR_9;
  if (VAR_3->mtu < VAR_2)
   VAR_3->mtu = VAR_2;
 }
}
