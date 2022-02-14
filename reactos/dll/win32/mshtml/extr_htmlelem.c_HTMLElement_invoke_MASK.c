
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
typedef int VARIANT ;
struct TYPE_8__ {TYPE_1__* vtbl; } ;
struct TYPE_7__ {TYPE_3__ node; } ;
struct TYPE_6__ {int (* invoke ) (TYPE_3__*,int ,int ,int ,int *,int *,int *,int *) ;} ;
typedef int LCID ;
typedef int IServiceProvider ;
typedef TYPE_2__ HTMLElement ;
typedef int HRESULT ;
typedef int EXCEPINFO ;
typedef int DispatchEx ;
typedef int DISPPARAMS ;
typedef int DISPID ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int *,int *,int *,int *) ;

__attribute__((used)) static HRESULT FUNC_3(DispatchEx *VAR_1, DISPID VAR_2, LCID VAR_3,
        WORD VAR_4, DISPPARAMS *VAR_5, VARIANT *VAR_6, EXCEPINFO *VAR_7,
        IServiceProvider *VAR_8)
{
    HTMLElement *VAR_9 = FUNC_1(VAR_1);

    if(VAR_9->node.vtbl->invoke)
        return VAR_9->node.vtbl->invoke(&VAR_9->node, VAR_2, VAR_3, VAR_4,
                VAR_5, VAR_6, VAR_7, VAR_8);

    FUNC_0("(%p): element has no invoke method\n", VAR_9);
    return VAR_0;
}
