
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
typedef enum tcp_ca_event { ____Placeholder_tcp_ca_event } tcp_ca_event ;
struct TYPE_4__ {int pending; } ;
struct TYPE_6__ {TYPE_1__ icsk_ack; } ;
struct TYPE_5__ {scalar_t__ rcv_nxt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sock*,scalar_t__) ;
 int FUNC_1 (struct sock*,scalar_t__) ;
 TYPE_3__* FUNC_2 (struct sock*) ;
 TYPE_2__* FUNC_3 (struct sock*) ;

__attribute__((used)) static inline void FUNC_4(struct sock *VAR_3, enum tcp_ca_event VAR_4,
     u32 *VAR_5, u32 *VAR_6)
{
 u32 VAR_7 = (VAR_4 == VAR_0) ? 1 : 0;

 if (*VAR_6 != VAR_7) {




  if (FUNC_2(VAR_3)->icsk_ack.pending & VAR_2) {
   FUNC_1(VAR_3, *VAR_6);
   FUNC_0(VAR_3, *VAR_5);
  }
  FUNC_2(VAR_3)->icsk_ack.pending |= VAR_1;
 }
 *VAR_5 = FUNC_3(VAR_3)->rcv_nxt;
 *VAR_6 = VAR_7;
 FUNC_1(VAR_3, VAR_7);
}
