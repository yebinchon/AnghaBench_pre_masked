
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vdisp_t ;
struct TYPE_11__ {int global; TYPE_2__* call_ctx; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
struct TYPE_12__ {int flags; int variable_obj; int * this_obj; int * scope; } ;
typedef TYPE_2__ call_frame_t ;
struct TYPE_13__ {int global_code; } ;
typedef TYPE_3__ bytecode_t ;
typedef int WORD ;
typedef int WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*,...) ;
 int VAR_7 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int const*,int *,int *,int ,int ,TYPE_3__**) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int,TYPE_3__*,int *,int *,int *,int *,int ,int ,int *,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_1__*,int ,int *) ;

HRESULT FUNC_13(script_ctx_t *VAR_8, vdisp_t *VAR_9, WORD VAR_10, unsigned VAR_11, jsval_t *VAR_12,
        jsval_t *VAR_13)
{
    call_frame_t *VAR_14 = VAR_8->call_ctx;
    DWORD VAR_15 = VAR_1;
    bytecode_t *VAR_16;
    const WCHAR *VAR_17;
    HRESULT VAR_18;

    FUNC_1("\n");

    if(!VAR_11) {
        if(VAR_13)
            *VAR_13 = FUNC_10();
        return VAR_6;
    }

    if(!FUNC_7(VAR_12[0])) {
        if(VAR_13)
            return FUNC_9(VAR_12[0], VAR_13);
        return VAR_6;
    }

    VAR_17 = FUNC_8(FUNC_6(VAR_12[0]));
    if(!VAR_17)
        return VAR_4;

    FUNC_1("parsing %s\n", FUNC_4(VAR_12[0]));
    VAR_18 = FUNC_3(VAR_8, VAR_17, ((void*)0), ((void*)0), VAR_7, VAR_5, &VAR_16);
    if(FUNC_0(VAR_18)) {
        FUNC_2("parse (%s) failed: %08x\n", FUNC_4(VAR_12[0]), VAR_18);
        return FUNC_12(VAR_8, VAR_18, ((void*)0));
    }

    if(!VAR_14 || (VAR_14->flags & VAR_2))
        VAR_15 |= VAR_2;
    if(VAR_10 & VAR_0)
        VAR_15 |= VAR_3;
    VAR_18 = FUNC_5(VAR_8, VAR_15, VAR_16, &VAR_16->global_code, VAR_14 ? VAR_14->scope : ((void*)0),
            VAR_14 ? VAR_14->this_obj : ((void*)0), ((void*)0), VAR_14 ? VAR_14->variable_obj : VAR_8->global, 0, ((void*)0), VAR_13);
    FUNC_11(VAR_16);
    return VAR_18;
}
