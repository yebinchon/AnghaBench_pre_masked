
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_xprt {int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_xprt*) ;
 int FUNC_1 (char*,struct rpc_xprt*) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static bool
FUNC_3(struct rpc_xprt *VAR_1)
{
 if (FUNC_2(VAR_0, &VAR_1->state)) {
  FUNC_0(VAR_1);
  FUNC_1("RPC:       write space: waking waiting task on "
    "xprt %p\n", VAR_1);
  return 1;
 }
 return 0;
}
