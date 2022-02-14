
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hsr_port {TYPE_2__* dev; } ;
struct hsr_frame_info {int node_src; TYPE_1__* port_rcv; } ;
struct TYPE_6__ {int h_source; } ;
struct TYPE_5__ {int dev_addr; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 TYPE_3__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct sk_buff*,struct hsr_port*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct hsr_port *VAR_2,
      struct hsr_frame_info *VAR_3)
{
 if (VAR_3->port_rcv->type == VAR_0) {
  FUNC_3(VAR_3->node_src, VAR_1, VAR_2);




  FUNC_2(FUNC_1(VAR_1)->h_source, VAR_2->dev->dev_addr);
 }
 return FUNC_0(VAR_1);
}
