
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nf_queue_handler {int (* nf_hook_drop ) (struct net*) ;} ;
struct TYPE_2__ {int queue_handler; } ;
struct net {TYPE_1__ nf; } ;


 struct nf_queue_handler* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct net*) ;

void FUNC_4(struct net *VAR_0)
{
 const struct nf_queue_handler *VAR_1;

 FUNC_1();
 VAR_1 = FUNC_0(VAR_0->nf.queue_handler);
 if (VAR_1)
  VAR_1->nf_hook_drop(VAR_0);
 FUNC_2();
}
