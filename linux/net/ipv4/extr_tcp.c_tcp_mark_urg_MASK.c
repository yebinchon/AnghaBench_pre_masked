
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int write_seq; int snd_up; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct tcp_sock *VAR_1, int VAR_2)
{
 if (VAR_2 & VAR_0)
  VAR_1->snd_up = VAR_1->write_seq;
}
