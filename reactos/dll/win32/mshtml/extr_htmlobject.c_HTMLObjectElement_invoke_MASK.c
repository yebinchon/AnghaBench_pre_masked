
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
typedef int VARIANT ;
struct TYPE_4__ {int plugin_container; } ;
typedef int LCID ;
typedef int IServiceProvider ;
typedef TYPE_1__ HTMLObjectElement ;
typedef int HTMLDOMNode ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef int DISPPARAMS ;
typedef int DISPID ;


 int FUNC_0 (char*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_3(HTMLDOMNode *VAR_0, DISPID VAR_1, LCID VAR_2,
        WORD VAR_3, DISPPARAMS *VAR_4, VARIANT *VAR_5, EXCEPINFO *VAR_6, IServiceProvider *VAR_7)
{
    HTMLObjectElement *VAR_8 = FUNC_1(VAR_0);

    FUNC_0("(%p)->(%d)\n", VAR_8, VAR_1);

    return FUNC_2(&VAR_8->plugin_container, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
