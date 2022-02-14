
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int riidInst; scalar_t__ pcRefDll; int lpfnCI; TYPE_1__ IClassFactory_iface; } ;
typedef int REFIID ;
typedef scalar_t__ PLONG ;
typedef int LPFNCREATEINSTANCE ;
typedef int * LPCLASSFACTORY ;
typedef TYPE_2__ IDefClFImpl ;
typedef int IClassFactory ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static IClassFactory * FUNC_5(LPFNCREATEINSTANCE VAR_1, PLONG VAR_2, REFIID VAR_3)
{
 IDefClFImpl* VAR_4;

 VAR_4 = FUNC_1(FUNC_0(),0,sizeof(IDefClFImpl));
 VAR_4->ref = 1;
 VAR_4->IClassFactory_iface.lpVtbl = &VAR_0;
 VAR_4->lpfnCI = VAR_1;
 VAR_4->pcRefDll = VAR_2;

 if (VAR_2) FUNC_2(VAR_2);
 VAR_4->riidInst = VAR_3;

 FUNC_3("(%p)%s\n",VAR_4, FUNC_4(VAR_3));
 return (LPCLASSFACTORY)VAR_4;
}
