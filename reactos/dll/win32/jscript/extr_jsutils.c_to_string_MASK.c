
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef char WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;






 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (char const*) ;
 int * FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *,int ,int *,int ) ;

HRESULT FUNC_13(script_ctx_t *VAR_4, jsval_t VAR_5, jsstr_t **VAR_6)
{
    static const WCHAR VAR_7[] = {'n','u','l','l',0};
    static const WCHAR VAR_8[] = {'t','r','u','e',0};
    static const WCHAR VAR_9[] = {'f','a','l','s','e',0};

    switch(FUNC_11(VAR_5)) {
    case 128:
        *VAR_6 = FUNC_9();
        return VAR_3;
    case 132:
        *VAR_6 = FUNC_8(VAR_7);
        break;
    case 131:
        return FUNC_3(FUNC_5(VAR_5), VAR_6);
    case 129:
        *VAR_6 = FUNC_7(FUNC_6(VAR_5));
        break;
    case 130: {
        jsval_t VAR_10;
        HRESULT VAR_11;

        VAR_11 = FUNC_12(VAR_4, VAR_5, &VAR_10, VAR_2);
        if(FUNC_0(VAR_11))
            return VAR_11;

        VAR_11 = FUNC_13(VAR_4, VAR_10, VAR_6);
        FUNC_10(VAR_10);
        return VAR_11;
    }
    case 133:
        *VAR_6 = FUNC_8(FUNC_4(VAR_5) ? VAR_8 : VAR_9);
        break;
    default:
        FUNC_1("unsupported %s\n", FUNC_2(VAR_5));
        return VAR_0;
    }

    return *VAR_6 ? VAR_3 : VAR_1;
}
