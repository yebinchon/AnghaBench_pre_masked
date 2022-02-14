
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int maxCons; TYPE_1__ IDataAdviseHolder_iface; int * delegate; void* remote_connections; void* connections; } ;
typedef TYPE_1__ IDataAdviseHolder ;
typedef TYPE_2__ DataAdviseHolder ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_2 (char*,TYPE_1__*) ;

__attribute__((used)) static IDataAdviseHolder *FUNC_3(void)
{
  DataAdviseHolder* VAR_3;

  VAR_3 = FUNC_1(FUNC_0(), 0, sizeof(DataAdviseHolder));

  VAR_3->IDataAdviseHolder_iface.lpVtbl = &VAR_0;
  VAR_3->ref = 1;
  VAR_3->maxCons = VAR_2;
  VAR_3->connections = FUNC_1(FUNC_0(), VAR_1,
                                     VAR_3->maxCons * sizeof(*VAR_3->connections));
  VAR_3->remote_connections = FUNC_1(FUNC_0(), VAR_1,
                                            VAR_3->maxCons * sizeof(*VAR_3->remote_connections));
  VAR_3->delegate = ((void*)0);

  FUNC_2("returning %p\n", &VAR_3->IDataAdviseHolder_iface);
  return &VAR_3->IDataAdviseHolder_iface;
}
