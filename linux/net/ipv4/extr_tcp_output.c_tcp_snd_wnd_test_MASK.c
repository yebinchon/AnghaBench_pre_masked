
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcp_sock {int dummy; } ;
struct sk_buff {unsigned int len; } ;
struct TYPE_2__ {scalar_t__ seq; scalar_t__ end_seq; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct tcp_sock const*) ;

__attribute__((used)) static bool FUNC_3(const struct tcp_sock *VAR_0,
        const struct sk_buff *VAR_1,
        unsigned int VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1)->end_seq;

 if (VAR_1->len > VAR_2)
  VAR_3 = FUNC_0(VAR_1)->seq + VAR_2;

 return !FUNC_1(VAR_3, FUNC_2(VAR_0));
}
