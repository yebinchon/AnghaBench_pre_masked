
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int owner; int remote_addr; int local_addr; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int (* destruct ) (struct vsock_sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vsock_sock*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 struct vsock_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_3)
{
 struct vsock_sock *VAR_4 = FUNC_3(VAR_3);

 VAR_2->destruct(VAR_4);




 FUNC_2(&VAR_4->local_addr, VAR_0, VAR_1);
 FUNC_2(&VAR_4->remote_addr, VAR_0, VAR_1);

 FUNC_0(VAR_4->owner);
}
