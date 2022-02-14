
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int http_request_t ;
typedef int WCHAR ;
typedef char* LPWSTR ;
typedef int LPCWSTR ;
typedef unsigned int DWORD ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (char*) ;
 unsigned int FUNC_2 (int *,char*,char*,unsigned int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,unsigned int) ;
 char* FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,unsigned int) ;
 unsigned int FUNC_9 (int ) ;

__attribute__((used)) static DWORD FUNC_10(http_request_t *VAR_3,
 LPCWSTR VAR_4, DWORD VAR_5, DWORD VAR_6)
{
    LPWSTR VAR_7;
    LPWSTR VAR_8;
    LPWSTR VAR_9;
    DWORD VAR_10, VAR_11 = VAR_0;

    FUNC_3("copying header: %s\n", FUNC_5(VAR_4, VAR_5));

    if( VAR_5 == ~0U )
        VAR_10 = FUNC_9(VAR_4);
    else
        VAR_10 = VAR_5;
    VAR_9 = FUNC_6(sizeof(WCHAR)*(VAR_10+1));
    FUNC_8( VAR_9, VAR_4, VAR_10 + 1);

    VAR_7 = VAR_9;

    do
    {
        LPWSTR * VAR_12;

        VAR_8 = VAR_7;

        while (*VAR_8 != '\0')
        {
            if (*VAR_8 == '\r' || *VAR_8 == '\n')
                 break;
            VAR_8++;
        }

        if (*VAR_7 == '\0')
     break;

        if (*VAR_8 == '\r' || *VAR_8 == '\n')
        {
            *VAR_8 = '\0';
            VAR_8++;
        }
        FUNC_3("interpreting header %s\n", FUNC_4(VAR_7));
        if (*VAR_7 == '\0')
        {

            VAR_7 = VAR_8;
            VAR_11 = VAR_1;
            continue;
        }
        VAR_12 = FUNC_1(VAR_7);
        if (VAR_12)
        {
            VAR_11 = FUNC_2(VAR_3, VAR_12[0],
                VAR_12[1], VAR_6 | VAR_2);
            FUNC_0(VAR_12);
        }

        VAR_7 = VAR_8;
    } while (VAR_11 == VAR_1);

    FUNC_7(VAR_9);
    return VAR_11;
}
