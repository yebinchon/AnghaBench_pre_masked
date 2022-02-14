
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int advanced; scalar_t__ end_seq; int mstamp; scalar_t__ rtt_us; } ;
struct tcp_sock {TYPE_1__ rack; int tcp_mstamp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tcp_sock*) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;

void FUNC_3(struct tcp_sock *VAR_1, u8 VAR_2, u32 VAR_3,
        u64 VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_2(VAR_1->tcp_mstamp, VAR_4);
 if (VAR_5 < FUNC_0(VAR_1) && (VAR_2 & VAR_0)) {
  return;
 }
 VAR_1->rack.advanced = 1;
 VAR_1->rack.rtt_us = VAR_5;
 if (FUNC_1(VAR_4, VAR_1->rack.mstamp,
    VAR_3, VAR_1->rack.end_seq)) {
  VAR_1->rack.mstamp = VAR_4;
  VAR_1->rack.end_seq = VAR_3;
 }
}
