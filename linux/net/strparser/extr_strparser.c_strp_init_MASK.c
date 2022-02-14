
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int abort_parser; int read_sock_done; scalar_t__ parse_msg; scalar_t__ rcv_msg; int unlock; int lock; } ;
struct strparser {int work; int msg_timer_work; TYPE_1__ cb; struct sock* sk; } ;
struct strp_callbacks {scalar_t__ abort_parser; scalar_t__ read_sock_done; scalar_t__ parse_msg; scalar_t__ rcv_msg; scalar_t__ unlock; scalar_t__ lock; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct strparser*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_3(struct strparser *VAR_7, struct sock *VAR_8,
       const struct strp_callbacks *VAR_9)
{

 if (!VAR_9 || !VAR_9->rcv_msg || !VAR_9->parse_msg)
  return -VAR_0;
 if (!VAR_8) {
  if (!VAR_9->lock || !VAR_9->unlock)
   return -VAR_0;
 }

 FUNC_2(VAR_7, 0, sizeof(*VAR_7));

 VAR_7->sk = VAR_8;

 VAR_7->cb.lock = VAR_9->lock ? : VAR_4;
 VAR_7->cb.unlock = VAR_9->unlock ? : VAR_5;
 VAR_7->cb.rcv_msg = VAR_9->rcv_msg;
 VAR_7->cb.parse_msg = VAR_9->parse_msg;
 VAR_7->cb.read_sock_done = VAR_9->read_sock_done ? : VAR_1;
 VAR_7->cb.abort_parser = VAR_9->abort_parser ? : VAR_2;

 FUNC_0(&VAR_7->msg_timer_work, VAR_3);
 FUNC_1(&VAR_7->work, VAR_6);

 return 0;
}
