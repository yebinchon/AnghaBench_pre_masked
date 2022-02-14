
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int reordering; int mss_cache; scalar_t__ snd_una; } ;
struct sock {int dummy; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static bool FUNC_3(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_2(VAR_0);

 return FUNC_0(FUNC_1(VAR_1),
       VAR_1->snd_una + VAR_1->reordering * VAR_1->mss_cache);
}
