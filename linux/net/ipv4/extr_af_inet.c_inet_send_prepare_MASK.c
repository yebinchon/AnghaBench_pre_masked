
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_4__ {int inet_num; } ;
struct TYPE_3__ {int no_autobind; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_1)
{
 FUNC_2(VAR_1);


 if (!FUNC_1(VAR_1)->inet_num && !VAR_1->sk_prot->no_autobind &&
     FUNC_0(VAR_1))
  return -VAR_0;

 return 0;
}
