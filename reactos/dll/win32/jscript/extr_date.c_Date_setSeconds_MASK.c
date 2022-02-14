
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_5__ {int time; } ;
typedef int HRESULT ;
typedef TYPE_1__ DateInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (double) ;
 int FUNC_4 (double) ;
 int FUNC_5 (int ) ;
 double FUNC_6 (int ,TYPE_1__*) ;
 double FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,double,double) ;
 int FUNC_9 (double) ;
 double FUNC_10 (double) ;
 int FUNC_11 (int *,int ,int *) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,int ,double*) ;
 int FUNC_14 (double,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_15(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    DateInstance *VAR_9;
    double VAR_10, VAR_11, VAR_12;
    HRESULT VAR_13;

    FUNC_1("\n");

    if(!(VAR_9 = FUNC_2(VAR_4)))
        return FUNC_11(VAR_3, VAR_0, ((void*)0));

    if(!VAR_6)
        return FUNC_11(VAR_3, VAR_1, ((void*)0));

    VAR_10 = FUNC_6(VAR_9->time, VAR_9);

    VAR_13 = FUNC_13(VAR_3, VAR_7[0], &VAR_11);
    if(FUNC_0(VAR_13))
        return VAR_13;

    if(VAR_6 > 1) {
        VAR_13 = FUNC_13(VAR_3, VAR_7[1], &VAR_12);
        if(FUNC_0(VAR_13))
            return VAR_13;
    }else {
        VAR_12 = FUNC_10(VAR_10);
    }

    VAR_10 = FUNC_7(FUNC_3(VAR_10), FUNC_8(FUNC_4(VAR_10),
                FUNC_9(VAR_10), VAR_11, VAR_12));
    VAR_9->time = FUNC_12(FUNC_14(VAR_10, VAR_9));

    if(VAR_8)
        *VAR_8 = FUNC_5(VAR_9->time);
    return VAR_2;
}
