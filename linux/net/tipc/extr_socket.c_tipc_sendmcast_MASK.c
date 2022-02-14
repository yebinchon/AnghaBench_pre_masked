
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_mc_method {int dummy; } ;
struct tipc_msg {int dummy; } ;
struct tipc_sock {int cong_link_cnt; scalar_t__ group; struct tipc_mc_method mc_method; struct tipc_msg phdr; } ;
struct tipc_nlist {int remote; int local; } ;
struct tipc_name_seq {int upper; int lower; int type; } ;
struct socket {struct sock* sk; } ;
struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct net {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct tipc_msg*,int ) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct sk_buff_head*) ;
 struct net* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct net*) ;
 int FUNC_12 (struct net*,struct sk_buff_head*,struct tipc_mc_method*,struct tipc_nlist*,int *) ;
 int FUNC_13 (struct tipc_msg*,struct msghdr*,int ,size_t,int,struct sk_buff_head*) ;
 int FUNC_14 (struct net*,int ,int ,int ,struct tipc_nlist*) ;
 int FUNC_15 (struct tipc_nlist*,int ) ;
 int FUNC_16 (struct tipc_nlist*) ;
 int FUNC_17 (struct net*) ;
 struct tipc_sock* FUNC_18 (struct sock*) ;
 int FUNC_19 (struct socket*,long*,int) ;
 int FUNC_20 (struct sock*,int ,int ,char*) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct socket *VAR_6, struct tipc_name_seq *VAR_7,
     struct msghdr *VAR_8, size_t VAR_9, long VAR_10)
{
 struct sock *VAR_11 = VAR_6->sk;
 struct tipc_sock *VAR_12 = FUNC_18(VAR_11);
 struct tipc_msg *VAR_13 = &VAR_12->phdr;
 struct net *VAR_14 = FUNC_10(VAR_11);
 int VAR_15 = FUNC_11(VAR_14);
 struct tipc_mc_method *VAR_16 = &VAR_12->mc_method;
 struct sk_buff_head VAR_17;
 struct tipc_nlist VAR_18;
 int VAR_19;

 if (VAR_12->group)
  return -VAR_0;


 VAR_19 = FUNC_19(VAR_6, &VAR_10, !VAR_12->cong_link_cnt);
 if (FUNC_21(VAR_19))
  return VAR_19;


 FUNC_15(&VAR_18, FUNC_17(VAR_14));
 FUNC_14(VAR_14, VAR_7->type, VAR_7->lower,
          VAR_7->upper, &VAR_18);
 if (!VAR_18.local && !VAR_18.remote)
  return -VAR_1;


 FUNC_8(VAR_13, VAR_5);
 FUNC_3(VAR_13, VAR_2);
 FUNC_4(VAR_13, VAR_3);
 FUNC_2(VAR_13, 0);
 FUNC_1(VAR_13, 0);
 FUNC_6(VAR_13, VAR_7->type);
 FUNC_5(VAR_13, VAR_7->lower);
 FUNC_7(VAR_13, VAR_7->upper);


 FUNC_0(&VAR_17);
 VAR_19 = FUNC_13(VAR_13, VAR_8, 0, VAR_9, VAR_15, &VAR_17);


 if (FUNC_21(VAR_19 == VAR_9)) {
  FUNC_20(VAR_11, FUNC_9(&VAR_17),
     VAR_4, " ");
  VAR_19 = FUNC_12(VAR_14, &VAR_17, VAR_16, &VAR_18,
         &VAR_12->cong_link_cnt);
 }

 FUNC_16(&VAR_18);

 return VAR_19 ? VAR_19 : VAR_9;
}
