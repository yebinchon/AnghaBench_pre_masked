
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ scheme; int script_elem; } ;
typedef TYPE_1__ ScriptBSC ;
typedef int HRESULT ;
typedef int BSCallback ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static HRESULT FUNC_2(BSCallback *VAR_4)
{
    ScriptBSC *VAR_5 = FUNC_0(VAR_4);


    if(VAR_5->scheme == VAR_3 || VAR_5->scheme == VAR_2)
        FUNC_1(VAR_5->script_elem, VAR_0);

    return VAR_1;
}
