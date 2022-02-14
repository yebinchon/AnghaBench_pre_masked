
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct veno {scalar_t__ diff; } ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct veno* FUNC_0 (struct sock*) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static u32 FUNC_3(struct sock *VAR_1)
{
 const struct tcp_sock *VAR_2 = FUNC_2(VAR_1);
 struct veno *VAR_3 = FUNC_0(VAR_1);

 if (VAR_3->diff < VAR_0)

  return FUNC_1(VAR_2->snd_cwnd * 4 / 5, 2U);
 else

  return FUNC_1(VAR_2->snd_cwnd >> 1U, 2U);
}
