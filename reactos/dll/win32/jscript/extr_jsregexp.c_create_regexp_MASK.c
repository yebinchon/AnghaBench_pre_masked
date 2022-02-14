
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int tmp_heap; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
typedef int WCHAR ;
struct TYPE_8__ {int dispex; int jsregexp; int * str; int last_index_val; } ;
typedef TYPE_2__ RegExpInstance ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int *,TYPE_2__**) ;
 int FUNC_4 (int const*,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int *,int const*,int ,int ,int ) ;

HRESULT FUNC_11(script_ctx_t *VAR_4, jsstr_t *VAR_5, DWORD VAR_6, jsdisp_t **VAR_7)
{
    RegExpInstance *VAR_8;
    const WCHAR *VAR_9;
    HRESULT VAR_10;

    VAR_9 = FUNC_7(VAR_5);
    if(!VAR_9)
        return VAR_1;

    FUNC_1("%s %x\n", FUNC_4(VAR_9, FUNC_8(VAR_5)), VAR_6);

    VAR_10 = FUNC_3(VAR_4, ((void*)0), &VAR_8);
    if(FUNC_0(VAR_10))
        return VAR_10;

    VAR_8->str = FUNC_6(VAR_5);
    VAR_8->last_index_val = FUNC_9(0);

    VAR_8->jsregexp = FUNC_10(VAR_4, &VAR_4->tmp_heap, VAR_9, FUNC_8(VAR_8->str), VAR_6, VAR_2);
    if(!VAR_8->jsregexp) {
        FUNC_2("regexp_new failed\n");
        FUNC_5(&VAR_8->dispex);
        return VAR_0;
    }

    *VAR_7 = &VAR_8->dispex;
    return VAR_3;
}
