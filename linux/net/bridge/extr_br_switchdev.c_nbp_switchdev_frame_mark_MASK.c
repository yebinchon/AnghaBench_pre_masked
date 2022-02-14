
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ offload_fwd_mark; } ;
struct net_bridge_port {scalar_t__ offload_fwd_mark; } ;
struct TYPE_2__ {scalar_t__ offload_fwd_mark; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;

void FUNC_2(const struct net_bridge_port *VAR_0,
         struct sk_buff *VAR_1)
{
 if (VAR_1->offload_fwd_mark && !FUNC_1(!VAR_0->offload_fwd_mark))
  FUNC_0(VAR_1)->offload_fwd_mark = VAR_0->offload_fwd_mark;
}
