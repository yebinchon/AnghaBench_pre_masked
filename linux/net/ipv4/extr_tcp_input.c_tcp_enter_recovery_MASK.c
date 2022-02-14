
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {scalar_t__ prior_ssthresh; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct tcp_sock*) ;
 scalar_t__ FUNC_6 (struct tcp_sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;

void FUNC_9(struct sock *VAR_3, bool VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_8(VAR_3);
 int VAR_6;

 if (FUNC_6(VAR_5))
  VAR_6 = VAR_0;
 else
  VAR_6 = VAR_1;

 FUNC_0(FUNC_1(VAR_3), VAR_6);

 VAR_5->prior_ssthresh = 0;
 FUNC_5(VAR_5);

 if (!FUNC_3(VAR_3)) {
  if (!VAR_4)
   VAR_5->prior_ssthresh = FUNC_2(VAR_3);
  FUNC_4(VAR_3);
 }
 FUNC_7(VAR_3, VAR_2);
}
