
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {void* sin6_family; int sin6_addr; int sin6_port; } ;
struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {scalar_t__ sin_family; TYPE_1__ sin_addr; int sin_port; } ;
union sctp_addr {TYPE_4__ v6; TYPE_2__ v4; } ;
struct sk_buff {int sk; } ;
struct sctp_comm_param {int net_admin; struct nlmsghdr const* nlh; struct inet_diag_req_v2 const* r; struct sk_buff* skb; } ;
struct nlmsghdr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_7__ {int * idiag_dst; int idiag_dport; int * idiag_src; int idiag_sport; } ;
struct inet_diag_req_v2 {scalar_t__ sdiag_family; TYPE_3__ id; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (int ,struct net*,union sctp_addr*,union sctp_addr*,struct sctp_comm_param*) ;
 int VAR_3 ;
 struct net* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4,
         const struct nlmsghdr *VAR_5,
         const struct inet_diag_req_v2 *VAR_6)
{
 struct net *VAR_7 = FUNC_3(VAR_4->sk);
 union sctp_addr VAR_8, VAR_9;
 struct sctp_comm_param VAR_10 = {
  .skb = VAR_4,
  .r = VAR_6,
  .nlh = VAR_5,
  .net_admin = FUNC_1(VAR_4, VAR_2),
 };

 if (VAR_6->sdiag_family == VAR_0) {
  VAR_8.v4.sin_port = VAR_6->id.idiag_sport;
  VAR_8.v4.sin_addr.s_addr = VAR_6->id.idiag_src[0];
  VAR_8.v4.sin_family = VAR_0;

  VAR_9.v4.sin_port = VAR_6->id.idiag_dport;
  VAR_9.v4.sin_addr.s_addr = VAR_6->id.idiag_dst[0];
  VAR_9.v4.sin_family = VAR_0;
 } else {
  VAR_8.v6.sin6_port = VAR_6->id.idiag_sport;
  FUNC_0(&VAR_8.v6.sin6_addr, VAR_6->id.idiag_src,
         sizeof(VAR_8.v6.sin6_addr));
  VAR_8.v6.sin6_family = VAR_1;

  VAR_9.v6.sin6_port = VAR_6->id.idiag_dport;
  FUNC_0(&VAR_9.v6.sin6_addr, VAR_6->id.idiag_dst,
         sizeof(VAR_9.v6.sin6_addr));
  VAR_9.v6.sin6_family = VAR_1;
 }

 return FUNC_2(VAR_3,
          VAR_7, &VAR_8, &VAR_9, &VAR_10);
}
