
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ advanced; } ;
struct tcp_sock {TYPE_1__ rack; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {int icsk_rto; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct sock*,scalar_t__*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void FUNC_5(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4;

 if (!VAR_3->rack.advanced)
  return;


 VAR_3->rack.advanced = 0;
 FUNC_2(VAR_2, &VAR_4);
 if (VAR_4) {
  VAR_4 = FUNC_4(VAR_4) + VAR_1;
  FUNC_1(VAR_2, VAR_0,
       VAR_4, FUNC_0(VAR_2)->icsk_rto);
 }
}
