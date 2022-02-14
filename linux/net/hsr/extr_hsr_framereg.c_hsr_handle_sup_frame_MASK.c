
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct list_head {int dummy; } ;
struct hsrv1_ethhdr_sp {int dummy; } ;
struct hsr_tag {int dummy; } ;
struct hsr_sup_tag {int dummy; } ;
struct hsr_sup_payload {int macaddress_A; } ;
struct hsr_port {int type; TYPE_1__* hsr; } ;
struct hsr_node {int mac_list; int addr_B_port; int * seq_out; scalar_t__* time_in_stale; int * time_in; int macaddress_B; } ;
struct ethhdr {scalar_t__ h_proto; int h_source; } ;
struct TYPE_2__ {struct list_head node_db; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct hsr_node* FUNC_1 (struct list_head*,int ) ;
 struct hsr_node* FUNC_2 (struct list_head*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct hsr_node*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (int ,int ) ;

void FUNC_11(struct sk_buff *VAR_4, struct hsr_node *VAR_5,
     struct hsr_port *VAR_6)
{
 struct ethhdr *VAR_7;
 struct hsr_node *VAR_8;
 struct hsr_sup_payload *VAR_9;
 struct list_head *VAR_10;
 int VAR_11;

 VAR_7 = (struct ethhdr *)FUNC_7(VAR_4);


 FUNC_8(VAR_4, sizeof(struct ethhdr));


 if (VAR_7->h_proto == FUNC_3(VAR_0))
  FUNC_8(VAR_4, sizeof(struct hsr_tag));


 FUNC_8(VAR_4, sizeof(struct hsr_sup_tag));

 VAR_9 = (struct hsr_sup_payload *)VAR_4->data;


 VAR_10 = &VAR_6->hsr->node_db;
 VAR_8 = FUNC_1(VAR_10, VAR_9->macaddress_A);
 if (!VAR_8)

  VAR_8 = FUNC_2(VAR_10, VAR_9->macaddress_A,
      VAR_2 - 1);
 if (!VAR_8)
  goto done;
 if (VAR_8 == VAR_5)

  goto done;

 FUNC_0(VAR_8->macaddress_B, VAR_7->h_source);
 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  if (!VAR_5->time_in_stale[VAR_11] &&
      FUNC_10(VAR_5->time_in[VAR_11], VAR_8->time_in[VAR_11])) {
   VAR_8->time_in[VAR_11] = VAR_5->time_in[VAR_11];
   VAR_8->time_in_stale[VAR_11] =
      VAR_5->time_in_stale[VAR_11];
  }
  if (FUNC_6(VAR_5->seq_out[VAR_11], VAR_8->seq_out[VAR_11]))
   VAR_8->seq_out[VAR_11] = VAR_5->seq_out[VAR_11];
 }
 VAR_8->addr_B_port = VAR_6->type;

 FUNC_5(&VAR_5->mac_list);
 FUNC_4(VAR_5, VAR_3);

done:
 FUNC_9(VAR_4, sizeof(struct hsrv1_ethhdr_sp));
}
