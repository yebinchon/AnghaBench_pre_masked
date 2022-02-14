
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_qrtr {int sq_port; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int sq_port; } ;
struct qrtr_sock {TYPE_1__ us; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qrtr_sock*,int*) ;
 int FUNC_1 (struct qrtr_sock*) ;
 int FUNC_2 () ;
 struct qrtr_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_2,
         const struct sockaddr_qrtr *VAR_3, int VAR_4)
{
 struct qrtr_sock *VAR_5 = FUNC_3(VAR_2->sk);
 struct sock *VAR_6 = VAR_2->sk;
 int VAR_7;
 int VAR_8;


 if (!VAR_4 && VAR_3->sq_port == VAR_5->us.sq_port)
  return 0;

 VAR_7 = VAR_3->sq_port;
 VAR_8 = FUNC_0(VAR_5, &VAR_7);
 if (VAR_8)
  return VAR_8;


 if (!VAR_4)
  FUNC_1(VAR_5);
 VAR_5->us.sq_port = VAR_7;

 FUNC_4(VAR_6, VAR_1);


 if (VAR_7 == VAR_0)
  FUNC_2();

 return 0;
}
