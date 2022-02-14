
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;







 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (int ) ;
 int * VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;

__attribute__((used)) static HRESULT FUNC_8(jsval_t VAR_9, const WCHAR **VAR_10)
{
    switch(FUNC_7(VAR_9)) {
    case 129:
        *VAR_10 = VAR_8;
        break;
    case 133:
        *VAR_10 = VAR_6;
        break;
    case 131: {
        jsdisp_t *VAR_11;

        if(FUNC_2(VAR_9) && (VAR_11 = FUNC_4(FUNC_2(VAR_9)))) {
            *VAR_10 = FUNC_5(VAR_11, VAR_1) ? VAR_4 : VAR_6;
            FUNC_6(VAR_11);
        }else {
            *VAR_10 = VAR_6;
        }
        break;
    }
    case 130:
        *VAR_10 = VAR_7;
        break;
    case 132:
        *VAR_10 = VAR_5;
        break;
    case 134:
        *VAR_10 = VAR_3;
        break;
    case 128:
        FUNC_0("unhandled variant %s\n", FUNC_1(FUNC_3(VAR_9)));
        return VAR_0;
    }

    return VAR_2;
}
