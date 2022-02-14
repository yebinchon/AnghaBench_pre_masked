
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HRESULT ;
typedef int DWORD ;
typedef char* BSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (int *,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static HRESULT FUNC_5(const WCHAR *VAR_4, DWORD VAR_5, BSTR *VAR_6)
{
    BSTR VAR_7;
    DWORD VAR_8;

    if(!*VAR_4) {
        *VAR_6 = (VAR_5 & VAR_0) ? FUNC_1(((void*)0), 0) : ((void*)0);
        return VAR_3;
    }

    VAR_7 = FUNC_0(VAR_4);
    if(!VAR_7)
        return VAR_2;

    VAR_8 = FUNC_3(VAR_7);

    if(VAR_5 & VAR_1) {
        DWORD VAR_9 = VAR_8;
        WCHAR *VAR_10, *VAR_11;

        for(VAR_10 = VAR_7; (VAR_10 = FUNC_4(VAR_10, ',')); VAR_10++)
            VAR_9--;

        if(VAR_9 != VAR_8) {
            BSTR VAR_12;

            VAR_12 = FUNC_1(((void*)0), VAR_9);
            if(!VAR_12) {
                FUNC_2(VAR_7);
                return VAR_2;
            }

            for(VAR_11 = VAR_12, VAR_10 = VAR_7; *VAR_10; VAR_10++) {
                if(*VAR_10 != ',')
                    *VAR_11++ = *VAR_10;
            }

            FUNC_2(VAR_7);
            VAR_7 = VAR_12;
        }
    }

    *VAR_6 = VAR_7;
    return VAR_3;
}
