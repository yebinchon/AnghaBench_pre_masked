
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int sk_family; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct socket*,struct sockaddr*,int) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_2,
       struct sockaddr *VAR_3, int VAR_4)
{
 FUNC_0(!VAR_2);
 FUNC_0(!VAR_2->sk);
 FUNC_0(!VAR_3);
 FUNC_0(FUNC_4());

 return FUNC_2(VAR_2->sk->sk_family,
    FUNC_3(VAR_2, VAR_3, VAR_4),
    FUNC_1(VAR_1, VAR_0, VAR_2->sk));
}
