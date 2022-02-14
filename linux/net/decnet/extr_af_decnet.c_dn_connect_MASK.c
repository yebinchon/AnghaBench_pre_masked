
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sockaddr_dn {int dummy; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sockaddr_dn*,int,long*,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 long FUNC_3 (struct sock*,int) ;

__attribute__((used)) static int FUNC_4(struct socket *VAR_1, struct sockaddr *VAR_2, int VAR_3, int VAR_4)
{
 struct sockaddr_dn *VAR_5 = (struct sockaddr_dn *)VAR_2;
 struct sock *VAR_6 = VAR_1->sk;
 int VAR_7;
 long VAR_8 = FUNC_3(VAR_6, VAR_4 & VAR_0);

 FUNC_1(VAR_6);
 VAR_7 = FUNC_0(VAR_6, VAR_5, VAR_3, &VAR_8, 0);
 FUNC_2(VAR_6);

 return VAR_7;
}
