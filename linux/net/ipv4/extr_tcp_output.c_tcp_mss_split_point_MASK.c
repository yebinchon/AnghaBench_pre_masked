
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct tcp_sock {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {unsigned int seq; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (int) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 scalar_t__ FUNC_3 (int,struct tcp_sock const*,int) ;
 struct tcp_sock* FUNC_4 (struct sock const*) ;
 unsigned int FUNC_5 (struct tcp_sock const*) ;
 struct sk_buff const* FUNC_6 (struct sock const*) ;

__attribute__((used)) static unsigned int FUNC_7(const struct sock *VAR_0,
     const struct sk_buff *VAR_1,
     unsigned int VAR_2,
     unsigned int VAR_3,
     int VAR_4)
{
 const struct tcp_sock *VAR_5 = FUNC_4(VAR_0);
 u32 VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_8 = FUNC_5(VAR_5) - FUNC_0(VAR_1)->seq;
 VAR_9 = VAR_2 * VAR_3;

 if (FUNC_1(VAR_9 <= VAR_8 && VAR_1 != FUNC_6(VAR_0)))
  return VAR_9;

 VAR_7 = FUNC_2(VAR_1->len, VAR_8);

 if (VAR_9 <= VAR_7)
  return VAR_9;

 VAR_6 = VAR_7 % VAR_2;




 if (FUNC_3(VAR_6 != 0, VAR_5, VAR_4))
  return VAR_7 - VAR_6;

 return VAR_7;
}
