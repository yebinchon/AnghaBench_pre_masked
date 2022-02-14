
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int script; } ;
typedef TYPE_1__ ScriptHost ;
typedef int IDispatch ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int **) ;
 int VAR_0 ;

IDispatch *FUNC_2(ScriptHost *VAR_1)
{
    IDispatch *VAR_2;
    HRESULT VAR_3;

    if(!VAR_1->script)
        return ((void*)0);

    VAR_3 = FUNC_1(VAR_1->script, VAR_0, &VAR_2);
    if(FUNC_0(VAR_3))
        return ((void*)0);

    return VAR_2;
}
