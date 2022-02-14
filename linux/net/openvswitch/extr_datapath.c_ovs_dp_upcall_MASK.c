
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sw_flow_key {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dp_upcall_info {scalar_t__ portid; } ;
struct dp_stats_percpu {int syncp; int n_lost; } ;
struct datapath {int stats_percpu; } ;


 int VAR_0 ;
 int FUNC_0 (struct datapath*,struct sk_buff*,struct sw_flow_key const*,struct dp_upcall_info const*,int ) ;
 int FUNC_1 (struct datapath*,struct sk_buff*,struct sw_flow_key const*,struct dp_upcall_info const*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct dp_stats_percpu* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct datapath *VAR_1, struct sk_buff *VAR_2,
    const struct sw_flow_key *VAR_3,
    const struct dp_upcall_info *VAR_4,
    uint32_t VAR_5)
{
 struct dp_stats_percpu *VAR_6;
 int VAR_7;

 if (VAR_4->portid == 0) {
  VAR_7 = -VAR_0;
  goto err;
 }

 if (!FUNC_2(VAR_2))
  VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 else
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_7)
  goto err;

 return 0;

err:
 VAR_6 = FUNC_3(VAR_1->stats_percpu);

 FUNC_4(&VAR_6->syncp);
 VAR_6->n_lost++;
 FUNC_5(&VAR_6->syncp);

 return VAR_7;
}
