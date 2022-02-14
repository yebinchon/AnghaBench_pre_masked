
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* vtbl; } ;
struct TYPE_6__ {TYPE_3__ node; } ;
struct TYPE_5__ {int (* get_dispid ) (TYPE_3__*,int ,int ,int *) ;} ;
typedef TYPE_2__ HTMLElement ;
typedef int HRESULT ;
typedef int DispatchEx ;
typedef int DWORD ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_2(DispatchEx *VAR_1, BSTR VAR_2,
        DWORD VAR_3, DISPID *VAR_4)
{
    HTMLElement *VAR_5 = FUNC_0(VAR_1);

    if(VAR_5->node.vtbl->get_dispid)
        return VAR_5->node.vtbl->get_dispid(&VAR_5->node, VAR_2, VAR_3, VAR_4);

    return VAR_0;
}
