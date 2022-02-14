
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsdisp_t ;
typedef int builtin_invoke_t ;
typedef int builtin_info_t ;
typedef int WCHAR ;
struct TYPE_3__ {int dispex; int length; } ;
struct TYPE_4__ {TYPE_1__ function; int const* name; int proc; } ;
typedef TYPE_2__ NativeFunction ;
typedef int HRESULT ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int const*,int *,int,int ,int ,int *,void**) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

HRESULT FUNC_7(script_ctx_t *VAR_5, builtin_invoke_t VAR_6, const WCHAR *VAR_7,
        const builtin_info_t *VAR_8, DWORD VAR_9, jsdisp_t *VAR_10, jsdisp_t **VAR_11)
{
    NativeFunction *VAR_12;
    HRESULT VAR_13;

    VAR_13 = FUNC_2(VAR_5, VAR_8, &VAR_1, sizeof(NativeFunction), VAR_9, VAR_0, ((void*)0), (void**)&VAR_12);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(VAR_8)
        VAR_13 = FUNC_3(&VAR_12->function.dispex, VAR_3, 0,
                                           FUNC_5(VAR_12->function.length));
    if(FUNC_1(VAR_13))
        VAR_13 = FUNC_3(&VAR_12->function.dispex, VAR_4, 0, FUNC_6(VAR_10));
    if(FUNC_0(VAR_13)) {
        FUNC_4(&VAR_12->function.dispex);
        return VAR_13;
    }

    VAR_12->proc = VAR_6;
    VAR_12->name = VAR_7;

    *VAR_11 = &VAR_12->function.dispex;
    return VAR_2;
}
