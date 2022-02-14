
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int ecn_flags; } ;
struct request_sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ ecn_ok; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct request_sock const*) ;

__attribute__((used)) static void FUNC_1(struct tcp_sock *VAR_1,
      const struct request_sock *VAR_2)
{
 VAR_1->ecn_flags = FUNC_0(VAR_2)->ecn_ok ? VAR_0 : 0;
}
