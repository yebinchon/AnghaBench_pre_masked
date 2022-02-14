
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct hsr_port {TYPE_1__* hsr; } ;
struct hsr_frame_info {int is_vlan; struct hsr_port* port_rcv; int sequence_nr; struct sk_buff* skb_hsr; struct sk_buff* skb_std; int node_src; int is_supervision; } ;
struct ethhdr {scalar_t__ h_proto; } ;
struct TYPE_3__ {int seqnr_lock; int sequence_nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_1__*,struct sk_buff*,struct hsr_frame_info*) ;
 int FUNC_2 (struct hsr_port*,struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_9(struct hsr_frame_info *VAR_3,
          struct sk_buff *VAR_4, struct hsr_port *VAR_5)
{
 struct ethhdr *VAR_6;
 unsigned long VAR_7;

 VAR_3->is_supervision = FUNC_5(VAR_5->hsr, VAR_4);
 VAR_3->node_src = FUNC_2(VAR_5, VAR_4, VAR_3->is_supervision);
 if (!VAR_3->node_src)
  return -1;

 VAR_6 = (struct ethhdr *)FUNC_6(VAR_4);
 VAR_3->is_vlan = 0;
 if (VAR_6->h_proto == FUNC_4(VAR_0)) {
  VAR_3->is_vlan = 1;

  FUNC_0(1, "HSR: VLAN not yet supported");
 }
 if (VAR_6->h_proto == FUNC_4(VAR_2) ||
     VAR_6->h_proto == FUNC_4(VAR_1)) {
  VAR_3->skb_std = ((void*)0);
  VAR_3->skb_hsr = VAR_4;
  VAR_3->sequence_nr = FUNC_3(VAR_4);
 } else {
  VAR_3->skb_std = VAR_4;
  VAR_3->skb_hsr = ((void*)0);

  FUNC_7(&VAR_5->hsr->seqnr_lock, VAR_7);
  VAR_3->sequence_nr = VAR_5->hsr->sequence_nr;
  VAR_5->hsr->sequence_nr++;
  FUNC_8(&VAR_5->hsr->seqnr_lock, VAR_7);
 }

 VAR_3->port_rcv = VAR_5;
 FUNC_1(VAR_5->hsr, VAR_4, VAR_3);

 return 0;
}
