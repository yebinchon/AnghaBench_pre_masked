
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ cb; } ;
struct nf_hook_state {int out; struct net_device* in; int sk; int net; } ;
struct net_device {int dummy; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int dummy; } ;
struct brnf_net {int call_arptables; } ;
struct TYPE_2__ {int ar_pln; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,struct sk_buff*,struct net_device*,int ,int ) ;
 unsigned int VAR_4 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_3 (struct net_bridge*,int ) ;
 struct net_bridge_port* FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ) ;
 struct brnf_net* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_9(void *VAR_7,
          struct sk_buff *VAR_8,
          const struct nf_hook_state *VAR_9)
{
 struct net_bridge_port *VAR_10;
 struct net_bridge *VAR_11;
 struct net_device **VAR_12 = (struct net_device **)(VAR_8->cb);
 struct brnf_net *VAR_13;

 VAR_10 = FUNC_4(VAR_9->out);
 if (VAR_10 == ((void*)0))
  return VAR_2;
 VAR_11 = VAR_10->br;

 VAR_13 = FUNC_6(VAR_9->net, VAR_6);
 if (!VAR_13->call_arptables && !FUNC_3(VAR_11, VAR_0))
  return VAR_2;

 if (!FUNC_0(VAR_8)) {
  if (!FUNC_5(VAR_8, VAR_9->net))
   return VAR_2;
  FUNC_7(VAR_8);
 }

 if (FUNC_2(VAR_8)->ar_pln != 4) {
  if (FUNC_5(VAR_8, VAR_9->net))
   FUNC_8(VAR_8);
  return VAR_2;
 }
 *VAR_12 = VAR_9->in;
 FUNC_1(VAR_1, VAR_3, VAR_9->net, VAR_9->sk, VAR_8,
  VAR_9->in, VAR_9->out, VAR_5);

 return VAR_4;
}
