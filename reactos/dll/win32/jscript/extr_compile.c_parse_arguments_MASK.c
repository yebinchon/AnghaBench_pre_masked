
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int compiler_ctx_t ;
typedef char WCHAR ;
typedef int HRESULT ;
typedef int BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;

__attribute__((used)) static HRESULT FUNC_6(compiler_ctx_t *VAR_3, const WCHAR *VAR_4, BSTR *VAR_5, unsigned *VAR_6)
{
    const WCHAR *VAR_7 = VAR_4, *VAR_8;
    unsigned VAR_9 = 0;

    while(FUNC_5(*VAR_7))
        VAR_7++;
    if(!*VAR_7) {
        if(VAR_6)
            *VAR_6 = 0;
        return VAR_2;
    }

    while(1) {
        if(!FUNC_4(*VAR_7) && *VAR_7 != '_') {
            FUNC_0("expected alpha or '_': %s\n", FUNC_2(VAR_7));
            return VAR_0;
        }

        VAR_8 = VAR_7;
        while(FUNC_3(*VAR_7) || *VAR_7 == '_')
            VAR_7++;

        if(*VAR_7 && *VAR_7 != ',' && !FUNC_5(*VAR_7)) {
            FUNC_0("unexpected har %s\n", FUNC_2(VAR_7));
            return VAR_0;
        }

        if(VAR_5) {
            VAR_5[VAR_9] = FUNC_1(VAR_3, VAR_8, VAR_7-VAR_8);
            if(!VAR_5[VAR_9])
                return VAR_1;
        }
        VAR_9++;

        while(FUNC_5(*VAR_7))
            VAR_7++;
        if(!*VAR_7)
            break;
        if(*VAR_7 != ',') {
            FUNC_0("expected ',': %s\n", FUNC_2(VAR_7));
            return VAR_0;
        }

        VAR_7++;
        while(FUNC_5(*VAR_7))
            VAR_7++;
    }

    if(VAR_6)
        *VAR_6 = VAR_9;
    return VAR_2;
}
