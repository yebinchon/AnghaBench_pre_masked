
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ snd_una; scalar_t__ snd_up; } ;



__attribute__((used)) static inline bool FUNC_0(const struct tcp_sock *VAR_0)
{
 return VAR_0->snd_una != VAR_0->snd_up;
}
