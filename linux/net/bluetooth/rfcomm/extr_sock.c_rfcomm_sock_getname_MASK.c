
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_rc {int rc_bdaddr; int rc_channel; int rc_family; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct TYPE_2__ {int src; int dst; int channel; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct sockaddr_rc*,int ,int) ;
 TYPE_1__* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_5, struct sockaddr *VAR_6, int VAR_7)
{
 struct sockaddr_rc *VAR_8 = (struct sockaddr_rc *) VAR_6;
 struct sock *VAR_9 = VAR_5->sk;

 FUNC_0("sock %p, sk %p", VAR_5, VAR_9);

 if (VAR_7 && VAR_9->sk_state != VAR_3 &&
     VAR_9->sk_state != VAR_1 && VAR_9->sk_state != VAR_2)
  return -VAR_4;

 FUNC_2(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->rc_family = VAR_0;
 VAR_8->rc_channel = FUNC_3(VAR_9)->channel;
 if (VAR_7)
  FUNC_1(&VAR_8->rc_bdaddr, &FUNC_3(VAR_9)->dst);
 else
  FUNC_1(&VAR_8->rc_bdaddr, &FUNC_3(VAR_9)->src);

 return sizeof(struct sockaddr_rc);
}
