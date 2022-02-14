
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int packets_out; int snd_wnd; scalar_t__ lsndtime; } ;
struct sock {scalar_t__ sk_err_soft; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,int) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (struct sock*,int ) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_5, bool VAR_6)
{
 struct tcp_sock *VAR_7 = FUNC_6(VAR_5);
 int VAR_8 = 0;



 if ((s32)(VAR_4 - VAR_7->lsndtime) > 2*VAR_2 || !VAR_6)
  VAR_8++;


 if (VAR_5->sk_err_soft)
  VAR_8++;

 if (FUNC_3(VAR_5, VAR_8)) {


  if ((s32)(VAR_4 - VAR_7->lsndtime) <= VAR_3 ||

      (!VAR_7->snd_wnd && !VAR_7->packets_out))
   VAR_6 = 1;
  if (VAR_6)
   FUNC_5(VAR_5, VAR_0);
  FUNC_4(VAR_5);
  FUNC_0(FUNC_2(VAR_5), VAR_1);
  return 1;
 }

 if (!FUNC_1(FUNC_2(VAR_5))) {

  FUNC_4(VAR_5);
  return 1;
 }

 return 0;
}
