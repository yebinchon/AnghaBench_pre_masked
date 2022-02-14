
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nf_bridge_frag_data {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct nf_bridge_frag_data const*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_0, struct sock *VAR_1,
        const struct nf_bridge_frag_data *VAR_2,
        struct sk_buff *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_0, VAR_1, VAR_3);
}
