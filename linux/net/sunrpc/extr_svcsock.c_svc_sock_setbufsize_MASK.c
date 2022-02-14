
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* xpt_server; } ;
struct svc_sock {struct socket* sk_sock; TYPE_2__ sk_xprt; } ;
struct socket {TYPE_3__* sk; } ;
struct TYPE_8__ {unsigned int sk_sndbuf; unsigned int sk_rcvbuf; int (* sk_write_space ) (TYPE_3__*) ;} ;
struct TYPE_6__ {unsigned int sv_max_mesg; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 unsigned int FUNC_1 (unsigned int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_4(struct svc_sock *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = VAR_1->sk_xprt.xpt_server->sv_max_mesg;
 struct socket *VAR_4 = VAR_1->sk_sock;

 VAR_2 = FUNC_1(VAR_2, VAR_0 / 2 / VAR_3);

 FUNC_0(VAR_4->sk);
 VAR_4->sk->sk_sndbuf = VAR_2 * VAR_3 * 2;
 VAR_4->sk->sk_rcvbuf = VAR_2 * VAR_3 * 2;
 VAR_4->sk->sk_write_space(VAR_4->sk);
 FUNC_2(VAR_4->sk);
}
