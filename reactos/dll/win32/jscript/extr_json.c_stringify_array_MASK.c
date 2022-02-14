
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned int stack_top; scalar_t__* gap; } ;
typedef TYPE_1__ stringify_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__*,char) ;
 int FUNC_4 (TYPE_1__*,scalar_t__*) ;
 unsigned int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_7 (int *,unsigned int,int *) ;
 scalar_t__* VAR_5 ;
 scalar_t__ FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,int *) ;

__attribute__((used)) static HRESULT FUNC_11(stringify_ctx_t *VAR_6, jsdisp_t *VAR_7)
{
    unsigned VAR_8, VAR_9, VAR_10;
    jsval_t VAR_11;
    HRESULT VAR_12;

    if(FUNC_6(VAR_6, VAR_7)) {
        FUNC_1("Found a cycle\n");
        return VAR_1;
    }

    if(!FUNC_10(VAR_6, VAR_7))
        return VAR_2;

    if(!FUNC_3(VAR_6, '['))
        return VAR_2;

    VAR_8 = FUNC_5(VAR_7);

    for(VAR_9=0; VAR_9 < VAR_8; VAR_9++) {
        if(VAR_9 && !FUNC_3(VAR_6, ','))
            return VAR_2;

        if(*VAR_6->gap) {
            if(!FUNC_3(VAR_6, '\n'))
                return VAR_2;

            for(VAR_10=0; VAR_10 < VAR_6->stack_top; VAR_10++) {
                if(!FUNC_4(VAR_6, VAR_6->gap))
                    return VAR_2;
            }
        }

        VAR_12 = FUNC_7(VAR_7, VAR_9, &VAR_11);
        if(FUNC_2(VAR_12)) {
            VAR_12 = FUNC_8(VAR_6, VAR_11);
            if(FUNC_0(VAR_12))
                return VAR_12;
            if(VAR_12 == VAR_3 && !FUNC_4(VAR_6, VAR_5))
                return VAR_2;
        }else if(VAR_12 == VAR_0) {
            if(!FUNC_4(VAR_6, VAR_5))
                return VAR_2;
        }else {
            return VAR_12;
        }
    }

    if((VAR_8 && *VAR_6->gap && !FUNC_3(VAR_6, '\n')) || !FUNC_3(VAR_6, ']'))
        return VAR_2;

    FUNC_9(VAR_6);
    return VAR_4;
}
