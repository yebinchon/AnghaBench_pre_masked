
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int undo_retrans; scalar_t__ retrans_out; int snd_una; int undo_marker; } ;



__attribute__((used)) static inline void FUNC_0(struct tcp_sock *VAR_0)
{
 VAR_0->undo_marker = VAR_0->snd_una;

 VAR_0->undo_retrans = VAR_0->retrans_out ? : -1;
}
