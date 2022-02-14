
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {TYPE_1__* sk_prot; } ;
struct TYPE_4__ {int user_ns; } ;
struct TYPE_3__ {int (* diag_destroy ) (struct sock*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 TYPE_2__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int) ;

int FUNC_3(struct sock *VAR_3, int VAR_4)
{
 if (!FUNC_0(FUNC_1(VAR_3)->user_ns, VAR_0))
  return -VAR_2;

 if (!VAR_3->sk_prot->diag_destroy)
  return -VAR_1;

 return VAR_3->sk_prot->diag_destroy(VAR_3, VAR_4);
}
