
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * lpVtbl; } ;
struct TYPE_6__ {TYPE_3__ IPropertyBag_iface; int m_hInitPropertyBagKey; scalar_t__ m_cRef; } ;
typedef TYPE_1__ RegistryPropertyBag ;
typedef int REFIID ;
typedef int LPVOID ;
typedef int HRESULT ;
typedef int HKEY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int *) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int) ;

__attribute__((used)) static HRESULT FUNC_6(HKEY VAR_2, REFIID VAR_3, LPVOID *VAR_4) {
    HRESULT VAR_5 = VAR_0;
    RegistryPropertyBag *VAR_6;

    FUNC_3("(hInitPropertyBagKey=%p, riid=%s, ppvObject=%p)\n", VAR_2,
        FUNC_4(VAR_3), VAR_4);

    VAR_6 = FUNC_5(sizeof(RegistryPropertyBag));
    if (VAR_6) {
        VAR_6->IPropertyBag_iface.lpVtbl = &VAR_1;
        VAR_6->m_cRef = 0;
        VAR_6->m_hInitPropertyBagKey = VAR_2;



        FUNC_0(&VAR_6->IPropertyBag_iface);
        VAR_5 = FUNC_1(&VAR_6->IPropertyBag_iface, VAR_3, VAR_4);
        FUNC_2(&VAR_6->IPropertyBag_iface);
    }

    return VAR_5;
}
