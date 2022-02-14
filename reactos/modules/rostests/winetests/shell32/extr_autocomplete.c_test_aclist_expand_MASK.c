
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_enumerator {int num_resets; int num_expand; char* last_expand; } ;
typedef char WCHAR ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char,int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(HWND VAR_3, void *VAR_4)
{
    struct string_enumerator *VAR_5 = (struct string_enumerator*)VAR_4;
    static WCHAR VAR_6[] = {'t','e','s','t',0};
    static WCHAR VAR_7[] = {'t','e','s','t','\\',0};
    static WCHAR VAR_8[] = {'t','e','s','t','\\','f','o','o','\\','b','a','r','\\','b','a',0};
    static WCHAR VAR_9[] = {'t','e','s','t','\\','f','o','o','\\','b','a','r','\\',0};
    static WCHAR VAR_10[] = {'t','e','s','t','\\','f','o','o','\\','b','a','r','\\','b','a','z','_','b','b','q','\\',0};
    VAR_5->num_resets = 0;

    FUNC_5(VAR_5->num_expand == 0, "Expected 0 expansions, got %u\n", VAR_5->num_expand);
    FUNC_1(VAR_3, VAR_2, 0, (LPARAM)VAR_6);
    FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_6) - 1, FUNC_0(VAR_6) - 1);
    FUNC_1(VAR_3, VAR_1, '\\', 1);
    FUNC_3();
    FUNC_5(VAR_5->num_expand == 1, "Expected 1 expansion, got %u\n", VAR_5->num_expand);
    FUNC_5(FUNC_4(VAR_5->last_expand, VAR_7) == 0, "Expected %s, got %s\n", FUNC_6(VAR_7), FUNC_6(VAR_5->last_expand));
    FUNC_5(VAR_5->num_resets == 1, "Expected 1 reset, got %u\n", VAR_5->num_resets);
    FUNC_1(VAR_3, VAR_2, 0, (LPARAM)VAR_8);
    FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_8) - 1, FUNC_0(VAR_8) - 1);
    FUNC_1(VAR_3, VAR_1, 'z', 1);
    FUNC_3();
    FUNC_5(VAR_5->num_expand == 2, "Expected 2 expansions, got %u\n", VAR_5->num_expand);
    FUNC_5(FUNC_4(VAR_5->last_expand, VAR_9) == 0, "Expected %s, got %s\n", FUNC_6(VAR_9), FUNC_6(VAR_5->last_expand));
    FUNC_5(VAR_5->num_resets == 2, "Expected 2 resets, got %u\n", VAR_5->num_resets);
    FUNC_2(VAR_3);
    FUNC_1(VAR_3, VAR_1, '_', 1);
    FUNC_1(VAR_3, VAR_1, 'b', 1);
    FUNC_2(0);
    FUNC_2(VAR_3);
    FUNC_1(VAR_3, VAR_1, 'b', 1);
    FUNC_1(VAR_3, VAR_1, 'q', 1);
    FUNC_3();
    FUNC_5(VAR_5->num_expand == 2, "Expected 2 expansions, got %u\n", VAR_5->num_expand);
    FUNC_5(VAR_5->num_resets == 2, "Expected 2 resets, got %u\n", VAR_5->num_resets);
    FUNC_1(VAR_3, VAR_1, '\\', 1);
    FUNC_3();
    FUNC_5(VAR_5->num_expand == 3, "Expected 3 expansions, got %u\n", VAR_5->num_expand);
    FUNC_5(FUNC_4(VAR_5->last_expand, VAR_10) == 0, "Expected %s, got %s\n", FUNC_6(VAR_10), FUNC_6(VAR_5->last_expand));
    FUNC_5(VAR_5->num_resets == 3, "Expected 3 resets, got %u\n", VAR_5->num_resets);
    FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_7) - 1, -1);
    FUNC_1(VAR_3, VAR_1, 'x', 1);
    FUNC_1(VAR_3, VAR_1, 'y', 1);
    FUNC_3();
    FUNC_5(VAR_5->num_expand == 4, "Expected 4 expansions, got %u\n", VAR_5->num_expand);
    FUNC_5(FUNC_4(VAR_5->last_expand, VAR_7) == 0, "Expected %s, got %s\n", FUNC_6(VAR_7), FUNC_6(VAR_5->last_expand));
    FUNC_5(VAR_5->num_resets == 4, "Expected 4 resets, got %u\n", VAR_5->num_resets);
    FUNC_1(VAR_3, VAR_0, FUNC_0(VAR_6) - 1, -1);
    FUNC_1(VAR_3, VAR_1, 'x', 1);
    FUNC_3();
    FUNC_5(VAR_5->num_expand == 4, "Expected 4 expansions, got %u\n", VAR_5->num_expand);
    FUNC_5(VAR_5->num_resets == 5, "Expected 5 resets, got %u\n", VAR_5->num_resets);
}
