
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; TYPE_6__* dev; } ;
struct nf_hook_state {TYPE_4__* net; int in; } ;
struct net_bridge_port {scalar_t__ state; TYPE_3__* br; } ;
struct TYPE_14__ {int br_netfilter_broute; } ;
struct TYPE_13__ {int dev_addr; } ;
struct TYPE_12__ {unsigned char* h_dest; } ;
struct TYPE_8__ {int broute_table; } ;
struct TYPE_11__ {TYPE_1__ xt; } ;
struct TYPE_10__ {TYPE_2__* dev; } ;
struct TYPE_9__ {int dev_addr; } ;


 TYPE_7__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct net_bridge_port* FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (struct sk_buff*,struct nf_hook_state*,int ) ;
 TYPE_5__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ,unsigned char*) ;
 int FUNC_5 (struct nf_hook_state*,int ,int ,int ,int *,int *,TYPE_4__*,int *) ;

__attribute__((used)) static unsigned int FUNC_6(void *VAR_7, struct sk_buff *VAR_8,
          const struct nf_hook_state *VAR_9)
{
 struct net_bridge_port *VAR_10 = FUNC_1(VAR_8->dev);
 struct nf_hook_state VAR_11;
 unsigned char *VAR_12;
 int VAR_13;

 if (!VAR_10 || VAR_10->state != VAR_0)
  return VAR_2;

 FUNC_5(&VAR_11, VAR_3,
      VAR_1, VAR_9->in, ((void*)0), ((void*)0),
      VAR_9->net, ((void*)0));

 VAR_13 = FUNC_2(VAR_8, &VAR_11, VAR_11.net->xt.broute_table);

 if (VAR_13 != VAR_4)
  return VAR_13;
 FUNC_0(VAR_8)->br_netfilter_broute = 1;




 VAR_12 = FUNC_3(VAR_8)->h_dest;
 if (VAR_8->pkt_type == VAR_5 &&
     !FUNC_4(VAR_8->dev->dev_addr, VAR_12) &&
      FUNC_4(VAR_10->br->dev->dev_addr, VAR_12))
  VAR_8->pkt_type = VAR_6;

 return VAR_2;
}
