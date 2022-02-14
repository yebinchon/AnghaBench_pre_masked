
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_4__ {int atend; scalar_t__ enumvar; } ;
typedef int HRESULT ;
typedef TYPE_1__ EnumeratorInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    EnumeratorInstance *VAR_9;
    HRESULT VAR_10 = VAR_2;

    FUNC_2("\n");

    if (!(VAR_9 = FUNC_3(VAR_4)))
        return FUNC_6(VAR_3, VAR_1, ((void*)0));

    if (VAR_9->enumvar)
    {
        VAR_10 = FUNC_1(VAR_9->enumvar);
        if (FUNC_0(VAR_10))
            return VAR_10;

        VAR_9->atend = VAR_0;
        VAR_10 = FUNC_4(VAR_9);
        if(FUNC_0(VAR_10))
            return VAR_10;
    }

    if (VAR_8)
        *VAR_8 = FUNC_5();
    return VAR_2;
}
