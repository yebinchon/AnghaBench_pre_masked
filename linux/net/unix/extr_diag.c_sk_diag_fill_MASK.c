
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct unix_diag_req {int udiag_show; } ;
struct unix_diag_msg {int udiag_ino; int udiag_cookie; scalar_t__ pad; int udiag_state; int udiag_type; int udiag_family; } ;
struct sock {int sk_shutdown; int sk_state; int sk_type; } ;
struct sk_buff {int dummy; } ;
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
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct nlmsghdr*) ;
 struct unix_diag_msg* FUNC_2 (struct nlmsghdr*) ;
 int FUNC_3 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_5 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_9 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_12 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_12, struct sk_buff *VAR_13, struct unix_diag_req *VAR_14,
  u32 VAR_15, u32 VAR_16, u32 VAR_17, int VAR_18)
{
 struct nlmsghdr *VAR_19;
 struct unix_diag_msg *VAR_20;

 VAR_19 = FUNC_4(VAR_13, VAR_15, VAR_16, VAR_2, sizeof(*VAR_20),
   VAR_17);
 if (!VAR_19)
  return -VAR_1;

 VAR_20 = FUNC_2(VAR_19);
 VAR_20->udiag_family = VAR_0;
 VAR_20->udiag_type = VAR_12->sk_type;
 VAR_20->udiag_state = VAR_12->sk_state;
 VAR_20->pad = 0;
 VAR_20->udiag_ino = VAR_18;
 FUNC_12(VAR_12, VAR_20->udiag_cookie);

 if ((VAR_14->udiag_show & VAR_5) &&
     FUNC_6(VAR_12, VAR_13))
  goto out_nlmsg_trim;

 if ((VAR_14->udiag_show & VAR_9) &&
     FUNC_9(VAR_12, VAR_13))
  goto out_nlmsg_trim;

 if ((VAR_14->udiag_show & VAR_6) &&
     FUNC_7(VAR_12, VAR_13))
  goto out_nlmsg_trim;

 if ((VAR_14->udiag_show & VAR_3) &&
     FUNC_5(VAR_12, VAR_13))
  goto out_nlmsg_trim;

 if ((VAR_14->udiag_show & VAR_7) &&
     FUNC_10(VAR_12, VAR_13))
  goto out_nlmsg_trim;

 if ((VAR_14->udiag_show & VAR_4) &&
     FUNC_11(VAR_12, VAR_13, VAR_10))
  goto out_nlmsg_trim;

 if (FUNC_0(VAR_13, VAR_11, VAR_12->sk_shutdown))
  goto out_nlmsg_trim;

 if ((VAR_14->udiag_show & VAR_8) &&
     FUNC_8(VAR_12, VAR_13))
  goto out_nlmsg_trim;

 FUNC_3(VAR_13, VAR_19);
 return 0;

out_nlmsg_trim:
 FUNC_1(VAR_13, VAR_19);
 return -VAR_1;
}
