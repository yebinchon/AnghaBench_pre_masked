
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct lwtunnel_state {size_t type; } ;
struct lwtunnel_encap_ops {int (* output ) (struct net*,struct sock*,struct sk_buff*) ;} ;
struct dst_entry {struct lwtunnel_state* lwtstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_4 ;
 struct lwtunnel_encap_ops* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct dst_entry* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct net*,struct sock*,struct sk_buff*) ;

int FUNC_7(struct net *VAR_5, struct sock *VAR_6, struct sk_buff *VAR_7)
{
 struct dst_entry *VAR_8 = FUNC_5(VAR_7);
 const struct lwtunnel_encap_ops *VAR_9;
 struct lwtunnel_state *VAR_10;
 int VAR_11 = -VAR_0;

 if (!VAR_8)
  goto drop;
 VAR_10 = VAR_8->lwtstate;

 if (VAR_10->type == VAR_3 ||
     VAR_10->type > VAR_2)
  return 0;

 VAR_11 = -VAR_1;
 FUNC_3();
 VAR_9 = FUNC_2(VAR_4[VAR_10->type]);
 if (FUNC_1(VAR_9 && VAR_9->output))
  VAR_11 = VAR_9->output(VAR_5, VAR_6, VAR_7);
 FUNC_4();

 if (VAR_11 == -VAR_1)
  goto drop;

 return VAR_11;

drop:
 FUNC_0(VAR_7);

 return VAR_11;
}
