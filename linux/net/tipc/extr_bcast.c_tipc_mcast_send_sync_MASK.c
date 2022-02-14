
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tipc_nlist {int dummy; } ;
struct tipc_msg {int dummy; } ;
struct tipc_mc_method {scalar_t__ rcast; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_3 (struct sk_buff*) ;
 struct tipc_msg* FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,int) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 scalar_t__ FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct sk_buff*,struct tipc_msg*,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct net*,struct sk_buff_head*,int *) ;
 struct sk_buff* FUNC_14 (int ,int ) ;
 TYPE_1__* FUNC_15 (struct net*) ;
 int FUNC_16 (struct net*,struct sk_buff_head*,struct tipc_nlist*,int *) ;

__attribute__((used)) static int FUNC_17(struct net *VAR_6, struct sk_buff *VAR_7,
    struct tipc_mc_method *VAR_8,
    struct tipc_nlist *VAR_9,
    u16 *VAR_10)
{
 struct tipc_msg *VAR_11, *VAR_12;
 struct sk_buff_head VAR_13;
 struct sk_buff *VAR_14;


 if (!(FUNC_15(VAR_6)->capabilities & VAR_5))
  return 0;

 VAR_11 = FUNC_3(VAR_7);
 if (FUNC_10(VAR_11) == VAR_3)
  VAR_11 = FUNC_4(VAR_11);
 if (FUNC_9(VAR_11) != VAR_4)
  return 0;


 VAR_14 = FUNC_14(VAR_2, VAR_1);
 if (!VAR_14)
  return -VAR_0;


 FUNC_8(VAR_11, 1);


 FUNC_11(VAR_14, VAR_11, VAR_2);
 FUNC_12(VAR_14);


 VAR_12 = FUNC_3(VAR_14);
 FUNC_7(VAR_12, VAR_2);
 FUNC_6(VAR_12, !FUNC_5(VAR_11));

 FUNC_0(&VAR_13);
 FUNC_2(&VAR_13, VAR_14);
 if (VAR_8->rcast)
  FUNC_13(VAR_6, &VAR_13, VAR_10);
 else
  FUNC_16(VAR_6, &VAR_13, VAR_9, VAR_10);


 FUNC_1(&VAR_13);

 return 0;
}
