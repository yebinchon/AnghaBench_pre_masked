
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char cause; unsigned char diagnostic; } ;
struct x25_sock {TYPE_1__ causediag; int state; scalar_t__ lci; } ;
struct sock {int sk_err; int (* sk_state_change ) (struct sock*) ;int sk_shutdown; int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct x25_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

void FUNC_6(struct sock *VAR_4, int VAR_5, unsigned char VAR_6,
      unsigned char VAR_7)
{
 struct x25_sock *VAR_8 = FUNC_4(VAR_4);

 FUNC_3(VAR_4);
 FUNC_5(VAR_4);

 VAR_8->lci = 0;
 VAR_8->state = VAR_3;

 VAR_8->causediag.cause = VAR_6;
 VAR_8->causediag.diagnostic = VAR_7;

 VAR_4->sk_state = VAR_2;
 VAR_4->sk_err = VAR_5;
 VAR_4->sk_shutdown |= VAR_0;

 if (!FUNC_0(VAR_4, VAR_1)) {
  VAR_4->sk_state_change(VAR_4);
  FUNC_1(VAR_4, VAR_1);
 }
}
