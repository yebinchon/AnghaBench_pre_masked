
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ tcp_wstamp_ns; scalar_t__ tcp_clock_cache; int pacing_timer; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static bool FUNC_6(struct sock *VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_5(VAR_1);

 if (!FUNC_4(VAR_1))
  return 0;

 if (VAR_2->tcp_wstamp_ns <= VAR_2->tcp_clock_cache)
  return 0;

 if (!FUNC_0(&VAR_2->pacing_timer)) {
  FUNC_1(&VAR_2->pacing_timer,
         FUNC_2(VAR_2->tcp_wstamp_ns),
         VAR_0);
  FUNC_3(VAR_1);
 }
 return 1;
}
