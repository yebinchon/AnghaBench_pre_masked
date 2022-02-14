
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {int sk_state; int sk_protocol; int sk_type; } ;
struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct netlink_sock {int dst_group; int dst_portid; int portid; } ;
struct netlink_diag_req {int ndiag_show; } ;
struct netlink_diag_msg {int ndiag_ino; int ndiag_cookie; int ndiag_dst_group; int ndiag_dst_portid; int ndiag_portid; int ndiag_state; int ndiag_protocol; int ndiag_type; int ndiag_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct netlink_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct netlink_diag_msg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_8 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_7, struct sk_buff *VAR_8,
   struct netlink_diag_req *VAR_9,
   u32 VAR_10, u32 VAR_11, u32 VAR_12, int VAR_13)
{
 struct nlmsghdr *VAR_14;
 struct netlink_diag_msg *VAR_15;
 struct netlink_sock *VAR_16 = FUNC_0(VAR_7);

 VAR_14 = FUNC_4(VAR_8, VAR_10, VAR_11, VAR_6, sizeof(*VAR_15),
   VAR_12);
 if (!VAR_14)
  return -VAR_1;

 VAR_15 = FUNC_2(VAR_14);
 VAR_15->ndiag_family = VAR_0;
 VAR_15->ndiag_type = VAR_7->sk_type;
 VAR_15->ndiag_protocol = VAR_7->sk_protocol;
 VAR_15->ndiag_state = VAR_7->sk_state;

 VAR_15->ndiag_ino = VAR_13;
 VAR_15->ndiag_portid = VAR_16->portid;
 VAR_15->ndiag_dst_portid = VAR_16->dst_portid;
 VAR_15->ndiag_dst_group = VAR_16->dst_group;
 FUNC_8(VAR_7, VAR_15->ndiag_cookie);

 if ((VAR_9->ndiag_show & VAR_3) &&
     FUNC_5(VAR_7, VAR_8))
  goto out_nlmsg_trim;

 if ((VAR_9->ndiag_show & VAR_4) &&
     FUNC_7(VAR_7, VAR_8, VAR_5))
  goto out_nlmsg_trim;

 if ((VAR_9->ndiag_show & VAR_2) &&
     FUNC_6(VAR_7, VAR_8))
  goto out_nlmsg_trim;

 FUNC_3(VAR_8, VAR_14);
 return 0;

out_nlmsg_trim:
 FUNC_1(VAR_8, VAR_14);
 return -VAR_1;
}
