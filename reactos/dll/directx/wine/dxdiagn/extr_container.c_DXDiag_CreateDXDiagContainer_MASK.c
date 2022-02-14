
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_4__ {TYPE_2__ IDxDiagContainer_iface; int * pProv; int * cont; scalar_t__ ref; } ;
typedef int REFIID ;
typedef int * LPVOID ;
typedef int IDxDiagProvider ;
typedef int IDxDiagContainerImpl_Container ;
typedef TYPE_1__ IDxDiagContainerImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int **) ;
 int FUNC_5 (int ) ;

HRESULT FUNC_6(REFIID VAR_2, IDxDiagContainerImpl_Container *VAR_3, IDxDiagProvider *VAR_4, LPVOID *VAR_5) {
  IDxDiagContainerImpl* VAR_6;

  FUNC_4("(%s, %p)\n", FUNC_5(VAR_2), VAR_5);

  VAR_6 = FUNC_1(FUNC_0(), 0, sizeof(IDxDiagContainerImpl));
  if (((void*)0) == VAR_6) {
    *VAR_5 = ((void*)0);
    return VAR_1;
  }
  VAR_6->IDxDiagContainer_iface.lpVtbl = &VAR_0;
  VAR_6->ref = 0;
  VAR_6->cont = VAR_3;
  VAR_6->pProv = VAR_4;
  FUNC_3(VAR_4);
  return FUNC_2(&VAR_6->IDxDiagContainer_iface, VAR_2, VAR_5);
}
