
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct lwtunnel_state {int dummy; } ;
struct TYPE_4__ {int src; int dst; } ;
struct TYPE_5__ {TYPE_1__ ipv6; } ;
struct TYPE_6__ {int tun_flags; int ttl; int tos; TYPE_2__ u; int tun_id; } ;
struct ip_tunnel_info {TYPE_3__ key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ip_tunnel_info* FUNC_0 (struct lwtunnel_state*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_8,
       struct lwtunnel_state *VAR_9)
{
 struct ip_tunnel_info *VAR_10 = FUNC_0(VAR_9);

 if (FUNC_2(VAR_8, VAR_4, VAR_10->key.tun_id,
    VAR_5) ||
     FUNC_3(VAR_8, VAR_1, &VAR_10->key.u.ipv6.dst) ||
     FUNC_3(VAR_8, VAR_6, &VAR_10->key.u.ipv6.src) ||
     FUNC_4(VAR_8, VAR_7, VAR_10->key.tos) ||
     FUNC_4(VAR_8, VAR_3, VAR_10->key.ttl) ||
     FUNC_1(VAR_8, VAR_2, VAR_10->key.tun_flags))
  return -VAR_0;

 return 0;
}
