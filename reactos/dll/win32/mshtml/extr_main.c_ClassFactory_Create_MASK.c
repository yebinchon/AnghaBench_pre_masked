
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {TYPE_4__ IClassFactory_iface; int fnCreateInstance; scalar_t__ ref; } ;
typedef int REFIID ;
typedef int HRESULT ;
typedef int CreateInstanceFunc ;
typedef TYPE_1__ ClassFactory ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*,int ,void**) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_4(REFIID VAR_1, void **VAR_2, CreateInstanceFunc VAR_3)
{
    ClassFactory *VAR_4 = FUNC_2(sizeof(ClassFactory));
    HRESULT VAR_5;

    VAR_4->IClassFactory_iface.lpVtbl = &VAR_0;
    VAR_4->ref = 0;
    VAR_4->fnCreateInstance = VAR_3;

    VAR_5 = FUNC_1(&VAR_4->IClassFactory_iface, VAR_1, VAR_2);
    if(FUNC_0(VAR_5)) {
        FUNC_3(VAR_4);
        *VAR_2 = ((void*)0);
    }
    return VAR_5;
}
