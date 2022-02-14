
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {scalar_t__ snd_ssthresh; scalar_t__ snd_cwnd; int snd_cwnd_stamp; scalar_t__ undo_marker; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {scalar_t__ icsk_ca_state; TYPE_1__* icsk_ca_ops; } ;
struct TYPE_3__ {scalar_t__ cong_control; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int VAR_3 ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static inline void FUNC_3(struct sock *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_2(VAR_4);

 if (FUNC_0(VAR_4)->icsk_ca_ops->cong_control)
  return;


 if (VAR_5->snd_ssthresh < VAR_2 &&
     (FUNC_0(VAR_4)->icsk_ca_state == VAR_1 || VAR_5->undo_marker)) {
  VAR_5->snd_cwnd = VAR_5->snd_ssthresh;
  VAR_5->snd_cwnd_stamp = VAR_3;
 }
 FUNC_1(VAR_4, VAR_0);
}
