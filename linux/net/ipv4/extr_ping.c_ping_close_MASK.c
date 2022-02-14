
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_refcnt; } ;
struct TYPE_3__ {int inet_num; } ;


 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (char*,TYPE_1__*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_0, long VAR_1)
{
 FUNC_1("ping_close(sk=%p,sk->num=%u)\n",
   FUNC_0(VAR_0), FUNC_0(VAR_0)->inet_num);
 FUNC_1("isk->refcnt = %d\n", FUNC_2(&VAR_0->sk_refcnt));

 FUNC_3(VAR_0);
}
