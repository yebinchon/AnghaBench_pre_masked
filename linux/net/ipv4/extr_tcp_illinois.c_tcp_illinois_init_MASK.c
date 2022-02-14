
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct illinois {int base_rtt; scalar_t__ rtt_above; scalar_t__ rtt_low; scalar_t__ acked; scalar_t__ max_rtt; int beta; int alpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct illinois* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2)
{
 struct illinois *VAR_3 = FUNC_0(VAR_2);

 VAR_3->alpha = VAR_0;
 VAR_3->beta = VAR_1;
 VAR_3->base_rtt = 0x7fffffff;
 VAR_3->max_rtt = 0;

 VAR_3->acked = 0;
 VAR_3->rtt_low = 0;
 VAR_3->rtt_above = 0;

 FUNC_1(VAR_2);
}
