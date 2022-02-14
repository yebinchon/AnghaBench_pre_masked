
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * function_constr; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int jsdisp_t ;
typedef float WCHAR ;
struct TYPE_7__ {int dispex; } ;
struct TYPE_9__ {float const* name; TYPE_1__ function; int proc; } ;
typedef TYPE_3__ NativeFunction ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int *,int *,int,int,int ,int *,void**) ;
 int FUNC_3 (int *,float const*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 float const* VAR_8 ;
 int FUNC_6 (TYPE_2__*,int *,int *) ;

HRESULT FUNC_7(script_ctx_t *VAR_9, jsdisp_t *VAR_10)
{
    NativeFunction *VAR_11, *VAR_12;
    HRESULT VAR_13;

    static const WCHAR VAR_14[] = {'F','u','n','c','t','i','o','n',0};

    VAR_13 = FUNC_2(VAR_9, &VAR_3, &VAR_4, sizeof(NativeFunction), VAR_5,
                           VAR_7, VAR_10, (void**)&VAR_11);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_11->proc = VAR_2;
    VAR_11->name = VAR_8;

    VAR_13 = FUNC_2(VAR_9, &VAR_1, &VAR_4, sizeof(NativeFunction), VAR_5|1,
                           VAR_7, &VAR_11->function.dispex, (void**)&VAR_12);
    if(FUNC_1(VAR_13)) {
        VAR_12->proc = VAR_0;
        VAR_12->name = VAR_14;
        VAR_13 = FUNC_3(&VAR_12->function.dispex, VAR_8, 0, FUNC_5(&VAR_11->function.dispex));
        if(FUNC_1(VAR_13))
            VAR_13 = FUNC_6(VAR_9, &VAR_12->function.dispex, &VAR_11->function.dispex);
        if(FUNC_0(VAR_13))
            FUNC_4(&VAR_12->function.dispex);
    }
    FUNC_4(&VAR_11->function.dispex);
    if(FUNC_0(VAR_13))
        return VAR_13;

    VAR_9->function_constr = &VAR_12->function.dispex;
    return VAR_6;
}
