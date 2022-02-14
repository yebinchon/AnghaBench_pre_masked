
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nft_tunnel_obj {TYPE_3__* md; } ;
struct nft_object {int dummy; } ;
struct TYPE_4__ {int ttl; int tos; int tun_id; } ;
struct ip_tunnel_info {TYPE_1__ key; } ;
struct TYPE_5__ {struct ip_tunnel_info tun_info; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nft_tunnel_obj* FUNC_0 (struct nft_object*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct ip_tunnel_info*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct ip_tunnel_info*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct nft_tunnel_obj*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,struct ip_tunnel_info*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct sk_buff *VAR_3,
          struct nft_object *VAR_4, bool VAR_5)
{
 struct nft_tunnel_obj *VAR_6 = FUNC_0(VAR_4);
 struct ip_tunnel_info *VAR_7 = &VAR_6->md->u.tun_info;

 if (FUNC_5(VAR_3, VAR_0,
    FUNC_7(VAR_7->key.tun_id)) ||
     FUNC_2(VAR_3, VAR_7) < 0 ||
     FUNC_4(VAR_3, VAR_7) < 0 ||
     FUNC_1(VAR_3, VAR_7) < 0 ||
     FUNC_6(VAR_3, VAR_1, VAR_7->key.tos) ||
     FUNC_6(VAR_3, VAR_2, VAR_7->key.ttl) ||
     FUNC_3(VAR_3, VAR_6) < 0)
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}
