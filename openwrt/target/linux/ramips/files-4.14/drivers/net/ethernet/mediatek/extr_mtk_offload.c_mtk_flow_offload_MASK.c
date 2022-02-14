
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int time_stamp; int psn; } ;
struct mtk_foe_entry {TYPE_2__ bfib1; } ;
struct mtk_eth {int * foe_flow_table; } ;
struct flow_offload_tuple {scalar_t__ l4proto; int l3proto; } ;
struct flow_offload_hw_path {int eth_dest; int eth_src; } ;
struct flow_offload {TYPE_1__* tuplehash; } ;
typedef enum flow_offload_type { ____Placeholder_flow_offload_type } flow_offload_type ;
struct TYPE_3__ {struct flow_offload_tuple tuple; } ;




 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mtk_eth*,int) ;
 int FUNC_1 (struct flow_offload_tuple*) ;
 int FUNC_2 (struct mtk_foe_entry*,struct flow_offload_tuple*,struct flow_offload_tuple*,struct flow_offload_hw_path*,struct flow_offload_hw_path*) ;
 int FUNC_3 (struct mtk_foe_entry*,int ,int ) ;
 int FUNC_4 (struct mtk_eth*,int,struct mtk_foe_entry*) ;
 int FUNC_5 (struct mtk_eth*,int) ;
 int FUNC_6 (int ,struct flow_offload*) ;
 int FUNC_7 () ;

int FUNC_8(struct mtk_eth *VAR_6,
       enum flow_offload_type VAR_7,
       struct flow_offload *VAR_8,
       struct flow_offload_hw_path *VAR_9,
       struct flow_offload_hw_path *VAR_10)
{
 struct flow_offload_tuple *VAR_11 = &VAR_8->tuplehash[VAR_2].tuple;
 struct flow_offload_tuple *VAR_12 = &VAR_8->tuplehash[VAR_3].tuple;
 u32 VAR_13 = FUNC_5(VAR_6, 0x0010) & (0x7fff);
 u32 VAR_14, VAR_15;
 struct mtk_foe_entry VAR_16 = {
  .bfib1.time_stamp = VAR_13,
  .bfib1.psn = 0,
 };
 struct mtk_foe_entry VAR_17 = {
  .bfib1.time_stamp = VAR_13,
  .bfib1.psn = 0,
 };

 if (VAR_11->l4proto != VAR_4 && VAR_11->l4proto != VAR_5)
  return -VAR_0;

 if (VAR_7 == VAR_1) {
  VAR_8 = ((void*)0);
  FUNC_7();
  return 0;
 }

 switch (VAR_11->l3proto) {
 case 129:
  if (FUNC_2(&VAR_16, VAR_11, VAR_12, VAR_9, VAR_10) ||
      FUNC_2(&VAR_17, VAR_12, VAR_11, VAR_10, VAR_9))
   return -VAR_0;

  VAR_14 = FUNC_1(VAR_11);
  VAR_15 = FUNC_1(VAR_12);
  break;

 case 128:
  return -VAR_0;

 default:
  return -VAR_0;
 }


 if (!FUNC_0(VAR_6, VAR_14)){
  if (!FUNC_0(VAR_6, VAR_14 + 1))
   return -VAR_0;
                VAR_14 += 1;
        }
        if (!FUNC_0(VAR_6, VAR_15)){
  if (!FUNC_0(VAR_6, VAR_15 + 1))
                        return -VAR_0;
                VAR_15 += 1;
 }

 FUNC_3(&VAR_16, VAR_10->eth_src, VAR_10->eth_dest);
 FUNC_3(&VAR_17, VAR_9->eth_src, VAR_9->eth_dest);
 FUNC_4(VAR_6, VAR_14, &VAR_16);
 FUNC_4(VAR_6, VAR_15, &VAR_17);
 FUNC_6(VAR_6->foe_flow_table[VAR_14], VAR_8);
 FUNC_6(VAR_6->foe_flow_table[VAR_15], VAR_8);

 return 0;
}
