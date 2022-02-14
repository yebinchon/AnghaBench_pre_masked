
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sock {int sk_protocol; int sk_timer; int sk_state; int sk_sndtimeo; int sk_destruct; } ;
struct net {int dummy; } ;
typedef int gfp_t ;
struct TYPE_4__ {int accept_q; } ;
struct TYPE_3__ {int setting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (int *,struct sock*) ;
 TYPE_1__* FUNC_3 (struct sock*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct sock* FUNC_4 (struct net*,int ,int ,int *,int) ;
 int FUNC_5 (struct socket*,struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 int FUNC_7 (int *,int ,int ) ;

__attribute__((used)) static struct sock *FUNC_8(struct net *VAR_9, struct socket *VAR_10,
       int VAR_11, gfp_t VAR_12, int VAR_13)
{
 struct sock *VAR_14;

 VAR_14 = FUNC_4(VAR_9, VAR_2, VAR_12, &VAR_5, VAR_13);
 if (!VAR_14)
  return ((void*)0);

 FUNC_5(VAR_10, VAR_14);
 FUNC_0(&FUNC_1(VAR_14)->accept_q);

 VAR_14->sk_destruct = VAR_7;
 VAR_14->sk_sndtimeo = VAR_3;

 FUNC_6(VAR_14, VAR_4);

 VAR_14->sk_protocol = VAR_11;
 VAR_14->sk_state = VAR_0;

 FUNC_3(VAR_14)->setting = VAR_1;

 FUNC_7(&VAR_14->sk_timer, VAR_8, 0);

 FUNC_2(&VAR_6, VAR_14);
 return VAR_14;
}
