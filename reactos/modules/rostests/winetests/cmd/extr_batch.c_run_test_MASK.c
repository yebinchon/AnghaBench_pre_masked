
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_5 (char*,char const**) ;
 int FUNC_6 (char const*,scalar_t__) ;
 int FUNC_7 (char const*,scalar_t__,char const*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(const char *VAR_0, DWORD VAR_1, const char *VAR_2, DWORD VAR_3)
{
    const char *VAR_4, *VAR_5;
    DWORD VAR_6, VAR_7;

    VAR_5 = FUNC_4(VAR_0, VAR_1, &VAR_7);
    if(!VAR_7 || !VAR_5)
        goto cleanup;

    if(!FUNC_6(VAR_5, VAR_7))
        goto cleanup;

    VAR_6 = FUNC_5("test.out", &VAR_4);
    if(VAR_6) {
        FUNC_7(VAR_4, VAR_6, VAR_2, VAR_3);
        FUNC_3(VAR_4);
    }
    FUNC_0("test.out");
    FUNC_0("test.err");

cleanup:
    FUNC_2(FUNC_1(), 0, (LPVOID)VAR_5);
}
