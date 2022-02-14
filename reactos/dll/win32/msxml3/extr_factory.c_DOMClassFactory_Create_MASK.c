
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {TYPE_4__ IClassFactory_iface; int pCreateInstance; int version; scalar_t__ ref; } ;
typedef int REFIID ;
typedef int HRESULT ;
typedef int GUID ;
typedef int DOMFactoryCreateInstanceFunc ;
typedef TYPE_1__ DOMFactory ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*,int ,void**) ;
 int FUNC_2 (int const*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_5(const GUID *VAR_1, REFIID VAR_2, void **VAR_3, DOMFactoryCreateInstanceFunc VAR_4)
{
    DOMFactory *VAR_5 = FUNC_3(sizeof(DOMFactory));
    HRESULT VAR_6;

    VAR_5->IClassFactory_iface.lpVtbl = &VAR_0;
    VAR_5->ref = 0;
    VAR_5->version = FUNC_2(VAR_1);
    VAR_5->pCreateInstance = VAR_4;

    VAR_6 = FUNC_1(&VAR_5->IClassFactory_iface, VAR_2, VAR_3);
    if(FUNC_0(VAR_6)) {
        FUNC_4(VAR_5);
        *VAR_3 = ((void*)0);
    }
    return VAR_6;
}
