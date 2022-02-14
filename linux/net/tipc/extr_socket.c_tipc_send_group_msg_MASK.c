
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tipc_msg {int dummy; } ;
struct tipc_mc_method {int rcast; int mandatory; } ;
struct tipc_sock {int cong_link_cnt; int cong_links; int portid; struct tipc_msg phdr; struct tipc_mc_method mc_method; int group; } ;
struct tipc_member {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct net {int dummy; } ;
struct msghdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct tipc_msg*,int ) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,scalar_t__) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct tipc_member*,int) ;
 int FUNC_9 (struct tipc_msg*,struct msghdr*,int ,int,int,struct sk_buff_head*) ;
 int FUNC_10 (struct net*,int ,int ) ;
 int FUNC_11 (struct net*,struct sk_buff_head*,int ,int ) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct net *VAR_3, struct tipc_sock *VAR_4,
          struct msghdr *VAR_5, struct tipc_member *VAR_6,
          u32 VAR_7, u32 VAR_8, int VAR_9)
{
 u16 VAR_10 = FUNC_7(VAR_4->group);
 struct tipc_mc_method *VAR_11 = &VAR_4->mc_method;
 int VAR_12 = FUNC_12(VAR_1 + VAR_9);
 struct tipc_msg *VAR_13 = &VAR_4->phdr;
 struct sk_buff_head VAR_14;
 int VAR_15, VAR_16;


 FUNC_5(VAR_13, VAR_2);
 FUNC_4(VAR_13, VAR_1);
 FUNC_2(VAR_13, VAR_8);
 FUNC_1(VAR_13, VAR_7);
 FUNC_3(VAR_13, VAR_10);


 FUNC_0(&VAR_14);
 VAR_15 = FUNC_10(VAR_3, VAR_7, VAR_4->portid);
 VAR_16 = FUNC_9(VAR_13, VAR_5, 0, VAR_9, VAR_15, &VAR_14);
 if (FUNC_13(VAR_16 != VAR_9))
  return VAR_16;


 VAR_16 = FUNC_11(VAR_3, &VAR_14, VAR_7, VAR_4->portid);
 if (FUNC_13(VAR_16 == -VAR_0)) {
  FUNC_6(&VAR_4->cong_links, VAR_7, 0);
  VAR_4->cong_link_cnt++;
 }


 FUNC_8(VAR_6, VAR_12);


 VAR_11->rcast = 1;
 VAR_11->mandatory = 1;
 return VAR_9;
}
