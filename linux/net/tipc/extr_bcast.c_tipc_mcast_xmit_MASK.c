
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tipc_nlist {scalar_t__ local; scalar_t__ remote; } ;
struct tipc_msg {int dummy; } ;
struct tipc_mc_method {int rcast; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 struct tipc_msg* FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*,int) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 struct sk_buff* FUNC_6 (struct sk_buff_head*) ;
 int FUNC_7 (struct sk_buff_head*) ;
 int FUNC_8 (struct net*,scalar_t__,struct tipc_mc_method*) ;
 int FUNC_9 (struct net*,struct sk_buff_head*,int *) ;
 int FUNC_10 (struct net*,struct sk_buff_head*) ;
 int FUNC_11 (struct net*,struct sk_buff*,struct tipc_mc_method*,struct tipc_nlist*,int *) ;
 int FUNC_12 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_13 (struct net*,struct sk_buff_head*,struct tipc_nlist*,int *) ;
 int FUNC_14 (struct net*,struct sk_buff_head*,struct sk_buff_head*) ;

int FUNC_15(struct net *VAR_2, struct sk_buff_head *VAR_3,
      struct tipc_mc_method *VAR_4, struct tipc_nlist *VAR_5,
      u16 *VAR_6)
{
 struct sk_buff_head VAR_7, VAR_8;
 bool VAR_9 = VAR_4->rcast;
 struct tipc_msg *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12 = 0;

 FUNC_7(&VAR_7);
 FUNC_0(&VAR_8);


 if (VAR_5->local && !FUNC_12(VAR_3, &VAR_8)) {
  VAR_12 = -VAR_0;
  goto exit;
 }

 if (VAR_5->remote) {
  FUNC_8(VAR_2, VAR_5->remote, VAR_4);

  VAR_11 = FUNC_6(VAR_3);
  VAR_10 = FUNC_2(VAR_11);
  if (FUNC_5(VAR_10) == VAR_1)
   VAR_10 = FUNC_3(VAR_10);
  FUNC_4(VAR_10, VAR_4->rcast);


  if (VAR_9 != VAR_4->rcast)
   FUNC_11(VAR_2, VAR_11, VAR_4,
          VAR_5, VAR_6);

  if (VAR_4->rcast)
   VAR_12 = FUNC_13(VAR_2, VAR_3, VAR_5, VAR_6);
  else
   VAR_12 = FUNC_9(VAR_2, VAR_3, VAR_6);
 }

 if (VAR_5->local) {
  FUNC_10(VAR_2, &VAR_8);
  FUNC_14(VAR_2, &VAR_8, &VAR_7);
 }
exit:

 FUNC_1(VAR_3);
 return VAR_12;
}
