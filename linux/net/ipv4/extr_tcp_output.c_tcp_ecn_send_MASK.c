
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcphdr {int cwr; int ece; } ;
struct tcp_sock {int ecn_flags; int snd_nxt; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_4__ {int seq; } ;
struct TYPE_3__ {int gso_type; } ;


 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 struct tcp_sock* FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_4, struct sk_buff *VAR_5,
    struct tcphdr *VAR_6, int VAR_7)
{
 struct tcp_sock *VAR_8 = FUNC_6(VAR_4);

 if (VAR_8->ecn_flags & VAR_2) {

  if (VAR_5->len != VAR_7 &&
      !FUNC_3(FUNC_2(VAR_5)->seq, VAR_8->snd_nxt)) {
   FUNC_1(VAR_4);
   if (VAR_8->ecn_flags & VAR_3) {
    VAR_8->ecn_flags &= ~VAR_3;
    VAR_6->cwr = 1;
    FUNC_4(VAR_5)->gso_type |= VAR_0;
   }
  } else if (!FUNC_5(VAR_4)) {

   FUNC_0(VAR_4);
  }
  if (VAR_8->ecn_flags & VAR_1)
   VAR_6->ece = 1;
 }
}
