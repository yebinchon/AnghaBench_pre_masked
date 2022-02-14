
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef unsigned int UINT ;
typedef scalar_t__ HICON ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 unsigned int FUNC_4 (char const*,int,int,int,scalar_t__*,unsigned int*,int,int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    static const WCHAR VAR_0[] = {'n','o','t','e','p','a','d','.','e','x','e',0};
    static const WCHAR VAR_1[] = {'s','h','e','l','l','3','2','.','d','l','l',0};
    static const WCHAR VAR_2[] = {0};
    UINT VAR_3, VAR_4;
    HICON VAR_5[256];
    UINT VAR_6[256], VAR_7;

    if (!&FUNC_4)
    {
        FUNC_5("SHExtractIconsW not available\n");
        return;
    }

    VAR_3 = FUNC_4(VAR_2, 0, 16, 16, VAR_5, VAR_6, 1, 0);
    FUNC_3(VAR_3 == ~0u, "got %u\n", VAR_3);

    VAR_3 = FUNC_4(VAR_0, 0, 16, 16, ((void*)0), ((void*)0), 1, 0);
    FUNC_3(VAR_3 == 1 || FUNC_2(VAR_3 == 2) , "got %u\n", VAR_3);

    VAR_5[0] = (HICON)0xdeadbeef;
    VAR_3 = FUNC_4(VAR_0, 0, 16, 16, VAR_5, ((void*)0), 1, 0);
    FUNC_3(VAR_3 == 1, "got %u\n", VAR_3);
    FUNC_3(VAR_5[0] != (HICON)0xdeadbeef, "icon not set\n");
    FUNC_0(VAR_5[0]);

    VAR_5[0] = (HICON)0xdeadbeef;
    VAR_6[0] = 0xdeadbeef;
    VAR_3 = FUNC_4(VAR_0, 0, 16, 16, VAR_5, VAR_6, 1, 0);
    FUNC_3(VAR_3 == 1, "got %u\n", VAR_3);
    FUNC_3(VAR_5[0] != (HICON)0xdeadbeef, "icon not set\n");
    FUNC_3(VAR_6[0] != 0xdeadbeef, "id not set\n");
    FUNC_0(VAR_5[0]);

    VAR_3 = FUNC_4(VAR_1, 0, 16, 16, ((void*)0), ((void*)0), 0, 0);
    VAR_4 = FUNC_4(VAR_1, 4, FUNC_1(32,16), FUNC_1(32,16), ((void*)0), ((void*)0), 256, 0);
    FUNC_3(VAR_3 && VAR_3 == VAR_4,
       "icon count should be independent of requested icon sizes and base icon index\n");

    VAR_3 = FUNC_4(VAR_1, 0, 16, 16, VAR_5, VAR_6, 0, 0);
    FUNC_3(VAR_3 == ~0u || !VAR_3 , "got %u\n", VAR_3);

    VAR_3 = FUNC_4(VAR_1, 0, 16, 16, VAR_5, VAR_6, 3, 0);
    FUNC_3(VAR_3 == 3, "got %u\n", VAR_3);
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) FUNC_0(VAR_5[VAR_7]);


    VAR_3 = FUNC_4(VAR_1, 0, FUNC_1(16,32), FUNC_1(16,32), VAR_5, VAR_6, 3, 0);
    FUNC_3(!VAR_3 || VAR_3 == 4, "got %u\n", VAR_3);
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) FUNC_0(VAR_5[VAR_7]);

    VAR_3 = FUNC_4(VAR_1, 0, FUNC_1(16,32), FUNC_1(16,32), VAR_5, VAR_6, 4, 0);
    FUNC_3(VAR_3 == 4, "got %u\n", VAR_3);
    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) FUNC_0(VAR_5[VAR_7]);
}
