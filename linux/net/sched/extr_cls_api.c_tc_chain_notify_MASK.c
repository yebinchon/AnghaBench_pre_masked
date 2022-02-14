
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcf_chain {int index; int tmplt_priv; int tmplt_ops; struct tcf_block* block; } ;
struct tcf_block {struct net* net; } ;
struct sk_buff {int dummy; } ;
struct net {int rtnl; } ;
struct TYPE_2__ {int portid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ,int ,struct net*,struct sk_buff*,struct tcf_block*,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct tcf_chain *VAR_7, struct sk_buff *VAR_8,
      u32 VAR_9, u16 VAR_10, int VAR_11, bool VAR_12)
{
 u32 VAR_13 = VAR_8 ? FUNC_0(VAR_8).portid : 0;
 struct tcf_block *VAR_14 = VAR_7->block;
 struct net *VAR_15 = VAR_14->net;
 struct sk_buff *VAR_16;
 int VAR_17 = 0;

 VAR_16 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_16)
  return -VAR_1;

 if (FUNC_5(VAR_7->tmplt_ops, VAR_7->tmplt_priv,
          VAR_7->index, VAR_15, VAR_16, VAR_14, VAR_13,
          VAR_9, VAR_10, VAR_11) <= 0) {
  FUNC_2(VAR_16);
  return -VAR_0;
 }

 if (VAR_12)
  VAR_17 = FUNC_3(VAR_15->rtnl, VAR_16, VAR_13, VAR_3);
 else
  VAR_17 = FUNC_4(VAR_16, VAR_15, VAR_13, VAR_6,
         VAR_10 & VAR_5);

 if (VAR_17 > 0)
  VAR_17 = 0;
 return VAR_17;
}
