
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {scalar_t__ sk_protocol; TYPE_1__* sk_prot; } ;
struct request_sock {struct sock* rsk_listener; } ;
struct TYPE_6__ {scalar_t__ tfo_listener; } ;
struct TYPE_5__ {int fastopen_rsk; } ;
struct TYPE_4__ {int orphan_count; int (* disconnect ) (struct sock*,int ) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 struct request_sock* FUNC_4 (int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,int ) ;
 TYPE_3__* FUNC_7 (struct request_sock*) ;
 TYPE_2__* FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_2, struct request_sock *VAR_3,
         struct sock *VAR_4)
{
 VAR_2->sk_prot->disconnect(VAR_4, VAR_1);

 FUNC_5(VAR_4);

 FUNC_3(VAR_2->sk_prot->orphan_count);

 if (VAR_2->sk_protocol == VAR_0 && FUNC_7(VAR_3)->tfo_listener) {
  FUNC_0(FUNC_4(FUNC_8(VAR_4)->fastopen_rsk) != VAR_3);
  FUNC_0(VAR_2 != VAR_3->rsk_listener);







  FUNC_1(FUNC_8(VAR_4)->fastopen_rsk, ((void*)0));
 }
 FUNC_2(VAR_4);
}
