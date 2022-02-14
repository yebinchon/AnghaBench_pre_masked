
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; TYPE_1__* sk_prot; } ;
struct TYPE_6__ {int icsk_bind_hash; } ;
struct TYPE_5__ {scalar_t__ inet_num; } ;
struct TYPE_4__ {int orphan_count; int (* destroy ) (struct sock*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (struct sock*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;

void FUNC_11(struct sock *VAR_2)
{
 FUNC_0(VAR_2->sk_state != VAR_1);
 FUNC_0(!FUNC_7(VAR_2, VAR_0));


 FUNC_0(!FUNC_6(VAR_2));


 FUNC_0(FUNC_2(VAR_2)->inet_num && !FUNC_1(VAR_2)->icsk_bind_hash);

 VAR_2->sk_prot->destroy(VAR_2);

 FUNC_5(VAR_2);

 FUNC_10(VAR_2);

 FUNC_4(VAR_2);

 FUNC_3(VAR_2->sk_prot->orphan_count);

 FUNC_8(VAR_2);
}
