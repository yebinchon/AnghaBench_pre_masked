
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
struct TYPE_7__ {struct TYPE_7__* prototype; } ;
typedef TYPE_1__ jsdisp_t ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,char const*,int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ,int *) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_16(script_ctx_t *VAR_4)
{
    jsdisp_t *VAR_5, *VAR_6, *VAR_7 = ((void*)0);
    jsval_t VAR_8, VAR_9;
    BOOL VAR_10 = VAR_1;
    HRESULT VAR_11;

    static const WCHAR VAR_12[] = {'p','r','o','t','o','t', 'y', 'p','e',0};

    VAR_9 = FUNC_12(VAR_4);
    if(!FUNC_7(VAR_9) || !FUNC_4(VAR_9)) {
        FUNC_11(VAR_9);
        return FUNC_14(VAR_4, VAR_3, ((void*)0));
    }

    VAR_5 = FUNC_5(FUNC_4(VAR_9));
    FUNC_2(FUNC_4(VAR_9));
    if(!VAR_5) {
        FUNC_1("non-jsdisp objects not supported\n");
        return VAR_0;
    }

    if(FUNC_6(VAR_5, VAR_2)) {
        VAR_11 = FUNC_8(VAR_5, VAR_12, &VAR_8);
    }else {
        VAR_11 = FUNC_14(VAR_4, VAR_3, ((void*)0));
    }
    FUNC_9(VAR_5);
    if(FUNC_0(VAR_11))
        return VAR_11;

    VAR_9 = FUNC_12(VAR_4);

    if(FUNC_7(VAR_8)) {
        if(FUNC_7(VAR_9))
            VAR_7 = FUNC_5(FUNC_4(VAR_9));
        for(VAR_6 = VAR_7; !VAR_10 && VAR_6; VAR_6 = VAR_6->prototype) {
            VAR_11 = FUNC_3(FUNC_4(VAR_8), FUNC_15(VAR_6), &VAR_10);
            if(FUNC_0(VAR_11))
                break;
        }

        if(VAR_7)
            FUNC_9(VAR_7);
    }else {
        FUNC_1("prototype is not an object\n");
        VAR_11 = VAR_0;
    }

    FUNC_11(VAR_8);
    FUNC_11(VAR_9);
    if(FUNC_0(VAR_11))
        return VAR_11;

    return FUNC_13(VAR_4, FUNC_10(VAR_10));
}
