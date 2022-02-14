
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_1__ IClassFactory_iface; int ctor; } ;
typedef TYPE_1__* LPVOID ;
typedef int LPFNCONSTRUCTOR ;
typedef int HRESULT ;
typedef TYPE_2__ ClassFactory ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (char*,TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_3(LPFNCONSTRUCTOR VAR_2, LPVOID *VAR_3)
{
    ClassFactory *VAR_4 = FUNC_1(FUNC_0(),0,sizeof(ClassFactory));
    VAR_4->IClassFactory_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 1;
    VAR_4->ctor = VAR_2;
    *VAR_3 = &VAR_4->IClassFactory_iface;
    FUNC_2("Created class factory %p\n", VAR_4);
    return VAR_1;
}
