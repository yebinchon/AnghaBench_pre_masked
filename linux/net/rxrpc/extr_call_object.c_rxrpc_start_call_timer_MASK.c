
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long expires; } ;
struct rxrpc_call {unsigned long ack_at; unsigned long ack_lost_at; unsigned long resend_at; unsigned long ping_at; unsigned long expect_rx_by; unsigned long expect_req_by; unsigned long expect_term_by; TYPE_1__ timer; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;

__attribute__((used)) static void FUNC_0(struct rxrpc_call *VAR_2)
{
 unsigned long VAR_3 = VAR_1;
 unsigned long VAR_4 = VAR_3 + VAR_0;

 VAR_2->ack_at = VAR_4;
 VAR_2->ack_lost_at = VAR_4;
 VAR_2->resend_at = VAR_4;
 VAR_2->ping_at = VAR_4;
 VAR_2->expect_rx_by = VAR_4;
 VAR_2->expect_req_by = VAR_4;
 VAR_2->expect_term_by = VAR_4;
 VAR_2->timer.expires = VAR_3;
}
