
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ rtt_us; } ;
struct tcp_sock {int tcp_mstamp; TYPE_1__ rack; } ;
struct sk_buff {int dummy; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

s32 FUNC_2(struct tcp_sock *VAR_0, struct sk_buff *VAR_1, u32 VAR_2)
{
 return VAR_0->rack.rtt_us + VAR_2 -
        FUNC_1(VAR_0->tcp_mstamp, FUNC_0(VAR_1));
}
