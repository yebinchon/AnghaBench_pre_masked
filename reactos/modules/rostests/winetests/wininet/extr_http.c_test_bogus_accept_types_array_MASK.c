
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
 int * FUNC_1 (int *,char*,char*,char*,char*,char const**,int ,int ) ;
 int FUNC_2 (int *,int,char*,scalar_t__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,char*,int,int *,int *,int ,int ,int ) ;
 int * FUNC_5 (char*,int ,char*,char*,int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (char*,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    HINTERNET VAR_6, VAR_7, VAR_8;
    static const char *VAR_9[] = { (const char *)6240, "*/*", "%p", "", (const char *)0xffffffff, "*/*", ((void*)0) };
    DWORD VAR_10, VAR_11;
    char VAR_12[32];
    BOOL VAR_13;

    VAR_6 = FUNC_5("MERONG(0.9/;p)", VAR_4, "", "", 0);
    VAR_7 = FUNC_4(VAR_6, "www.winehq.org", 80, ((void*)0), ((void*)0), VAR_5, 0, 0);
    VAR_8 = FUNC_1(VAR_7, "POST", "/post/post_action.php", "HTTP/1.0", "", VAR_9, VAR_3, 0);

    FUNC_8(VAR_8 != ((void*)0), "HttpOpenRequest failed: %u\n", FUNC_0());

    VAR_12[0] = 0;
    VAR_10 = sizeof(VAR_12);
    FUNC_6(0xdeadbeef);
    VAR_13 = FUNC_2(VAR_8, VAR_1 | VAR_2, VAR_12, &VAR_10, ((void*)0));
    VAR_11 = FUNC_0();
    FUNC_8(!VAR_13 || FUNC_7(VAR_13), "HttpQueryInfo succeeded\n");
    if (!VAR_13) FUNC_8(VAR_11 == VAR_0, "expected ERROR_HTTP_HEADER_NOT_FOUND, got %u\n", VAR_11);
    FUNC_8(FUNC_7(!FUNC_9(VAR_12, ", */*, %p, , , */*")) ||
       FUNC_7(!FUNC_9(VAR_12, "*/*, %p, */*")) ||
       !FUNC_9(VAR_12, ""), "got '%s' expected ''\n", VAR_12);

    FUNC_3(VAR_8);
    FUNC_3(VAR_7);
    FUNC_3(VAR_6);
}
