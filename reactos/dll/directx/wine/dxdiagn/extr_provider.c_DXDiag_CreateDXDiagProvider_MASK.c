
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_4__ {TYPE_2__ IDxDiagProvider_iface; scalar_t__ ref; } ;
typedef int REFIID ;
typedef int * LPVOID ;
typedef scalar_t__ LPUNKNOWN ;
typedef int LPCLASSFACTORY ;
typedef TYPE_1__ IDxDiagProviderImpl ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,int ,int **) ;
 int FUNC_3 (char*,scalar_t__,int ,int **) ;
 int FUNC_4 (int ) ;

HRESULT FUNC_5(LPCLASSFACTORY VAR_4, LPUNKNOWN VAR_5, REFIID VAR_6, LPVOID *VAR_7) {
  IDxDiagProviderImpl* VAR_8;

  FUNC_3("(%p, %s, %p)\n", VAR_5, FUNC_4(VAR_6), VAR_7);

  *VAR_7 = ((void*)0);
  if (VAR_5) return VAR_0;

  VAR_8 = FUNC_1(FUNC_0(), VAR_3, sizeof(IDxDiagProviderImpl));
  if (((void*)0) == VAR_8) return VAR_2;
  VAR_8->IDxDiagProvider_iface.lpVtbl = &VAR_1;
  VAR_8->ref = 0;
  return FUNC_2(&VAR_8->IDxDiagProvider_iface, VAR_6, VAR_7);
}
