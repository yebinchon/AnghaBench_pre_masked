
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* script; } ;
typedef TYPE_2__ parser_ctx_t ;
struct TYPE_11__ {int * vars; } ;
typedef TYPE_3__ cc_ctx_t ;
struct TYPE_9__ {TYPE_3__* cc; } ;
typedef double DOUBLE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_3__*,char*,int,int ) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static BOOL FUNC_6(parser_ctx_t *VAR_6)
{
    cc_ctx_t *VAR_7;

    if(VAR_6->script->cc)
        return VAR_5;

    VAR_7 = FUNC_2(sizeof(cc_ctx_t));
    if(!VAR_7) {
        FUNC_3(VAR_6, VAR_0);
        return VAR_1;
    }

    VAR_7->vars = ((void*)0);

    if(!FUNC_4(VAR_7, L"_jscript", -1, FUNC_0(VAR_5))
       || !FUNC_4(VAR_7, sizeof(void*) == 8 ? L"_win64" : L"_win32", -1, FUNC_0(VAR_5))
       || !FUNC_4(VAR_7, sizeof(void*) == 8 ? L"_amd64" : L"_x86", -1, FUNC_0(VAR_5))
       || !FUNC_4(VAR_7, L"_jscript_version", -1, FUNC_1(VAR_3 + (DOUBLE)VAR_4/10.0))
       || !FUNC_4(VAR_7, L"_jscript_build", -1, FUNC_1(VAR_2))) {
        FUNC_5(VAR_7);
        FUNC_3(VAR_6, VAR_0);
        return VAR_1;
    }

    VAR_6->script->cc = VAR_7;
    return VAR_5;
}
