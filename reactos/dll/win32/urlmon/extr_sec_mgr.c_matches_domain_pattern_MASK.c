
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef char* LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char,scalar_t__) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static BOOL FUNC_5(LPCWSTR VAR_2, LPCWSTR VAR_3, BOOL VAR_4, LPCWSTR *VAR_5)
{
    BOOL VAR_6 = VAR_0;
    DWORD VAR_7 = FUNC_4(VAR_2);
    DWORD VAR_8 = FUNC_4(VAR_3);

    FUNC_0("(%d) Checking if %s matches %s\n", VAR_4, FUNC_1(VAR_3), FUNC_1(VAR_2));

    *VAR_5 = ((void*)0);
    if(VAR_8 >= VAR_7) {

        if(VAR_2[0] == '*' && VAR_2[1] == '.') {
            if(VAR_8 >= VAR_7+1 && !FUNC_3(VAR_3+(VAR_8-VAR_7+1), VAR_2+1)) {
                const WCHAR *VAR_9;
                if(VAR_8 > VAR_7+1 && (VAR_9 = FUNC_2(VAR_3, '.', VAR_8-VAR_7-2))) {
                    if(VAR_4) {
                        VAR_6 = VAR_1;
                        *VAR_5 = VAR_9+1;
                    }
                } else {
                    VAR_6 = VAR_1;
                    *VAR_5 = VAR_3;
                }
            }
        } else if(VAR_4 && VAR_8 > VAR_7) {
            if(VAR_3[VAR_8-VAR_7-1] == '.' && !FUNC_3(VAR_3+(VAR_8-VAR_7), VAR_2)) {
                VAR_6 = VAR_1;
                *VAR_5 = VAR_3+(VAR_8-VAR_7);
            }
        } else {



            if(!FUNC_3(VAR_3, VAR_2)) {
                VAR_6 = VAR_1;
                *VAR_5 = VAR_3;
            }
        }
    }

    if(VAR_6)
        FUNC_0("Found a match: matched=%s\n", FUNC_1(*VAR_5));
    else
        FUNC_0("No match found\n");

    return VAR_6;
}
