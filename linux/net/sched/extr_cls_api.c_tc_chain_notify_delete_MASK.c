
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct tcf_proto_ops {int dummy; } ;
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
 int VAR_7 ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,struct net*,int ,int ,int) ;
 scalar_t__ FUNC_5 (struct tcf_proto_ops const*,void*,int ,struct net*,struct sk_buff*,struct tcf_block*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_6(const struct tcf_proto_ops *VAR_8,
      void *VAR_9, u32 VAR_10,
      struct tcf_block *VAR_11, struct sk_buff *VAR_12,
      u32 VAR_13, u16 VAR_14, bool VAR_15)
{
 u32 VAR_16 = VAR_12 ? FUNC_0(VAR_12).portid : 0;
 struct net *VAR_17 = VAR_11->net;
 struct sk_buff *VAR_18;

 VAR_18 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_18)
  return -VAR_1;

 if (FUNC_5(VAR_8, VAR_9, VAR_10, VAR_17, VAR_18,
          VAR_11, VAR_16, VAR_13, VAR_14, VAR_6) <= 0) {
  FUNC_2(VAR_18);
  return -VAR_0;
 }

 if (VAR_15)
  return FUNC_3(VAR_17->rtnl, VAR_18, VAR_16, VAR_3);

 return FUNC_4(VAR_18, VAR_17, VAR_16, VAR_7, VAR_14 & VAR_5);
}
