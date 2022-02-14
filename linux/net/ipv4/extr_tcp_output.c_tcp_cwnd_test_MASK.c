
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {int snd_cwnd; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int tcp_flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (int,unsigned int) ;
 unsigned int FUNC_2 (int,int) ;
 int FUNC_3 (struct tcp_sock const*) ;
 int FUNC_4 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_5(const struct tcp_sock *VAR_1,
      const struct sk_buff *VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;


 if ((FUNC_0(VAR_2)->tcp_flags & VAR_0) &&
     FUNC_4(VAR_2) == 1)
  return 1;

 VAR_3 = FUNC_3(VAR_1);
 VAR_4 = VAR_1->snd_cwnd;
 if (VAR_3 >= VAR_4)
  return 0;




 VAR_5 = FUNC_1(VAR_4 >> 1, 1U);
 return FUNC_2(VAR_5, VAR_4 - VAR_3);
}
