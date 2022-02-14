
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_4__ {scalar_t__ length; int dispex; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ DOUBLE ;
typedef TYPE_1__ ArrayInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_1__*,scalar_t__) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,scalar_t__*) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_2, jsdisp_t *VAR_3, jsval_t VAR_4)
{
    ArrayInstance *VAR_5 = FUNC_2(VAR_3);
    DOUBLE VAR_6 = -1;
    DWORD VAR_7;
    HRESULT VAR_8;

    FUNC_1("%p %d\n", VAR_5, VAR_5->length);

    VAR_8 = FUNC_6(VAR_2, VAR_4, &VAR_6);
    if(FUNC_0(VAR_8))
        return VAR_8;

    VAR_6 = FUNC_3(VAR_6);
    if(VAR_6!=(DWORD)VAR_6)
        return FUNC_5(VAR_2, VAR_0, ((void*)0));

    for(VAR_7=VAR_6; VAR_7 < VAR_5->length; VAR_7++) {
        VAR_8 = FUNC_4(&VAR_5->dispex, VAR_7);
        if(FUNC_0(VAR_8))
            return VAR_8;
    }

    VAR_5->length = VAR_6;
    return VAR_1;
}
