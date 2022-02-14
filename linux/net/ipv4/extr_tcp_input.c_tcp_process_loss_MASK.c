
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int high_seq; int snd_nxt; scalar_t__ frto; int fastopen_rsk; int snd_una; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sock*,int) ;
 scalar_t__ FUNC_4 (struct tcp_sock*) ;
 int FUNC_5 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*,int) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct tcp_sock*) ;
 int FUNC_10 (struct sock*) ;

__attribute__((used)) static void FUNC_11(struct sock *VAR_5, int VAR_6, int VAR_7,
        int *VAR_8)
{
 struct tcp_sock *VAR_9 = FUNC_6(VAR_5);
 bool VAR_10 = !FUNC_1(VAR_9->snd_una, VAR_9->high_seq);

 if ((VAR_6 & VAR_2 || FUNC_2(VAR_9->fastopen_rsk)) &&
     FUNC_7(VAR_5, 0))
  return;

 if (VAR_9->frto) {



  if ((VAR_6 & VAR_1) &&
      FUNC_7(VAR_5, 1))
   return;

  if (FUNC_0(VAR_9->snd_nxt, VAR_9->high_seq)) {
   if (VAR_6 & VAR_0 || VAR_7)
    VAR_9->frto = 0;
  } else if (VAR_6 & VAR_2 && !VAR_10) {
   VAR_9->high_seq = VAR_9->snd_nxt;




   if (!FUNC_10(VAR_5) &&
       FUNC_0(FUNC_9(VAR_9), VAR_9->snd_nxt)) {
    *VAR_8 = VAR_4;
    return;
   }
   VAR_9->frto = 0;
  }
 }

 if (VAR_10) {

  FUNC_8(VAR_5);
  return;
 }
 if (FUNC_4(VAR_9)) {



  if (FUNC_0(VAR_9->snd_nxt, VAR_9->high_seq) && VAR_7)
   FUNC_3(VAR_5, VAR_7);
  else if (VAR_6 & VAR_2)
   FUNC_5(VAR_9);
 }
 *VAR_8 = VAR_3;
}
