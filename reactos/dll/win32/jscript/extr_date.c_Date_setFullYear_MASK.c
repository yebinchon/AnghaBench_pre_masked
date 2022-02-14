
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
 double FUNC_2 (double) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 double FUNC_5 (int ,TYPE_1__*) ;
 double FUNC_6 (int ,int ) ;
 int FUNC_7 (double,double,double) ;
 double FUNC_8 (double) ;
 int FUNC_9 (int *,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (double) ;
 int FUNC_12 (int *,int ,double*) ;
 int FUNC_13 (double,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_14(script_ctx_t *VAR_3, vdisp_t *VAR_4, WORD VAR_5, unsigned VAR_6, jsval_t *VAR_7,
        jsval_t *VAR_8)
{
    DateInstance *VAR_9;
    double VAR_10, VAR_11, VAR_12, VAR_13;
    HRESULT VAR_14;

    FUNC_1("\n");

    if(!(VAR_9 = FUNC_3(VAR_4)))
        return FUNC_9(VAR_3, VAR_0, ((void*)0));

    if(!VAR_6)
        return FUNC_9(VAR_3, VAR_1, ((void*)0));

    VAR_10 = FUNC_5(VAR_9->time, VAR_9);

    VAR_14 = FUNC_12(VAR_3, VAR_7[0], &VAR_11);
    if(FUNC_0(VAR_14))
        return VAR_14;

    if(VAR_6 > 1) {
        VAR_14 = FUNC_12(VAR_3, VAR_7[1], &VAR_12);
        if(FUNC_0(VAR_14))
            return VAR_14;
    }else {
        VAR_12 = FUNC_8(VAR_10);
    }

    if(VAR_6 > 2) {
        VAR_14 = FUNC_12(VAR_3, VAR_7[2], &VAR_13);
        if(FUNC_0(VAR_14))
            return VAR_14;
    }else {
        VAR_13 = FUNC_2(VAR_10);
    }

    VAR_10 = FUNC_6(FUNC_7(VAR_11, VAR_12, VAR_13), FUNC_11(VAR_10));
    VAR_9->time = FUNC_10(FUNC_13(VAR_10, VAR_9));

    if(VAR_8)
        *VAR_8 = FUNC_4(VAR_9->time);
    return VAR_2;
}
