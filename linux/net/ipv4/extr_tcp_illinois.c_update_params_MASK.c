
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; } ;
struct sock {int dummy; } ;
struct illinois {scalar_t__ cnt_rtt; int beta; int alpha; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct illinois*,int ,int ) ;
 int FUNC_1 (struct illinois*) ;
 int FUNC_2 (int ,int ) ;
 struct illinois* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct illinois*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_6(VAR_3);
 struct illinois *VAR_5 = FUNC_3(VAR_3);

 if (VAR_4->snd_cwnd < VAR_2) {
  VAR_5->alpha = VAR_0;
  VAR_5->beta = VAR_1;
 } else if (VAR_5->cnt_rtt > 0) {
  u32 VAR_6 = FUNC_4(VAR_5);
  u32 VAR_7 = FUNC_1(VAR_5);

  VAR_5->alpha = FUNC_0(VAR_5, VAR_7, VAR_6);
  VAR_5->beta = FUNC_2(VAR_7, VAR_6);
 }

 FUNC_5(VAR_3);
}
