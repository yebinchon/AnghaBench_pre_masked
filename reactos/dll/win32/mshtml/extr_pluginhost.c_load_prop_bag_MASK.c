
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* element; } ;
struct TYPE_6__ {int nselem; } ;
struct TYPE_7__ {TYPE_1__ element; } ;
typedef TYPE_3__ PluginHost ;
typedef int IPropertyBag ;
typedef int IPersistPropertyBag ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int **) ;

__attribute__((used)) static void FUNC_7(PluginHost *VAR_0, IPersistPropertyBag *VAR_1)
{
    IPropertyBag *VAR_2;
    HRESULT VAR_3;

    VAR_3 = FUNC_6(VAR_0->element->element.nselem, &VAR_2);
    if(FUNC_0(VAR_3))
        return;

    if(VAR_2 && !FUNC_5(VAR_0)) {
        FUNC_3(VAR_2);
        VAR_2 = ((void*)0);
    }

    if(VAR_2) {
        VAR_3 = FUNC_2(VAR_1, VAR_2, ((void*)0));
        FUNC_3(VAR_2);
        if(FUNC_0(VAR_3))
            FUNC_4("Load failed: %08x\n", VAR_3);
    }else {
        VAR_3 = FUNC_1(VAR_1);
        if(FUNC_0(VAR_3))
            FUNC_4("InitNew failed: %08x\n", VAR_3);
    }
}
