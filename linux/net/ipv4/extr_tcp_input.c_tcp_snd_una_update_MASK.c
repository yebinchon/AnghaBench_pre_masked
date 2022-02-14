
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ snd_una; int bytes_acked; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(struct tcp_sock *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = VAR_1 - VAR_0->snd_una;

 FUNC_0((struct sock *)VAR_0);
 VAR_0->bytes_acked += VAR_2;
 VAR_0->snd_una = VAR_1;
}
