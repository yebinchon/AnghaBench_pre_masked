
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunrpc_net {int gssp_lock; int * gssp_clnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct sunrpc_net *VAR_0)
{
 FUNC_0(&VAR_0->gssp_lock);
 if (VAR_0->gssp_clnt) {
  FUNC_2(VAR_0->gssp_clnt);
  VAR_0->gssp_clnt = ((void*)0);
 }
 FUNC_1(&VAR_0->gssp_lock);
}
