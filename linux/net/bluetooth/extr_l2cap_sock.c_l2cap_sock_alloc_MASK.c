
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sock {int sk_protocol; int sk_state; int sk_sndtimeo; int sk_destruct; } ;
struct net {int dummy; } ;
struct l2cap_chan {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {int accept_q; } ;
struct TYPE_3__ {struct l2cap_chan* chan; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 struct l2cap_chan* FUNC_2 () ;
 int FUNC_3 (struct l2cap_chan*) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sock* FUNC_5 (struct net*,int ,int ,int *,int) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct socket*,struct sock*) ;
 int FUNC_8 (struct sock*,int ) ;

__attribute__((used)) static struct sock *FUNC_9(struct net *VAR_6, struct socket *VAR_7,
         int VAR_8, gfp_t VAR_9, int VAR_10)
{
 struct sock *VAR_11;
 struct l2cap_chan *VAR_12;

 VAR_11 = FUNC_5(VAR_6, VAR_2, VAR_9, &VAR_4, VAR_10);
 if (!VAR_11)
  return ((void*)0);

 FUNC_7(VAR_7, VAR_11);
 FUNC_0(&FUNC_1(VAR_11)->accept_q);

 VAR_11->sk_destruct = VAR_5;
 VAR_11->sk_sndtimeo = VAR_1;

 FUNC_8(VAR_11, VAR_3);

 VAR_11->sk_protocol = VAR_8;
 VAR_11->sk_state = VAR_0;

 VAR_12 = FUNC_2();
 if (!VAR_12) {
  FUNC_6(VAR_11);
  return ((void*)0);
 }

 FUNC_3(VAR_12);

 FUNC_4(VAR_11)->chan = VAR_12;

 return VAR_11;
}
