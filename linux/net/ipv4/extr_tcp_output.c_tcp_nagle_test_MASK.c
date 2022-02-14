
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int dummy; } ;
struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {int tcp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (int,struct tcp_sock const*,int) ;
 scalar_t__ FUNC_2 (struct tcp_sock const*) ;

__attribute__((used)) static inline bool FUNC_3(const struct tcp_sock *VAR_2, const struct sk_buff *VAR_3,
      unsigned int VAR_4, int VAR_5)
{






 if (VAR_5 & VAR_1)
  return 1;


 if (FUNC_2(VAR_2) || (FUNC_0(VAR_3)->tcp_flags & VAR_0))
  return 1;

 if (!FUNC_1(VAR_3->len < VAR_4, VAR_2, VAR_5))
  return 1;

 return 0;
}
