
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int * HINTERNET ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*,unsigned int,int ) ;
 int * FUNC_2 (int *,char*,char*,char*,int *,int *,int ,int ) ;
 int FUNC_3 (int *,int,char*,scalar_t__*,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,char*,int,int *,int *,int ,int ,int ) ;
 int * FUNC_6 (char*,int ,int *,int *,int ) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*,char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    HINTERNET VAR_7, VAR_8, VAR_9;
    DWORD VAR_10, VAR_11;
    char VAR_12[64];
    BOOL VAR_13;

    VAR_7 = FUNC_6("Gizmo5", VAR_5, ((void*)0), ((void*)0), 0);
    FUNC_7(VAR_7 != ((void*)0), "InternetOpen failed\n");

    VAR_8 = FUNC_5(VAR_7, "test.winehq.org", 80, ((void*)0), ((void*)0), VAR_6, 0, 0);
    FUNC_7(VAR_8 != ((void*)0), "InternetConnect failed\n");

    VAR_9 = FUNC_2(VAR_8, "GET", "/tests/hello.html", "HTTP/1.0", ((void*)0), ((void*)0), 0, 0);
    FUNC_7(VAR_9 != ((void*)0), "HttpOpenRequest failed\n");

    VAR_10 = sizeof(VAR_12);
    VAR_13 = FUNC_3(VAR_9, VAR_4 | VAR_3, VAR_12, &VAR_10, ((void*)0));
    VAR_11 = FUNC_0();
    FUNC_7(!VAR_13, "HttpQueryInfo succeeded\n");
    FUNC_7(VAR_11 == VAR_0, "expected ERROR_HTTP_HEADER_NOT_FOUND, got %u\n", VAR_11);

    VAR_13 = FUNC_1(VAR_9, "User-Agent: Gizmo Project\r\n", ~0u, VAR_1);
    FUNC_7(VAR_13, "HttpAddRequestHeaders succeeded\n");

    VAR_10 = sizeof(VAR_12);
    VAR_13 = FUNC_3(VAR_9, VAR_4 | VAR_3, VAR_12, &VAR_10, ((void*)0));
    VAR_11 = FUNC_0();
    FUNC_7(VAR_13, "HttpQueryInfo failed\n");

    FUNC_4(VAR_9);

    VAR_9 = FUNC_2(VAR_8, "GET", "/", "HTTP/1.0", ((void*)0), ((void*)0), 0, 0);
    FUNC_7(VAR_9 != ((void*)0), "HttpOpenRequest failed\n");

    VAR_10 = sizeof(VAR_12);
    VAR_13 = FUNC_3(VAR_9, VAR_2 | VAR_3, VAR_12, &VAR_10, ((void*)0));
    VAR_11 = FUNC_0();
    FUNC_7(!VAR_13, "HttpQueryInfo succeeded\n");
    FUNC_7(VAR_11 == VAR_0, "expected ERROR_HTTP_HEADER_NOT_FOUND, got %u\n", VAR_11);

    VAR_13 = FUNC_1(VAR_9, "Accept: audio/*, image/*, text/*\r\nUser-Agent: Gizmo Project\r\n", ~0u, VAR_1);
    FUNC_7(VAR_13, "HttpAddRequestHeaders failed\n");

    VAR_12[0] = 0;
    VAR_10 = sizeof(VAR_12);
    VAR_13 = FUNC_3(VAR_9, VAR_2 | VAR_3, VAR_12, &VAR_10, ((void*)0));
    FUNC_7(VAR_13, "HttpQueryInfo failed: %u\n", FUNC_0());
    FUNC_7(!FUNC_8(VAR_12, "audio/*, image/*, text/*"), "got '%s' expected 'audio/*, image/*, text/*'\n", VAR_12);

    FUNC_4(VAR_9);
    FUNC_4(VAR_8);
    FUNC_4(VAR_7);
}
