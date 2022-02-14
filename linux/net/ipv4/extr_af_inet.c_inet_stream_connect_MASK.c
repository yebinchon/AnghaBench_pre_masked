
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (struct socket*,struct sockaddr*,int,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct socket *VAR_0, struct sockaddr *VAR_1,
   int VAR_2, int VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_0->sk);
 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0);
 FUNC_2(VAR_0->sk);
 return VAR_4;
}
