
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsock_sock {int * trans; } ;
struct TYPE_4__ {int elem; TYPE_1__* notify_ops; int lock; int * sk; } ;
struct TYPE_3__ {int (* socket_destruct ) (struct vsock_sock*) ;} ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vsock_sock*) ;
 TYPE_2__* FUNC_5 (struct vsock_sock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_6(struct vsock_sock *VAR_3)
{

 if (!FUNC_5(VAR_3))
  return;




 FUNC_2(&FUNC_5(VAR_3)->lock);
 FUNC_5(VAR_3)->sk = ((void*)0);
 FUNC_3(&FUNC_5(VAR_3)->lock);

 if (FUNC_5(VAR_3)->notify_ops)
  FUNC_5(VAR_3)->notify_ops->socket_destruct(VAR_3);

 FUNC_2(&VAR_1);
 FUNC_0(&FUNC_5(VAR_3)->elem, &VAR_0);
 FUNC_3(&VAR_1);
 FUNC_1(&VAR_2);

 VAR_3->trans = ((void*)0);
}
