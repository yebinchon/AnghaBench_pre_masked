
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {size_t buf_len; unsigned int stack_top; scalar_t__* gap; } ;
typedef TYPE_1__ stringify_ctx_t ;
typedef int jsval_t ;
struct TYPE_16__ {int IDispatchEx_iface; } ;
typedef TYPE_2__ jsdisp_t ;
typedef scalar_t__ HRESULT ;
typedef int DISPID ;
typedef int BSTR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,char) ;
 int FUNC_7 (TYPE_1__*,scalar_t__*) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (TYPE_1__*,int ) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static HRESULT FUNC_17(stringify_ctx_t *VAR_6, jsdisp_t *VAR_7)
{
    DISPID VAR_8 = VAR_0;
    jsval_t VAR_9 = FUNC_13();
    unsigned VAR_10 = 0, VAR_11;
    size_t VAR_12;
    BSTR VAR_13;
    HRESULT VAR_14;

    if(FUNC_8(VAR_6, VAR_7)) {
        FUNC_1("Found a cycle\n");
        return VAR_1;
    }

    if(!FUNC_16(VAR_6, VAR_7))
        return VAR_2;

    if(!FUNC_6(VAR_6, '{'))
        return VAR_2;

    while((VAR_14 = FUNC_3(&VAR_7->IDispatchEx_iface, VAR_5, VAR_8, &VAR_8)) == VAR_4) {
        FUNC_12(VAR_9);
        VAR_14 = FUNC_10(VAR_7, VAR_8, &VAR_9);
        if(FUNC_0(VAR_14))
            return VAR_14;

        if(FUNC_9(VAR_9))
            continue;

        VAR_12 = VAR_6->buf_len;

        if(VAR_10 && !FUNC_6(VAR_6, ',')) {
            VAR_14 = VAR_2;
            break;
        }

        if(*VAR_6->gap) {
            if(!FUNC_6(VAR_6, '\n')) {
                VAR_14 = VAR_2;
                break;
            }

            for(VAR_11=0; VAR_11 < VAR_6->stack_top; VAR_11++) {
                if(!FUNC_7(VAR_6, VAR_6->gap)) {
                    VAR_14 = VAR_2;
                    break;
                }
            }
        }

        VAR_14 = FUNC_2(&VAR_7->IDispatchEx_iface, VAR_8, &VAR_13);
        if(FUNC_0(VAR_14))
            break;

        VAR_14 = FUNC_11(VAR_6, VAR_13, FUNC_5(VAR_13));
        FUNC_4(VAR_13);
        if(FUNC_0(VAR_14))
            break;

        if(!FUNC_6(VAR_6, ':') || (*VAR_6->gap && !FUNC_6(VAR_6, ' '))) {
            VAR_14 = VAR_2;
            break;
        }

        VAR_14 = FUNC_14(VAR_6, VAR_9);
        if(FUNC_0(VAR_14))
            break;

        if(VAR_14 == VAR_3) {
            VAR_6->buf_len = VAR_12;
            continue;
        }

        VAR_10++;
    }
    FUNC_12(VAR_9);
    if(FUNC_0(VAR_14))
        return VAR_14;

    if(VAR_10 && *VAR_6->gap) {
        if(!FUNC_6(VAR_6, '\n'))
            return VAR_2;

        for(VAR_11=1; VAR_11 < VAR_6->stack_top; VAR_11++) {
            if(!FUNC_7(VAR_6, VAR_6->gap)) {
                VAR_14 = VAR_2;
                break;
            }
        }
    }

    if(!FUNC_6(VAR_6, '}'))
        return VAR_2;

    FUNC_15(VAR_6);
    return VAR_4;
}
