
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int IHTMLDOMAttribute_iface; } ;
typedef scalar_t__ LONG ;
typedef TYPE_1__ HTMLDOMAttribute ;
typedef int HTMLAttributeCollection ;
typedef int HRESULT ;
typedef int DispatchEx ;
typedef int DWORD ;
typedef scalar_t__ DISPID ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int *,int ,int ,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,scalar_t__*) ;
 int FUNC_6 (int *,scalar_t__,scalar_t__*,TYPE_1__**) ;

__attribute__((used)) static HRESULT FUNC_7(DispatchEx *VAR_2, BSTR VAR_3, DWORD VAR_4, DISPID *VAR_5)
{
    HTMLAttributeCollection *VAR_6 = FUNC_1(VAR_2);
    HTMLDOMAttribute *VAR_7;
    LONG VAR_8;
    HRESULT VAR_9;

    FUNC_3("(%p)->(%s %x %p)\n", VAR_6, FUNC_4(VAR_3), VAR_4, VAR_5);

    VAR_9 = FUNC_5(VAR_6, VAR_3, VAR_5);
    if(FUNC_0(VAR_9))
        return VAR_9;

    VAR_9 = FUNC_6(VAR_6, *VAR_5, &VAR_8, &VAR_7);
    if(FUNC_0(VAR_9))
        return VAR_9;
    FUNC_2(&VAR_7->IHTMLDOMAttribute_iface);

    *VAR_5 = VAR_0+VAR_8;
    return VAR_1;
}
