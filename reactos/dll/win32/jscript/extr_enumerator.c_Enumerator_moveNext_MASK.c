
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_4__ {scalar_t__ enumvar; } ;
typedef int HRESULT ;
typedef TYPE_1__ EnumeratorInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_6(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    EnumeratorInstance *VAR_8;
    HRESULT VAR_9 = VAR_1;

    FUNC_1("\n");

    if (!(VAR_8 = FUNC_2(VAR_3)))
        return FUNC_5(VAR_2, VAR_0, ((void*)0));

    if (VAR_8->enumvar)
    {
        VAR_9 = FUNC_3(VAR_8);
        if (FUNC_0(VAR_9))
            return VAR_9;
    }

    if (VAR_7)
        *VAR_7 = FUNC_4();
    return VAR_1;
}
