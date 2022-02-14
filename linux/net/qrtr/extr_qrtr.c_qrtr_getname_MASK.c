
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_qrtr {int sq_family; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; } ;
struct qrtr_sock {struct sockaddr_qrtr us; struct sockaddr_qrtr peer; } ;
typedef int qaddr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sockaddr*,struct sockaddr_qrtr*,int) ;
 struct qrtr_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_3, struct sockaddr *VAR_4,
   int VAR_5)
{
 struct qrtr_sock *VAR_6 = FUNC_2(VAR_3->sk);
 struct sockaddr_qrtr VAR_7;
 struct sock *VAR_8 = VAR_3->sk;

 FUNC_0(VAR_8);
 if (VAR_5) {
  if (VAR_8->sk_state != VAR_2) {
   FUNC_3(VAR_8);
   return -VAR_1;
  }

  VAR_7 = VAR_6->peer;
 } else {
  VAR_7 = VAR_6->us;
 }
 FUNC_3(VAR_8);

 VAR_7.sq_family = VAR_0;

 FUNC_1(VAR_4, &VAR_7, sizeof(VAR_7));

 return sizeof(VAR_7);
}
