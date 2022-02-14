
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int sk; } ;
struct sctp_comm_param {int net_admin; struct inet_diag_req_v2 const* r; struct netlink_callback* cb; struct sk_buff* skb; } ;
struct nlattr {int dummy; } ;
struct netlink_callback {int* args; int skb; } ;
struct net {int dummy; } ;
struct inet_diag_req_v2 {int idiag_states; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,struct sctp_comm_param*) ;
 int FUNC_2 (int ,int ,struct net*,int*,struct sctp_comm_param*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct net* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct sk_buff *VAR_6, struct netlink_callback *VAR_7,
      const struct inet_diag_req_v2 *VAR_8, struct nlattr *VAR_9)
{
 u32 VAR_10 = VAR_8->idiag_states;
 struct net *VAR_11 = FUNC_3(VAR_6->sk);
 struct sctp_comm_param VAR_12 = {
  .skb = VAR_6,
  .cb = VAR_7,
  .r = VAR_8,
  .net_admin = FUNC_0(VAR_7->skb, VAR_0),
 };
 int VAR_13 = VAR_7->args[2];







 if (VAR_7->args[0] == 0) {
  if (!(VAR_10 & VAR_2))
   goto skip;
  if (FUNC_1(VAR_3, &VAR_12))
   goto done;
skip:
  VAR_7->args[0] = 1;
  VAR_7->args[1] = 0;
  VAR_7->args[4] = 0;
 }
 if (!(VAR_10 & ~(VAR_2 | VAR_1)))
  goto done;

 FUNC_2(VAR_5, VAR_4,
    VAR_11, &VAR_13, &VAR_12);
 VAR_7->args[2] = VAR_13;

done:
 VAR_7->args[1] = VAR_7->args[4];
 VAR_7->args[4] = 0;
}
