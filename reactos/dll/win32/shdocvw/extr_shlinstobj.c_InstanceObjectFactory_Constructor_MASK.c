
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {TYPE_3__ IClassFactory_iface; int * m_pPropertyBag; int m_clsidInstance; scalar_t__ m_cRef; } ;
typedef int REFIID ;
typedef int * REFCLSID ;
typedef int LPVOID ;
typedef TYPE_1__ InstanceObjectFactory ;
typedef int IPropertyBag ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,int *,int ,int *) ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int) ;

__attribute__((used)) static HRESULT FUNC_7(REFCLSID VAR_2, IPropertyBag *VAR_3,
                                                 REFIID VAR_4, LPVOID *VAR_5)
{
    InstanceObjectFactory *VAR_6;
    HRESULT VAR_7 = VAR_0;

    FUNC_4("(RegistryPropertyBag=%p, riid=%s, ppvObject=%p)\n", VAR_3,
        FUNC_5(VAR_4), VAR_5);

    VAR_6 = FUNC_6(sizeof(InstanceObjectFactory));
    if (VAR_6) {
        VAR_6->IClassFactory_iface.lpVtbl = &VAR_1;
        VAR_6->m_cRef = 0;
        VAR_6->m_clsidInstance = *VAR_2;
        VAR_6->m_pPropertyBag = VAR_3;
        FUNC_3(VAR_3);

        FUNC_0(&VAR_6->IClassFactory_iface);
        VAR_7 = FUNC_1(&VAR_6->IClassFactory_iface,
                                          VAR_4, VAR_5);
        FUNC_2(&VAR_6->IClassFactory_iface);
    }

    return VAR_7;
}
