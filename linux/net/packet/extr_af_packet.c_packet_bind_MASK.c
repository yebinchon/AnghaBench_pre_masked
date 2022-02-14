
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_ll {scalar_t__ sll_family; scalar_t__ sll_protocol; int sll_ifindex; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,int *,int ,int ) ;
 TYPE_1__* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_2, struct sockaddr *VAR_3, int VAR_4)
{
 struct sockaddr_ll *VAR_5 = (struct sockaddr_ll *)VAR_3;
 struct sock *VAR_6 = VAR_2->sk;





 if (VAR_4 < sizeof(struct sockaddr_ll))
  return -VAR_1;
 if (VAR_5->sll_family != VAR_0)
  return -VAR_1;

 return FUNC_0(VAR_6, ((void*)0), VAR_5->sll_ifindex,
         VAR_5->sll_protocol ? : FUNC_1(VAR_6)->num);
}
