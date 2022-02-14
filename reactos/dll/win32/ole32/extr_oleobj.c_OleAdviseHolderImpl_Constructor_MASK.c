
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int ref; int max_cons; TYPE_2__ IOleAdviseHolder_iface; void* connections; } ;
typedef TYPE_1__ OleAdviseHolderImpl ;
typedef TYPE_2__ IOleAdviseHolder ;


 int FUNC_0 () ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_2__*) ;
 int VAR_2 ;

__attribute__((used)) static IOleAdviseHolder *FUNC_3(void)
{
  OleAdviseHolderImpl* VAR_3;

  VAR_3 = FUNC_1(FUNC_0(), 0, sizeof(OleAdviseHolderImpl));

  VAR_3->IOleAdviseHolder_iface.lpVtbl = &VAR_2;
  VAR_3->ref = 1;
  VAR_3->max_cons = VAR_1;
  VAR_3->connections = FUNC_1(FUNC_0(), VAR_0,
                                 VAR_3->max_cons * sizeof(*VAR_3->connections));

  FUNC_2("returning %p\n", &VAR_3->IOleAdviseHolder_iface);
  return &VAR_3->IOleAdviseHolder_iface;
}
