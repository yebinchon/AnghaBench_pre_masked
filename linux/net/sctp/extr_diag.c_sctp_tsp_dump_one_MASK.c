
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int sk; } ;
struct sctp_transport {struct sctp_association* asoc; } ;
struct sctp_comm_param {int net_admin; struct nlmsghdr* nlh; struct inet_diag_req_v2* r; struct sk_buff* skb; } ;
struct TYPE_5__ {struct sock* sk; } ;
struct sctp_association {TYPE_2__ base; } ;
struct nlmsghdr {int nlmsg_seq; } ;
struct net {int diag_nlsk; } ;
struct TYPE_4__ {int idiag_cookie; } ;
struct inet_diag_req_v2 {TYPE_1__ id; } ;
struct TYPE_6__ {int portid; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sctp_association*) ;
 int FUNC_3 (struct sock*,struct sctp_association*,struct sk_buff*,struct inet_diag_req_v2 const*,int ,int ,int ,int ,struct nlmsghdr const*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,struct sk_buff*,int ,int ) ;
 struct sk_buff* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sock*,int ) ;
 struct net* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct sctp_transport *VAR_4, void *VAR_5)
{
 struct sctp_association *VAR_6 = VAR_4->asoc;
 struct sock *VAR_7 = VAR_4->asoc->base.sk;
 struct sctp_comm_param *VAR_8 = VAR_5;
 struct sk_buff *VAR_9 = VAR_8->skb;
 const struct inet_diag_req_v2 *VAR_10 = VAR_8->r;
 const struct nlmsghdr *VAR_11 = VAR_8->nlh;
 struct net *VAR_12 = FUNC_11(VAR_9->sk);
 struct sk_buff *VAR_13;
 int VAR_14;

 VAR_14 = FUNC_10(VAR_7, VAR_10->id.idiag_cookie);
 if (VAR_14)
  goto out;

 VAR_14 = -VAR_1;
 VAR_13 = FUNC_7(FUNC_2(VAR_6), VAR_2);
 if (!VAR_13)
  goto out;

 FUNC_5(VAR_7);
 if (VAR_7 != VAR_6->base.sk) {
  FUNC_8(VAR_7);
  VAR_7 = VAR_6->base.sk;
  FUNC_5(VAR_7);
 }
 VAR_14 = FUNC_3(VAR_7, VAR_6, VAR_13, VAR_10,
      FUNC_9(FUNC_0(VAR_9).sk),
      FUNC_0(VAR_9).portid,
      VAR_11->nlmsg_seq, 0, VAR_11,
      VAR_8->net_admin);
 FUNC_8(VAR_7);
 if (VAR_14 < 0) {
  FUNC_1(VAR_14 == -VAR_0);
  FUNC_4(VAR_13);
  goto out;
 }

 VAR_14 = FUNC_6(VAR_12->diag_nlsk, VAR_13, FUNC_0(VAR_9).portid,
         VAR_3);
 if (VAR_14 > 0)
  VAR_14 = 0;
out:
 return VAR_14;
}
