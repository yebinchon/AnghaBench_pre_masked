
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct iphdr {int protocol; } ;
struct TYPE_2__ {int o_flags; int o_key; } ;
struct ip_tunnel {int o_seqno; TYPE_1__ parms; int tun_hlen; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int ,int,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*,struct iphdr const*,int ) ;
 struct ip_tunnel* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_1, struct net_device *VAR_2,
         const struct iphdr *VAR_3,
         __be16 VAR_4)
{
 struct ip_tunnel *VAR_5 = FUNC_3(VAR_2);

 if (VAR_5->parms.o_flags & VAR_0)
  VAR_5->o_seqno++;


 FUNC_0(VAR_1, VAR_5->tun_hlen,
    VAR_5->parms.o_flags, VAR_4, VAR_5->parms.o_key,
    FUNC_1(VAR_5->o_seqno));

 FUNC_2(VAR_1, VAR_2, VAR_3, VAR_3->protocol);
}
