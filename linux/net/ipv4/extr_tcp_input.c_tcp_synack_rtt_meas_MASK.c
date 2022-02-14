
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct request_sock {int num_retrans; } ;
struct rate_sample {int dummy; } ;
struct TYPE_2__ {scalar_t__ snt_synack; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,int ,long,long,long,struct rate_sample*) ;
 int FUNC_1 () ;
 TYPE_1__* FUNC_2 (struct request_sock*) ;
 long FUNC_3 (int ,scalar_t__) ;

void FUNC_4(struct sock *VAR_1, struct request_sock *VAR_2)
{
 struct rate_sample VAR_3;
 long VAR_4 = -1L;

 if (VAR_2 && !VAR_2->num_retrans && FUNC_2(VAR_2)->snt_synack)
  VAR_4 = FUNC_3(FUNC_1(), FUNC_2(VAR_2)->snt_synack);

 FUNC_0(VAR_1, VAR_0, VAR_4, -1L, VAR_4, &VAR_3);
}
