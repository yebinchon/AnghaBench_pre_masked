
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct veno {scalar_t__ basertt; int cntrtt; int minrtt; } ;
struct sock {int dummy; } ;
struct ack_sample {scalar_t__ rtt_us; } ;


 struct veno* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0,
    const struct ack_sample *VAR_1)
{
 struct veno *VAR_2 = FUNC_0(VAR_0);
 u32 VAR_3;

 if (VAR_1->rtt_us < 0)
  return;


 VAR_3 = VAR_1->rtt_us + 1;


 if (VAR_3 < VAR_2->basertt)
  VAR_2->basertt = VAR_3;




 VAR_2->minrtt = FUNC_1(VAR_2->minrtt, VAR_3);
 VAR_2->cntrtt++;
}
