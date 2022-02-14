
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_max_ack_backlog; int sk_ack_backlog; } ;
struct sctp_infox {scalar_t__ sctpinfo; TYPE_1__* asoc; } ;
struct inet_diag_msg {int idiag_wqueue; int idiag_rqueue; } ;
struct TYPE_2__ {int sndbuf_used; int rmem_alloc; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sock*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0, struct inet_diag_msg *VAR_1,
          void *VAR_2)
{
 struct sctp_infox *VAR_3 = (struct sctp_infox *)VAR_2;

 if (VAR_3->asoc) {
  VAR_1->idiag_rqueue = FUNC_0(&VAR_3->asoc->rmem_alloc);
  VAR_1->idiag_wqueue = VAR_3->asoc->sndbuf_used;
 } else {
  VAR_1->idiag_rqueue = VAR_0->sk_ack_backlog;
  VAR_1->idiag_wqueue = VAR_0->sk_max_ack_backlog;
 }
 if (VAR_3->sctpinfo)
  FUNC_1(VAR_0, VAR_3->asoc, VAR_3->sctpinfo);
}
