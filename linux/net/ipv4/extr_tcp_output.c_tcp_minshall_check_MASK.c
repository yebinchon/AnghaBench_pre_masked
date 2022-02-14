
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_nxt; int snd_sml; int snd_una; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct tcp_sock *VAR_0)
{
 return FUNC_0(VAR_0->snd_sml, VAR_0->snd_una) &&
  !FUNC_0(VAR_0->snd_sml, VAR_0->snd_nxt);
}
