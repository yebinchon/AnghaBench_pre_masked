
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct net_device* dev; } ;
struct rtable {TYPE_1__ dst; } ;
struct net_device {scalar_t__ type; int hard_header_len; int needed_headroom; int mtu; int flags; } ;
struct iphdr {int tos; int saddr; scalar_t__ daddr; int protocol; } ;
struct TYPE_4__ {scalar_t__ link; int o_key; struct iphdr iph; } ;
struct ip_tunnel {int hlen; TYPE_2__ parms; int net; int dst_cache; int fwmark; } ;
struct flowi4 {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtable*) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct net_device* FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 struct rtable* FUNC_4 (int ,struct flowi4*) ;
 int FUNC_5 (struct rtable*) ;
 int FUNC_6 (struct flowi4*,int ,scalar_t__,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 struct ip_tunnel* FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6)
{
 struct net_device *VAR_7 = ((void*)0);
 struct ip_tunnel *VAR_8 = FUNC_8(VAR_6);
 const struct iphdr *VAR_9;
 int VAR_10 = VAR_5;
 int VAR_11 = VAR_1;
 int VAR_12 = VAR_8->hlen + sizeof(struct iphdr);

 VAR_9 = &VAR_8->parms.iph;


 if (VAR_9->daddr) {
  struct flowi4 VAR_13;
  struct rtable *VAR_14;

  FUNC_6(&VAR_13, VAR_9->protocol, VAR_9->daddr,
        VAR_9->saddr, VAR_8->parms.o_key,
        FUNC_1(VAR_9->tos), VAR_8->parms.link,
        VAR_8->fwmark, 0);
  VAR_14 = FUNC_4(VAR_8->net, &VAR_13);

  if (!FUNC_0(VAR_14)) {
   VAR_7 = VAR_14->dst.dev;
   FUNC_5(VAR_14);
  }
  if (VAR_6->type != VAR_0)
   VAR_6->flags |= VAR_2;

  FUNC_3(&VAR_8->dst_cache);
 }

 if (!VAR_7 && VAR_8->parms.link)
  VAR_7 = FUNC_2(VAR_8->net, VAR_8->parms.link);

 if (VAR_7) {
  VAR_10 = VAR_7->hard_header_len + VAR_7->needed_headroom;
  VAR_11 = FUNC_7(VAR_7->mtu, VAR_4);
 }

 VAR_6->needed_headroom = VAR_12 + VAR_10;
 VAR_11 -= (VAR_6->hard_header_len + VAR_12);

 if (VAR_11 < VAR_3)
  VAR_11 = VAR_3;

 return VAR_11;
}
