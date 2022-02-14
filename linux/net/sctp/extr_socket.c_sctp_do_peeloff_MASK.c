
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {int sk; } ;
struct sock {int sk_family; } ;
struct sctp_sock {TYPE_3__* pf; } ;
struct TYPE_6__ {int primary_addr; } ;
struct sctp_association {TYPE_2__ peer; } ;
typedef int sctp_assoc_t ;
struct TYPE_8__ {TYPE_1__* nsproxy; } ;
struct TYPE_7__ {int (* copy_ip_options ) (struct sock*,int ) ;int (* to_sk_daddr ) (int *,struct sock*) ;} ;
struct TYPE_5__ {int net_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct sock*,struct sctp_association*) ;
 struct sctp_association* FUNC_2 (struct sock*,int ) ;
 struct sctp_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ,struct sctp_association*,int ) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (int ,int ,int ,struct socket**) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (int *,struct sock*) ;
 int FUNC_10 (struct sock*,int ) ;

int FUNC_11(struct sock *VAR_6, sctp_assoc_t VAR_7, struct socket **VAR_8)
{
 struct sctp_association *VAR_9 = FUNC_2(VAR_6, VAR_7);
 struct sctp_sock *VAR_10 = FUNC_3(VAR_6);
 struct socket *VAR_11;
 int VAR_12 = 0;


 if (!FUNC_0(VAR_5->nsproxy->net_ns, FUNC_7(VAR_6)))
  return -VAR_0;

 if (!VAR_9)
  return -VAR_0;




 if (!FUNC_5(VAR_6, VAR_4))
  return -VAR_0;


 VAR_12 = FUNC_6(VAR_6->sk_family, VAR_3, VAR_1, &VAR_11);
 if (VAR_12 < 0)
  return VAR_12;

 FUNC_1(VAR_11->sk, VAR_6, VAR_9);





 VAR_10->pf->to_sk_daddr(&VAR_9->peer.primary_addr, VAR_6);
 VAR_10->pf->copy_ip_options(VAR_6, VAR_11->sk);




 VAR_12 = FUNC_4(VAR_6, VAR_11->sk, VAR_9,
    VAR_2);
 if (VAR_12) {
  FUNC_8(VAR_11);
  VAR_11 = ((void*)0);
 }

 *VAR_8 = VAR_11;

 return VAR_12;
}
