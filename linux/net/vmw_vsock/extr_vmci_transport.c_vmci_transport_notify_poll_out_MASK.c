
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsock_sock {int sk; } ;
struct TYPE_4__ {TYPE_1__* notify_ops; } ;
struct TYPE_3__ {int (* poll_out ) (int *,size_t,int*) ;} ;


 int FUNC_0 (int *,size_t,int*) ;
 TYPE_2__* FUNC_1 (struct vsock_sock*) ;

__attribute__((used)) static int FUNC_2(
 struct vsock_sock *VAR_0,
 size_t VAR_1,
 bool *VAR_2)
{
 return FUNC_1(VAR_0)->notify_ops->poll_out(
   &VAR_0->sk, VAR_1, VAR_2);
}
