
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct module {int dummy; } ;
struct inet_timewait_sock {TYPE_2__* tw_prot; } ;
struct TYPE_4__ {TYPE_1__* twsk_prot; int name; struct module* owner; } ;
struct TYPE_3__ {int twsk_slab; } ;


 int FUNC_0 (int ,struct inet_timewait_sock*) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (char*,int ,struct inet_timewait_sock*) ;
 int FUNC_3 (struct sock*) ;

void FUNC_4(struct inet_timewait_sock *VAR_0)
{
 struct module *VAR_1 = VAR_0->tw_prot->owner;
 FUNC_3((struct sock *)VAR_0);



 FUNC_0(VAR_0->tw_prot->twsk_prot->twsk_slab, VAR_0);
 FUNC_1(VAR_1);
}
