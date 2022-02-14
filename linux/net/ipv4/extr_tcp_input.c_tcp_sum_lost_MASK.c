
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int lost; } ;
struct sk_buff {int dummy; } ;
typedef int __u8 ;
struct TYPE_2__ {int sacked; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct tcp_sock *VAR_2, struct sk_buff *VAR_3)
{
 __u8 VAR_4 = FUNC_0(VAR_3)->sacked;

 if (!(VAR_4 & VAR_0) ||
     ((VAR_4 & VAR_0) && (VAR_4 & VAR_1)))
  VAR_2->lost += FUNC_1(VAR_3);
}
