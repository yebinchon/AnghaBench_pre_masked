
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int script_ctx_t ;
struct TYPE_11__ {TYPE_2__* code; TYPE_4__* parser; int heap; int member_0; } ;
typedef TYPE_1__ compiler_ctx_t ;
struct TYPE_12__ {int global_code; int source; } ;
typedef TYPE_2__ bytecode_t ;
typedef int WCHAR ;
struct TYPE_13__ {int source; } ;
typedef int HRESULT ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int const*) ;
 int FUNC_3 (TYPE_1__*,int ,int *,scalar_t__,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*,int const*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,TYPE_1__*,int ,int const*,scalar_t__,TYPE_4__**) ;

HRESULT FUNC_11(script_ctx_t *VAR_1, const WCHAR *VAR_2, const WCHAR *VAR_3, const WCHAR *VAR_4,
        BOOL VAR_5, BOOL VAR_6, bytecode_t **VAR_7)
{
    compiler_ctx_t VAR_8 = {0};
    HRESULT VAR_9;

    VAR_9 = FUNC_7(&VAR_8, VAR_2);
    if(FUNC_0(VAR_9))
        return VAR_9;

    if(VAR_3) {
        VAR_9 = FUNC_2(&VAR_8, VAR_3);
        if(FUNC_0(VAR_9))
            return VAR_9;
    }

    if(VAR_6) {
        VAR_9 = FUNC_4(VAR_8.code->source);
        if(FUNC_0(VAR_9)) {
            FUNC_1("Decoding failed\n");
            return VAR_9;
        }
    }

    VAR_9 = FUNC_10(VAR_1, &VAR_8, VAR_8.code->source, VAR_4, VAR_5, &VAR_8.parser);
    if(FUNC_0(VAR_9)) {
        FUNC_9(VAR_8.code);
        return VAR_9;
    }

    FUNC_6(&VAR_8.heap);
    VAR_9 = FUNC_3(&VAR_8, VAR_8.parser->source, ((void*)0), VAR_5, &VAR_8.code->global_code);
    FUNC_5(&VAR_8.heap);
    FUNC_8(VAR_8.parser);
    if(FUNC_0(VAR_9)) {
        FUNC_9(VAR_8.code);
        return VAR_9;
    }

    *VAR_7 = VAR_8.code;
    return VAR_0;
}
