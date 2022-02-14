
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int snd_sml; } ;
struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {int end_seq; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 unsigned int FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static void FUNC_2(struct tcp_sock *VAR_0, unsigned int VAR_1,
    const struct sk_buff *VAR_2)
{
 if (VAR_2->len < FUNC_1(VAR_2) * VAR_1)
  VAR_0->snd_sml = FUNC_0(VAR_2)->end_seq;
}
