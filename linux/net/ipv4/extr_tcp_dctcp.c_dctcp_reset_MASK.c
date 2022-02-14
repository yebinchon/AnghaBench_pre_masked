
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int delivered_ce; int delivered; int snd_nxt; } ;
struct dctcp {int old_delivered_ce; int old_delivered; int next_seq; } ;



__attribute__((used)) static void FUNC_0(const struct tcp_sock *VAR_0, struct dctcp *VAR_1)
{
 VAR_1->next_seq = VAR_0->snd_nxt;

 VAR_1->old_delivered = VAR_0->delivered;
 VAR_1->old_delivered_ce = VAR_0->delivered_ce;
}
