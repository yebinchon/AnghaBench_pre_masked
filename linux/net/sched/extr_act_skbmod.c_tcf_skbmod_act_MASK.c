
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct tcf_skbmod_params {int flags; int eth_type; int * eth_src; int * eth_dst; } ;
struct TYPE_3__ {int cpu_qstats; int cpu_bstats; } ;
struct tcf_skbmod {TYPE_1__ common; int skbmod_p; int tcf_action; int tcf_tm; } ;
struct tcf_result {int dummy; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int * h_source; int * h_dest; int h_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,struct sk_buff*) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 struct tcf_skbmod_params* FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct tcf_skbmod* FUNC_9 (struct tc_action const*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_7, const struct tc_action *VAR_8,
     struct tcf_result *VAR_9)
{
 struct tcf_skbmod *VAR_10 = FUNC_9(VAR_8);
 int VAR_11;
 struct tcf_skbmod_params *VAR_12;
 u64 VAR_13;
 int VAR_14;

 FUNC_7(&VAR_10->tcf_tm);
 FUNC_1(FUNC_8(VAR_10->common.cpu_bstats), VAR_7);





 VAR_14 = FUNC_6(VAR_7, VAR_1);
 if (FUNC_10(VAR_14))
  goto drop;

 VAR_11 = FUNC_0(VAR_10->tcf_action);
 if (FUNC_10(VAR_11 == VAR_6))
  goto drop;

 VAR_12 = FUNC_5(VAR_10->skbmod_p);
 VAR_13 = VAR_12->flags;
 if (VAR_13 & VAR_2)
  FUNC_3(FUNC_2(VAR_7)->h_dest, VAR_12->eth_dst);
 if (VAR_13 & VAR_4)
  FUNC_3(FUNC_2(VAR_7)->h_source, VAR_12->eth_src);
 if (VAR_13 & VAR_3)
  FUNC_2(VAR_7)->h_proto = VAR_12->eth_type;

 if (VAR_13 & VAR_5) {
  u16 VAR_15[VAR_0 / 2];

  FUNC_3((u8 *)VAR_15, FUNC_2(VAR_7)->h_dest);
  FUNC_3(FUNC_2(VAR_7)->h_dest, FUNC_2(VAR_7)->h_source);
  FUNC_3(FUNC_2(VAR_7)->h_source, (u8 *)VAR_15);
 }

 return VAR_11;

drop:
 FUNC_4(FUNC_8(VAR_10->common.cpu_qstats));
 return VAR_6;
}
