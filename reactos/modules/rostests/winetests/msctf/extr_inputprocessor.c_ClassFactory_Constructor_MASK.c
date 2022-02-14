
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; TYPE_1__ IClassFactory_iface; int ctor; } ;
typedef TYPE_1__* LPVOID ;
typedef int LPFNCONSTRUCTOR ;
typedef int HRESULT ;
typedef TYPE_2__ ClassFactory ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_2(LPFNCONSTRUCTOR VAR_3, LPVOID *VAR_4)
{
    ClassFactory *VAR_5 = FUNC_1(FUNC_0(),0,sizeof(ClassFactory));
    VAR_5->IClassFactory_iface.lpVtbl = &VAR_0;
    VAR_5->ref = 1;
    VAR_5->ctor = VAR_3;
    *VAR_4 = &VAR_5->IClassFactory_iface;
    VAR_2++;
    return VAR_1;
}
