
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
struct TYPE_4__ {int * ctx; int const* end; int const* ptr; } ;
typedef TYPE_1__ json_parse_ctx_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ,int **,int const**) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7, jsval_t *VAR_8)
{
    json_parse_ctx_t VAR_9;
    const WCHAR *VAR_10;
    jsstr_t *VAR_11;
    jsval_t VAR_12;
    HRESULT VAR_13;

    if(VAR_6 != 1) {
        FUNC_1("Unsupported args\n");
        return VAR_1;
    }

    VAR_13 = FUNC_9(VAR_3, VAR_7[0], &VAR_11, &VAR_10);
    if(FUNC_0(VAR_13))
        return VAR_13;

    FUNC_2("%s\n", FUNC_3(VAR_10));

    VAR_9.ptr = VAR_10;
    VAR_9.end = VAR_10 + FUNC_4(VAR_11);
    VAR_9.ctx = VAR_3;
    VAR_13 = FUNC_7(&VAR_9, &VAR_12);
    FUNC_5(VAR_11);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(FUNC_8(&VAR_9)) {
        FUNC_1("syntax error\n");
        FUNC_6(VAR_12);
        return VAR_0;
    }

    if(VAR_8)
        *VAR_8 = VAR_12;
    else
        FUNC_6(VAR_12);
    return VAR_2;
}
