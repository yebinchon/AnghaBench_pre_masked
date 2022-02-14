
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct tcp_sock {int tcp_clock_cache; int tcp_wstamp_ns; } ;
struct sock {int dummy; } ;
struct bbr {scalar_t__ pacing_gain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (int,int ) ;
 struct bbr* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static u32 FUNC_6(struct sock *VAR_3, u32 VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_5(VAR_3);
 struct bbr *VAR_6 = FUNC_3(VAR_3);
 u64 VAR_7, VAR_8, VAR_9;
 u32 VAR_10, VAR_11;

 VAR_7 = VAR_5->tcp_clock_cache;
 VAR_8 = FUNC_4(VAR_5->tcp_wstamp_ns, VAR_7);
 VAR_9 = FUNC_2(VAR_8 - VAR_7, VAR_2);
 VAR_10 = (u64)FUNC_0(VAR_3) * VAR_9 >> VAR_1;
 VAR_11 = VAR_4;
 if (VAR_6->pacing_gain > VAR_0)
  VAR_11 += FUNC_1(VAR_3);
 if (VAR_10 >= VAR_11)
  return 0;
 return VAR_11 - VAR_10;
}
