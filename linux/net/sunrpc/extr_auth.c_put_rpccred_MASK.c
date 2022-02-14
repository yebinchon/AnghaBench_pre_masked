
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpc_cred {TYPE_1__* cr_ops; int cr_count; int cr_flags; int cr_expire; } ;
struct TYPE_2__ {int (* crdestroy ) (struct rpc_cred*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rpc_cred*) ;
 int FUNC_5 (struct rpc_cred*) ;
 scalar_t__ FUNC_6 (struct rpc_cred*) ;
 int FUNC_7 (struct rpc_cred*) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int) ;

void
FUNC_10(struct rpc_cred *VAR_3)
{
 if (VAR_3 == ((void*)0))
  return;
 FUNC_0();
 if (FUNC_2(&VAR_3->cr_count))
  goto destroy;
 if (FUNC_3(&VAR_3->cr_count) != 1 ||
     !FUNC_8(VAR_0, &VAR_3->cr_flags))
  goto out;
 if (FUNC_8(VAR_1, &VAR_3->cr_flags) != 0) {
  VAR_3->cr_expire = VAR_2;
  FUNC_4(VAR_3);

  if (FUNC_9(!FUNC_8(VAR_0, &VAR_3->cr_flags)))
   FUNC_5(VAR_3);
 } else if (FUNC_6(VAR_3)) {
  FUNC_5(VAR_3);
  if (FUNC_2(&VAR_3->cr_count))
   goto destroy;
 }
out:
 FUNC_1();
 return;
destroy:
 FUNC_1();
 VAR_3->cr_ops->crdestroy(VAR_3);
}
