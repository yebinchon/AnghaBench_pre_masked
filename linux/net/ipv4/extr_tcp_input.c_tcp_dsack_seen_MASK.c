
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dsack_seen; } ;
struct TYPE_3__ {int sack_ok; } ;
struct tcp_sock {int dsack_dups; TYPE_2__ rack; TYPE_1__ rx_opt; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct tcp_sock *VAR_1)
{
 VAR_1->rx_opt.sack_ok |= VAR_0;
 VAR_1->rack.dsack_seen = 1;
 VAR_1->dsack_dups++;
}
