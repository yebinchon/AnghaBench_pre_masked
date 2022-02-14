
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct user_namespace {int dummy; } ;
struct sock {int sk_type; } ;
struct sk_buff {int dummy; } ;
struct packet_sock {int num; } ;
struct packet_diag_req {int pdiag_show; } ;
struct packet_diag_msg {int pdiag_ino; int pdiag_cookie; int pdiag_num; int pdiag_type; int pdiag_family; } ;
struct nlmsghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct user_namespace*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct packet_diag_msg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int ,int,int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct packet_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct packet_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct packet_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct packet_sock*,struct sk_buff*) ;
 struct packet_sock* FUNC_11 (struct sock*) ;
 scalar_t__ FUNC_12 (int,struct sock*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_13 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_14 (struct sock*,int ) ;
 int FUNC_15 (struct sock*) ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_12, struct sk_buff *VAR_13,
   struct packet_diag_req *VAR_14,
   bool VAR_15,
   struct user_namespace *VAR_16,
   u32 VAR_17, u32 VAR_18, u32 VAR_19, int VAR_20)
{
 struct nlmsghdr *VAR_21;
 struct packet_diag_msg *VAR_22;
 struct packet_sock *VAR_23 = FUNC_11(VAR_12);

 VAR_21 = FUNC_5(VAR_13, VAR_17, VAR_18, VAR_11, sizeof(*VAR_22), VAR_19);
 if (!VAR_21)
  return -VAR_1;

 VAR_22 = FUNC_3(VAR_21);
 VAR_22->pdiag_family = VAR_0;
 VAR_22->pdiag_type = VAR_12->sk_type;
 VAR_22->pdiag_num = FUNC_6(VAR_23->num);
 VAR_22->pdiag_ino = VAR_20;
 FUNC_14(VAR_12, VAR_22->pdiag_cookie);

 if ((VAR_14->pdiag_show & VAR_7) &&
   FUNC_8(VAR_23, VAR_13))
  goto out_nlmsg_trim;

 if ((VAR_14->pdiag_show & VAR_7) &&
     FUNC_1(VAR_13, VAR_4,
   FUNC_0(VAR_16, FUNC_15(VAR_12))))
  goto out_nlmsg_trim;

 if ((VAR_14->pdiag_show & VAR_8) &&
   FUNC_9(VAR_23, VAR_13))
  goto out_nlmsg_trim;

 if ((VAR_14->pdiag_show & VAR_10) &&
   FUNC_10(VAR_23, VAR_13))
  goto out_nlmsg_trim;

 if ((VAR_14->pdiag_show & VAR_5) &&
   FUNC_7(VAR_23, VAR_13))
  goto out_nlmsg_trim;

 if ((VAR_14->pdiag_show & VAR_9) &&
     FUNC_13(VAR_12, VAR_13, VAR_3))
  goto out_nlmsg_trim;

 if ((VAR_14->pdiag_show & VAR_6) &&
     FUNC_12(VAR_15, VAR_12, VAR_13,
         VAR_2))
  goto out_nlmsg_trim;

 FUNC_4(VAR_13, VAR_21);
 return 0;

out_nlmsg_trim:
 FUNC_2(VAR_13, VAR_21);
 return -VAR_1;
}
