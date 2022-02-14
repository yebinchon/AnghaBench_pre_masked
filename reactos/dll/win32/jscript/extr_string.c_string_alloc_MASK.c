
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int string_constr; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
struct TYPE_10__ {int str; int dispex; } ;
typedef TYPE_2__ StringInstance ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int *) ;
 int FUNC_4 (int *,TYPE_1__*,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_4, jsdisp_t *VAR_5, jsstr_t *VAR_6, StringInstance **VAR_7)
{
    StringInstance *VAR_8;
    HRESULT VAR_9;

    VAR_8 = FUNC_1(sizeof(StringInstance));
    if(!VAR_8)
        return VAR_0;

    if(VAR_5)
        VAR_9 = FUNC_3(&VAR_8->dispex, VAR_4, &VAR_3, VAR_5);
    else
        VAR_9 = FUNC_4(&VAR_8->dispex, VAR_4, &VAR_2, VAR_4->string_constr);
    if(FUNC_0(VAR_9)) {
        FUNC_2(VAR_8);
        return VAR_9;
    }

    VAR_8->str = FUNC_5(VAR_6);
    *VAR_7 = VAR_8;
    return VAR_1;
}
