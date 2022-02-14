
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {int sk_max_ack_backlog; scalar_t__ sk_reuse; int sk_state; } ;
struct sctp_endpoint {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bind_hash; scalar_t__ reuse; struct sctp_endpoint* ep; } ;
struct TYPE_3__ {int fastreuse; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;
 TYPE_2__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 scalar_t__ FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct sctp_endpoint*) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct socket *VAR_6, int VAR_7)
{
 struct sock *VAR_8 = VAR_6->sk;
 struct sctp_endpoint *VAR_9 = FUNC_3(VAR_8)->ep;
 int VAR_10 = -VAR_1;

 if (FUNC_7(VAR_7 < 0))
  return VAR_10;

 FUNC_0(VAR_8);


 if (FUNC_5(VAR_8, VAR_5))
  goto out;

 if (VAR_6->state != VAR_4)
  goto out;

 if (!FUNC_4(VAR_8, VAR_2) && !FUNC_4(VAR_8, VAR_0))
  goto out;


 if (!VAR_7) {
  if (FUNC_4(VAR_8, VAR_0))
   goto out;

  VAR_10 = 0;
  FUNC_6(VAR_9);
  VAR_8->sk_state = VAR_3;
  if (VAR_8->sk_reuse || FUNC_3(VAR_8)->reuse)
   FUNC_3(VAR_8)->bind_hash->fastreuse = 1;
  goto out;
 }


 if (FUNC_4(VAR_8, VAR_2))
  VAR_8->sk_max_ack_backlog = VAR_7;
 else {
  VAR_10 = FUNC_2(VAR_8, VAR_7);
  if (VAR_10)
   goto out;
 }

 VAR_10 = 0;
out:
 FUNC_1(VAR_8);
 return VAR_10;
}
