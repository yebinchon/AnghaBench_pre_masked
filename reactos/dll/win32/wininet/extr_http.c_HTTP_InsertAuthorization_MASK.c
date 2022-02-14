
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct HttpAuthInfo {char const* scheme; char* auth_data; scalar_t__ auth_data_len; } ;
typedef int http_request_t ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char const*,char*,scalar_t__) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int *,char**) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (char const*,char const*) ;
 int VAR_6 ;

__attribute__((used)) static BOOL FUNC_9( http_request_t *VAR_7, struct HttpAuthInfo *VAR_8, LPCWSTR VAR_9 )
{
    static const WCHAR VAR_10[] = {'B','a','s','i','c',0};
    WCHAR *VAR_11, *VAR_12 = ((void*)0);

    if (VAR_8)
    {
        if (VAR_8->auth_data_len)
        {
            if (!(VAR_12 = FUNC_3(VAR_8->scheme, VAR_8->auth_data, VAR_8->auth_data_len)))
                return VAR_0;




            if (FUNC_8(VAR_8->scheme, VAR_10))
            {
                FUNC_5(VAR_8->auth_data);
                VAR_8->auth_data = ((void*)0);
                VAR_8->auth_data_len = 0;
            }
        }

        FUNC_1("Inserting authorization: %s\n", FUNC_2(VAR_12));

        FUNC_0(VAR_7, VAR_9, VAR_12,
                           VAR_3 | VAR_2 | VAR_4);
        FUNC_5(VAR_12);
    }
    else if (!FUNC_7(VAR_9, VAR_6) && (VAR_11 = FUNC_4(VAR_7)))
    {
        UINT VAR_13;
        char *VAR_14;

        if ((VAR_13 = FUNC_6(VAR_11, ((void*)0), &VAR_14)))
        {
            FUNC_1("Found cached basic authorization for %s\n", FUNC_2(VAR_11));

            if (!(VAR_12 = FUNC_3(VAR_10, VAR_14, VAR_13)))
            {
                FUNC_5(VAR_14);
                FUNC_5(VAR_11);
                return VAR_0;
            }

            FUNC_1("Inserting authorization: %s\n", FUNC_2(VAR_12));

            FUNC_0(VAR_7, VAR_9, VAR_12,
                               VAR_3 | VAR_2 | VAR_1);
            FUNC_5(VAR_14);
            FUNC_5(VAR_12);
        }
        FUNC_5(VAR_11);
    }
    return VAR_5;
}
