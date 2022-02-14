
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int UINT ;
typedef scalar_t__ HICON ;
typedef char CHAR ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 unsigned int FUNC_4 (char const*,int,int,int,scalar_t__*,unsigned int*,int,int ) ;

__attribute__((used)) static void FUNC_5(void) {
    const CHAR VAR_0[] = "shell32.dll";
    HICON VAR_1[256];
    UINT VAR_2, VAR_3[256], VAR_4, VAR_5;

    if (!&FUNC_4) return;

    VAR_4 = FUNC_4("", 0, 16, 16, VAR_1, VAR_3, 1, 0);
    FUNC_3(VAR_4 == ~0u, "got %u\n", VAR_4);

    VAR_4 = FUNC_4("notepad.exe", 0, 16, 16, ((void*)0), ((void*)0), 1, 0);
    FUNC_3(VAR_4 == 1 || FUNC_2(VAR_4 == 2) , "got %u\n", VAR_4);

    VAR_1[0] = (HICON)0xdeadbeef;
    VAR_4 = FUNC_4("notepad.exe", 0, 16, 16, VAR_1, ((void*)0), 1, 0);
    FUNC_3(VAR_4 == 1, "got %u\n", VAR_4);
    FUNC_3(VAR_1[0] != (HICON)0xdeadbeef, "icon not set\n");
    FUNC_0(VAR_1[0]);

    VAR_1[0] = (HICON)0xdeadbeef;
    VAR_3[0] = 0xdeadbeef;
    VAR_4 = FUNC_4("notepad.exe", 0, 16, 16, VAR_1, VAR_3, 1, 0);
    FUNC_3(VAR_4 == 1, "got %u\n", VAR_4);
    FUNC_3(VAR_1[0] != (HICON)0xdeadbeef, "icon not set\n");
    FUNC_3(VAR_3[0] != 0xdeadbeef, "id not set\n");
    FUNC_0(VAR_1[0]);

    VAR_4 = FUNC_4(VAR_0, 0, 16, 16, ((void*)0), ((void*)0), 0, 0);
    VAR_5 = FUNC_4(VAR_0, 4, FUNC_1(32,16), FUNC_1(32,16),
                                   ((void*)0), ((void*)0), 256, 0);
    FUNC_3((VAR_4 == VAR_5) && (VAR_4 > 0),
       "Icon count should be independent of requested icon sizes and base icon index! "
       "(cIcons=%d, cIcons2=%d)\n", VAR_4, VAR_5);

    VAR_4 = FUNC_4(VAR_0, 0, 16, 16, VAR_1, VAR_3, 0, 0);
    FUNC_3(VAR_4 == 0, "Zero icons requested, got cIcons=%d\n", VAR_4);

    VAR_4 = FUNC_4(VAR_0, 0, 16, 16, VAR_1, VAR_3, 3, 0);
    FUNC_3(VAR_4 == 3, "Three icons requested got cIcons=%d\n", VAR_4);
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) FUNC_0(VAR_1[VAR_2]);


    VAR_4 = FUNC_4(VAR_0, 0, FUNC_1(16,32), FUNC_1(16,32),
                                   VAR_1, VAR_3, 3, 0);
    FUNC_3(VAR_4 == 0 || VAR_4 == 4, "Three icons requested got cIcons=%d\n", VAR_4);
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) FUNC_0(VAR_1[VAR_2]);

    VAR_4 = FUNC_4(VAR_0, 0, FUNC_1(16,32), FUNC_1(16,32),
                                   VAR_1, VAR_3, 4, 0);
    FUNC_3(VAR_4 == 4, "Four icons requested got cIcons=%d\n", VAR_4);
    for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++) FUNC_0(VAR_1[VAR_2]);
}
