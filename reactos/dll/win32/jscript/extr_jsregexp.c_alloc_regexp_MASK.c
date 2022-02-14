
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int regexp_constr; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsdisp_t ;
struct TYPE_10__ {int dispex; } ;
typedef TYPE_2__ RegExpInstance ;
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

__attribute__((used)) static HRESULT FUNC_5(script_ctx_t *VAR_4, jsdisp_t *VAR_5, RegExpInstance **VAR_6)
{
    RegExpInstance *VAR_7;
    HRESULT VAR_8;

    VAR_7 = FUNC_1(sizeof(RegExpInstance));
    if(!VAR_7)
        return VAR_0;

    if(VAR_5)
        VAR_8 = FUNC_3(&VAR_7->dispex, VAR_4, &VAR_2, VAR_5);
    else
        VAR_8 = FUNC_4(&VAR_7->dispex, VAR_4, &VAR_1, VAR_4->regexp_constr);

    if(FUNC_0(VAR_8)) {
        FUNC_2(VAR_7);
        return VAR_8;
    }

    *VAR_6 = VAR_7;
    return VAR_3;
}
