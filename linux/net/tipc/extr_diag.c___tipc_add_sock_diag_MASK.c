
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock_diag_req {int tidiag_states; } ;
struct tipc_sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_callback {int nlh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct tipc_sock_diag_req* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_2 (struct sk_buff*,struct netlink_callback*,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct netlink_callback*,struct tipc_sock*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4,
    struct netlink_callback *VAR_5,
    struct tipc_sock *VAR_6)
{
 struct tipc_sock_diag_req *VAR_7 = FUNC_0(VAR_5->nlh);
 struct nlmsghdr *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_2, 0,
          VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7->tidiag_states,
         VAR_3);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_4, VAR_8);
 return 0;
}
