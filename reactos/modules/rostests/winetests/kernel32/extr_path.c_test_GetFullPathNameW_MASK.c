
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int invalid_parameters ;
typedef char WCHAR ;
typedef int * LPWSTR ;
typedef int * LPCWSTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int *,int **) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    static const WCHAR VAR_3[] = {0};
    static const WCHAR VAR_4[] = {'d','e','a','d','b','e','e','f',0};

    WCHAR VAR_5[VAR_2], *VAR_6;
    DWORD VAR_7;
    int VAR_8;

    const struct
    {
        LPCWSTR name;
        DWORD len;
        LPWSTR buffer;
        LPWSTR *lastpart;
        int win7_expect;
    } VAR_9[] =
    {
        {((void*)0), 0, ((void*)0), ((void*)0)},
        {((void*)0), 0, ((void*)0), &VAR_6, 1},
        {((void*)0), VAR_2, ((void*)0), ((void*)0)},
        {((void*)0), VAR_2, VAR_5, ((void*)0)},
        {((void*)0), VAR_2, VAR_5, &VAR_6, 1},
        {VAR_3, 0, ((void*)0), ((void*)0)},
        {VAR_3, 0, ((void*)0), &VAR_6, 1},
        {VAR_3, VAR_2, ((void*)0), ((void*)0)},
        {VAR_3, VAR_2, VAR_5, ((void*)0)},
        {VAR_3, VAR_2, VAR_5, &VAR_6, 1},
    };

    FUNC_2(0xdeadbeef);
    VAR_7 = FUNC_0(((void*)0), 0, ((void*)0), ((void*)0));
    if (!VAR_7 && FUNC_1() == VAR_0)
    {
        FUNC_6("GetFullPathNameW is not available\n");
        return;
    }

    for (VAR_8 = 0; VAR_8 < sizeof(VAR_9)/sizeof(VAR_9[0]); VAR_8++)
    {
        FUNC_2(0xdeadbeef);
        FUNC_4(VAR_5, VAR_4);
        VAR_6 = (WCHAR *)0xdeadbeef;
        VAR_7 = FUNC_0(VAR_9[VAR_8].name,
                               VAR_9[VAR_8].len,
                               VAR_9[VAR_8].buffer,
                               VAR_9[VAR_8].lastpart);
        FUNC_5(!VAR_7, "[%d] Expected GetFullPathNameW to return 0, got %u\n", VAR_8, VAR_7);
        FUNC_5(!FUNC_3(VAR_5, VAR_4), "[%d] Expected the output buffer to be unchanged, got %s\n", VAR_8, FUNC_7(VAR_5));
        FUNC_5(VAR_6 == (WCHAR *)0xdeadbeef ||
           (VAR_9[VAR_8].win7_expect && VAR_6 == ((void*)0)),
           "[%d] Expected output file part pointer to be untouched, got %p\n", VAR_8, VAR_6);
        FUNC_5(FUNC_1() == 0xdeadbeef ||
           FUNC_1() == VAR_1,
           "[%d] Expected GetLastError() to return 0xdeadbeef, got %u\n",
           VAR_8, FUNC_1());
    }
}
