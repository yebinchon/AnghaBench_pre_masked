
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef double INT ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 double FUNC_2 (double) ;
 scalar_t__ FUNC_3 (double) ;
 int FUNC_4 (int *,int ,double*) ;

__attribute__((used)) static INT FUNC_5(script_ctx_t *VAR_0, jsval_t VAR_1)
{
    double VAR_2;
    HRESULT VAR_3;

    VAR_3 = FUNC_4(VAR_0, VAR_1, &VAR_2);
    if(FUNC_0(VAR_3)) {
        FUNC_1(VAR_0);
        return 0;
    }

    VAR_2 = FUNC_2(VAR_2);
    return FUNC_3(VAR_2) ? VAR_2 : 0;
}
