
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (double,double,double) ;
 int FUNC_4 (double,double,double,double) ;
 double FUNC_5 (int ) ;
 int FUNC_6 (int *,int ,double*) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_1, unsigned VAR_2, jsval_t *VAR_3, double *VAR_4)
{
    double VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    HRESULT VAR_12;

    FUNC_1("\n");

    if(VAR_2) {
        VAR_12 = FUNC_6(VAR_1, VAR_3[0], &VAR_5);
        if(FUNC_0(VAR_12))
            return VAR_12;
        if(0 <= VAR_5 && VAR_5 <= 99)
            VAR_5 += 1900;
    }else {
        VAR_5 = 1900;
    }

    if(VAR_2>1) {
        VAR_12 = FUNC_6(VAR_1, VAR_3[1], &VAR_6);
        if(FUNC_0(VAR_12))
            return VAR_12;
    }else {
        VAR_6 = 0;
    }

    if(VAR_2>2) {
        VAR_12 = FUNC_6(VAR_1, VAR_3[2], &VAR_7);
        if(FUNC_0(VAR_12))
            return VAR_12;
    }else {
        VAR_7 = 1;
    }

    if(VAR_2>3) {
        VAR_12 = FUNC_6(VAR_1, VAR_3[3], &VAR_8);
        if(FUNC_0(VAR_12))
            return VAR_12;
    }else {
        VAR_8 = 0;
    }

    if(VAR_2>4) {
        VAR_12 = FUNC_6(VAR_1, VAR_3[4], &VAR_9);
        if(FUNC_0(VAR_12))
            return VAR_12;
    }else {
        VAR_9 = 0;
    }

    if(VAR_2>5) {
        VAR_12 = FUNC_6(VAR_1, VAR_3[5], &VAR_10);
        if(FUNC_0(VAR_12))
            return VAR_12;
    }else {
        VAR_10 = 0;
    }

    if(VAR_2>6) {
        VAR_12 = FUNC_6(VAR_1, VAR_3[6], &VAR_11);
        if(FUNC_0(VAR_12))
            return VAR_12;
    } else {
        VAR_11 = 0;
    }

    *VAR_4 = FUNC_5(FUNC_2(FUNC_3(VAR_5, VAR_6, VAR_7),
            FUNC_4(VAR_8, VAR_9,VAR_10, VAR_11)));
    return VAR_0;
}
