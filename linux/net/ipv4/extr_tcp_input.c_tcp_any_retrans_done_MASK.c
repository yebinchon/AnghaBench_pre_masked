
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ retrans_out; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int sacked; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sock const*) ;
 struct tcp_sock* FUNC_2 (struct sock const*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(const struct sock *VAR_1)
{
 const struct tcp_sock *VAR_2 = FUNC_2(VAR_1);
 struct sk_buff *VAR_3;

 if (VAR_2->retrans_out)
  return 1;

 VAR_3 = FUNC_1(VAR_1);
 if (FUNC_3(VAR_3 && FUNC_0(VAR_3)->sacked & VAR_0))
  return 1;

 return 0;
}
