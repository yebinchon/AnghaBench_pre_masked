
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_qrtr {scalar_t__ sq_port; int sq_node; int sq_family; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct socket*,struct sockaddr_qrtr*,int) ;
 int VAR_2 ;
 int FUNC_1 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_3)
{
 struct sock *VAR_4 = VAR_3->sk;
 struct sockaddr_qrtr VAR_5;

 if (!FUNC_1(VAR_4, VAR_1))
  return 0;

 VAR_5.sq_family = VAR_0;
 VAR_5.sq_node = VAR_2;
 VAR_5.sq_port = 0;

 return FUNC_0(VAR_3, &VAR_5, 1);
}
