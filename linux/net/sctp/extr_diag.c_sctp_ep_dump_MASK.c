
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sock {scalar_t__ sk_family; } ;
struct sk_buff {struct sock* sk; } ;
struct TYPE_5__ {struct sock* sk; } ;
struct sctp_endpoint {int asocs; TYPE_1__ base; } ;
struct sctp_comm_param {int net_admin; struct inet_diag_req_v2* r; struct netlink_callback* cb; struct sk_buff* skb; } ;
struct netlink_callback {scalar_t__* args; TYPE_3__* nlh; int skb; } ;
struct net {int dummy; } ;
struct inet_sock {scalar_t__ inet_sport; scalar_t__ inet_dport; } ;
struct TYPE_6__ {scalar_t__ idiag_sport; scalar_t__ idiag_dport; } ;
struct inet_diag_req_v2 {int idiag_states; scalar_t__ sdiag_family; TYPE_2__ id; } ;
struct TYPE_8__ {int portid; int sk; } ;
struct TYPE_7__ {int nlmsg_seq; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sock*,int *,struct sk_buff*,struct inet_diag_req_v2 const*,int ,int ,int ,int ,TYPE_3__*,int ) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct net*,struct net*) ;
 int FUNC_5 (int ) ;
 struct net* FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sctp_endpoint *VAR_3, void *VAR_4)
{
 struct sctp_comm_param *VAR_5 = VAR_4;
 struct sock *VAR_6 = VAR_3->base.sk;
 struct sk_buff *VAR_7 = VAR_5->skb;
 struct netlink_callback *VAR_8 = VAR_5->cb;
 const struct inet_diag_req_v2 *VAR_9 = VAR_5->r;
 struct net *VAR_10 = FUNC_6(VAR_7->sk);
 struct inet_sock *VAR_11 = FUNC_2(VAR_6);
 int VAR_12 = 0;

 if (!FUNC_4(FUNC_6(VAR_6), VAR_10))
  goto out;

 if (VAR_8->args[4] < VAR_8->args[1])
  goto next;

 if (!(VAR_9->idiag_states & VAR_2) && !FUNC_3(&VAR_3->asocs))
  goto next;

 if (VAR_9->sdiag_family != VAR_0 &&
     VAR_6->sk_family != VAR_9->sdiag_family)
  goto next;

 if (VAR_9->id.idiag_sport != VAR_11->inet_sport &&
     VAR_9->id.idiag_sport)
  goto next;

 if (VAR_9->id.idiag_dport != VAR_11->inet_dport &&
     VAR_9->id.idiag_dport)
  goto next;

 if (FUNC_1(VAR_6, ((void*)0), VAR_7, VAR_9,
    FUNC_5(FUNC_0(VAR_8->skb).sk),
    FUNC_0(VAR_8->skb).portid,
    VAR_8->nlh->nlmsg_seq, VAR_1,
    VAR_8->nlh, VAR_5->net_admin) < 0) {
  VAR_12 = 2;
  goto out;
 }
next:
 VAR_8->args[4]++;
out:
 return VAR_12;
}
