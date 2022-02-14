
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xdp_sock {int mutex; } ;
struct xdp_diag_req {int xdiag_show; } ;
struct xdp_diag_msg {int xdiag_ino; int xdiag_cookie; int xdiag_type; int xdiag_family; } ;
struct user_namespace {int dummy; } ;
struct sock {int sk_type; } ;
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
 int FUNC_0 (struct user_namespace*,int ) ;
 int FUNC_1 (struct xdp_diag_msg*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct nlmsghdr*) ;
 struct xdp_diag_msg* FUNC_6 (struct nlmsghdr*) ;
 int FUNC_7 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_8 (struct sk_buff*,int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_9 (struct sock*,struct sk_buff*,int ) ;
 int FUNC_10 (struct sock*,int ) ;
 int FUNC_11 (struct sock*) ;
 struct xdp_sock* FUNC_12 (struct sock*) ;
 scalar_t__ FUNC_13 (struct xdp_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct xdp_sock*,struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct xdp_sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_9, struct sk_buff *VAR_10,
    struct xdp_diag_req *VAR_11,
    struct user_namespace *VAR_12,
    u32 VAR_13, u32 VAR_14, u32 VAR_15, int VAR_16)
{
 struct xdp_sock *VAR_17 = FUNC_12(VAR_9);
 struct xdp_diag_msg *VAR_18;
 struct nlmsghdr *VAR_19;

 VAR_19 = FUNC_8(VAR_10, VAR_13, VAR_14, VAR_2, sizeof(*VAR_18),
   VAR_15);
 if (!VAR_19)
  return -VAR_1;

 VAR_18 = FUNC_6(VAR_19);
 FUNC_1(VAR_18, 0, sizeof(*VAR_18));
 VAR_18->xdiag_family = VAR_0;
 VAR_18->xdiag_type = VAR_9->sk_type;
 VAR_18->xdiag_ino = VAR_16;
 FUNC_10(VAR_9, VAR_18->xdiag_cookie);

 FUNC_2(&VAR_17->mutex);
 if ((VAR_11->xdiag_show & VAR_5) && FUNC_13(VAR_17, VAR_10))
  goto out_nlmsg_trim;

 if ((VAR_11->xdiag_show & VAR_5) &&
     FUNC_4(VAR_10, VAR_4,
   FUNC_0(VAR_12, FUNC_11(VAR_9))))
  goto out_nlmsg_trim;

 if ((VAR_11->xdiag_show & VAR_7) &&
     FUNC_14(VAR_17, VAR_10))
  goto out_nlmsg_trim;

 if ((VAR_11->xdiag_show & VAR_8) &&
     FUNC_15(VAR_17, VAR_10))
  goto out_nlmsg_trim;

 if ((VAR_11->xdiag_show & VAR_6) &&
     FUNC_9(VAR_9, VAR_10, VAR_3))
  goto out_nlmsg_trim;

 FUNC_3(&VAR_17->mutex);
 FUNC_7(VAR_10, VAR_19);
 return 0;

out_nlmsg_trim:
 FUNC_3(&VAR_17->mutex);
 FUNC_5(VAR_10, VAR_19);
 return -VAR_1;
}
