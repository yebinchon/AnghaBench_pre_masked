
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sacked; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (struct tcp_sock const*,int ) ;

__attribute__((used)) static bool FUNC_3(const struct tcp_sock *VAR_1,
         const struct sk_buff *VAR_2)
{
 return (FUNC_0(VAR_2)->sacked & VAR_0) &&
        FUNC_2(VAR_1, FUNC_1(VAR_2));
}
