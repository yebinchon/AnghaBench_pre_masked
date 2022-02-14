
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ parse; } ;
typedef TYPE_1__ ScriptHost ;
typedef int HTMLScriptElement ;
typedef int HTMLInnerWindow ;


 TYPE_1__* FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(HTMLInnerWindow *VAR_0, HTMLScriptElement *VAR_1)
{
    ScriptHost *VAR_2;

    VAR_2 = FUNC_0(VAR_0, VAR_1);
    if(!VAR_2)
        return;

    if(VAR_2->parse)
        FUNC_1(VAR_2, VAR_1);
}
