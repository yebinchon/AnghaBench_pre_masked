
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vegas {scalar_t__ baseRTT; int cntRTT; int minRTT; } ;
struct sock {int dummy; } ;
struct ack_sample {scalar_t__ rtt_us; } ;


 struct vegas* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct sock *VAR_0, const struct ack_sample *VAR_1)
{
 struct vegas *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;

 if (VAR_1->rtt_us < 0)
  return;


 VAR_3 = VAR_1->rtt_us + 1;


 if (VAR_3 < VAR_2->baseRTT)
  VAR_2->baseRTT = VAR_3;




 VAR_2->minRTT = FUNC_1(VAR_2->minRTT, VAR_3);
 VAR_2->cntRTT++;
}
