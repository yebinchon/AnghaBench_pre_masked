
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr {int sa_data; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int num; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct sock*,char*,int ,int ) ;
 TYPE_1__* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct socket *VAR_1, struct sockaddr *VAR_2,
       int VAR_3)
{
 struct sock *VAR_4 = VAR_1->sk;
 char VAR_5[sizeof(VAR_2->sa_data) + 1];





 if (VAR_3 != sizeof(struct sockaddr))
  return -VAR_0;



 FUNC_0(VAR_5, VAR_2->sa_data, sizeof(VAR_2->sa_data));
 VAR_5[sizeof(VAR_2->sa_data)] = 0;

 return FUNC_1(VAR_4, VAR_5, 0, FUNC_2(VAR_4)->num);
}
