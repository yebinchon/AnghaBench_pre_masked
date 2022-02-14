
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int exec_ctx_t ;
typedef int VARIANT ;
typedef int IDispatch ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;

__attribute__((used)) static HRESULT FUNC_8(exec_ctx_t *VAR_5, IDispatch **VAR_6)
{
    VARIANT *VAR_7 = FUNC_7(VAR_5);

    if(FUNC_4(VAR_7) == VAR_3) {
        *VAR_6 = FUNC_3(VAR_7);
        return VAR_1;
    }

    if(FUNC_4(VAR_7) != (VAR_4|VAR_2)) {
        FUNC_0("not supported type: %s\n", FUNC_6(VAR_7));
        FUNC_5(VAR_7);
        return VAR_0;
    }

    VAR_7 = FUNC_2(VAR_7);
    if(FUNC_4(VAR_7) != VAR_3) {
        FUNC_0("not disp %s\n", FUNC_6(VAR_7));
        return VAR_0;
    }

    if(FUNC_3(VAR_7))
        FUNC_1(FUNC_3(VAR_7));
    *VAR_6 = FUNC_3(VAR_7);
    return VAR_1;
}
