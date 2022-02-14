
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int state ;
typedef int sec ;
typedef int part ;
typedef char WCHAR ;
typedef char* LPWSTR ;
typedef char* LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,char*,int*,int*) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (scalar_t__,int) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static BOOL FUNC_4(LPCWSTR VAR_3, DWORD VAR_4, LPWSTR VAR_5, LPWSTR VAR_6, int *VAR_7, int *VAR_8)
{
    WCHAR VAR_9[255];
    WCHAR VAR_10[60] = {'\0'};
    WCHAR VAR_11[60] = {'\0'};
    LPWSTR VAR_12;
    LPWSTR VAR_13;
    FUNC_1(VAR_9, VAR_3, FUNC_2(VAR_4+1, sizeof(VAR_9)/sizeof(VAR_9[0])));

    *VAR_5 = 0;
    *VAR_6 = 0;
    *VAR_7 = 0;
    *VAR_8 = 0;
    VAR_13 = VAR_9;

    VAR_12 = FUNC_3(VAR_13, ':');
    if(VAR_12) {
        *VAR_12++ = 0;
        VAR_12++;
        FUNC_1(VAR_5, VAR_13, VAR_1);
        VAR_13 = VAR_12;
    }

    VAR_12 = FUNC_3(VAR_13, '.');
    if(VAR_12) {
        *VAR_12++ = 0;
        FUNC_1(VAR_6, VAR_13, VAR_2);
        VAR_13 = VAR_12;

        VAR_12 = FUNC_3(VAR_13, '(');
        if(VAR_12) {
            *VAR_12++ = 0;
            FUNC_1(VAR_10, VAR_13, sizeof(VAR_10)/sizeof(VAR_10[0]));
            VAR_13 = VAR_12;

            VAR_12 = FUNC_3(VAR_13, ')');
            if (!VAR_12)
                return VAR_0;
            *VAR_12 = 0;
            FUNC_1(VAR_11, VAR_13, sizeof(VAR_11)/sizeof(VAR_11[0]));
        }
        else {
            FUNC_1(VAR_10, VAR_13, sizeof(VAR_10)/sizeof(VAR_10[0]));
        }
    }
    else {
        VAR_12 = FUNC_3(VAR_13, '(');
        if(VAR_12) {
            *VAR_12++ = 0;
            FUNC_1(VAR_6, VAR_13, VAR_2);
            VAR_13 = VAR_12;

            VAR_12 = FUNC_3(VAR_13, ')');
            if (!VAR_12)
                return VAR_0;
            *VAR_12 = 0;
            FUNC_1(VAR_11, VAR_13, sizeof(VAR_11)/sizeof(VAR_11[0]));
        }
        else {
            FUNC_1(VAR_6, VAR_13, VAR_2);
        }
    }
    if(!*VAR_6) return VAR_0;
    return FUNC_0(VAR_6, VAR_10[0]?VAR_10:((void*)0), VAR_11[0]?VAR_11:((void*)0), VAR_7, VAR_8);
}
