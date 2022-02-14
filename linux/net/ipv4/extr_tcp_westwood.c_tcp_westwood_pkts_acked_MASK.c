
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct westwood {int rtt; } ;
struct sock {int dummy; } ;
struct ack_sample {scalar_t__ rtt_us; } ;


 struct westwood* FUNC_0 (struct sock*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0,
        const struct ack_sample *VAR_1)
{
 struct westwood *VAR_2 = FUNC_0(VAR_0);

 if (VAR_1->rtt_us > 0)
  VAR_2->rtt = FUNC_1(VAR_1->rtt_us);
}
