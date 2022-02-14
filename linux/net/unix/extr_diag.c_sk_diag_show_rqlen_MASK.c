
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct unix_diag_rqlen {void* udiag_wqueue; void* udiag_rqueue; } ;
struct TYPE_2__ {void* qlen; } ;
struct sock {scalar_t__ sk_state; void* sk_max_ack_backlog; TYPE_1__ sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
typedef int rql ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int,struct unix_diag_rqlen*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct unix_diag_rqlen VAR_4;

 if (VAR_2->sk_state == VAR_0) {
  VAR_4.udiag_rqueue = VAR_2->sk_receive_queue.qlen;
  VAR_4.udiag_wqueue = VAR_2->sk_max_ack_backlog;
 } else {
  VAR_4.udiag_rqueue = (u32) FUNC_1(VAR_2);
  VAR_4.udiag_wqueue = (u32) FUNC_2(VAR_2);
 }

 return FUNC_0(VAR_3, VAR_1, sizeof(VAR_4), &VAR_4);
}
