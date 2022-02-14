
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct gss_upcall_msg {int service_name; TYPE_1__* auth; int rpc_waitqueue; int * ctx; int list; int count; } ;
struct TYPE_2__ {struct net* net; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct gss_upcall_msg*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct net*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct gss_upcall_msg *VAR_0)
{
 struct net *VAR_1 = VAR_0->auth->net;
 if (!FUNC_7(&VAR_0->count))
  return;
 FUNC_6(VAR_1);
 FUNC_0(!FUNC_5(&VAR_0->list));
 if (VAR_0->ctx != ((void*)0))
  FUNC_2(VAR_0->ctx);
 FUNC_8(&VAR_0->rpc_waitqueue);
 FUNC_1(VAR_0->auth);
 FUNC_4(VAR_0->service_name);
 FUNC_3(VAR_0);
}
