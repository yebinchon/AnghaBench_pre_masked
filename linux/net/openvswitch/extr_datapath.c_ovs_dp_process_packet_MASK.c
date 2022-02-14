
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int upcall ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct vport {struct datapath* dp; } ;
struct TYPE_3__ {int flags; } ;
struct sw_flow_key {TYPE_1__ tp; } ;
struct sw_flow_actions {int dummy; } ;
struct sw_flow {int sf_acts; } ;
struct sk_buff {int dummy; } ;
struct dp_upcall_info {int mru; int portid; int cmd; } ;
struct dp_stats_percpu {int syncp; int n_mask_hit; int n_hit; int n_missed; } ;
struct datapath {int table; int stats_percpu; } ;
struct TYPE_4__ {int mru; struct vport* input_vport; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct dp_upcall_info*,int ,int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct datapath*) ;
 int FUNC_6 (struct datapath*,struct sk_buff*,struct sw_flow_key*,struct dp_upcall_info*,int ) ;
 int FUNC_7 (struct datapath*,struct sk_buff*,struct sw_flow_actions*,struct sw_flow_key*) ;
 int FUNC_8 (struct sw_flow*,int ,struct sk_buff*) ;
 struct sw_flow* FUNC_9 (int *,struct sw_flow_key*,scalar_t__*) ;
 int FUNC_10 (struct vport const*,struct sk_buff*) ;
 struct sw_flow_actions* FUNC_11 (int ) ;
 struct dp_stats_percpu* FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int) ;

void FUNC_16(struct sk_buff *VAR_1, struct sw_flow_key *VAR_2)
{
 const struct vport *VAR_3 = FUNC_0(VAR_1)->input_vport;
 struct datapath *VAR_4 = VAR_3->dp;
 struct sw_flow *VAR_5;
 struct sw_flow_actions *VAR_6;
 struct dp_stats_percpu *VAR_7;
 u64 *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_7 = FUNC_12(VAR_4->stats_percpu);


 VAR_5 = FUNC_9(&VAR_4->table, VAR_2, &VAR_9);
 if (FUNC_15(!VAR_5)) {
  struct dp_upcall_info VAR_11;

  FUNC_3(&VAR_11, 0, sizeof(VAR_11));
  VAR_11.cmd = VAR_0;
  VAR_11.portid = FUNC_10(VAR_3, VAR_1);
  VAR_11.mru = FUNC_0(VAR_1)->mru;
  VAR_10 = FUNC_6(VAR_4, VAR_1, VAR_2, &VAR_11, 0);
  if (FUNC_15(VAR_10))
   FUNC_2(VAR_1);
  else
   FUNC_1(VAR_1);
  VAR_8 = &VAR_7->n_missed;
  goto out;
 }

 FUNC_8(VAR_5, VAR_2->tp.flags, VAR_1);
 VAR_6 = FUNC_11(VAR_5->sf_acts);
 VAR_10 = FUNC_7(VAR_4, VAR_1, VAR_6, VAR_2);
 if (FUNC_15(VAR_10))
  FUNC_4("ovs: action execution error on datapath %s: %d\n",
       FUNC_5(VAR_4), VAR_10);

 VAR_8 = &VAR_7->n_hit;

out:

 FUNC_13(&VAR_7->syncp);
 (*VAR_8)++;
 VAR_7->n_mask_hit += VAR_9;
 FUNC_14(&VAR_7->syncp);
}
