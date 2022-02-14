
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,char*,int) ;

__attribute__((used)) static void FUNC_4(void)
{
    static const WCHAR VAR_0[] = {'[',']','{','}','(',')',',',';','?','*','=','!','@','\\',0};
    static const WCHAR VAR_1[] = { 'w','i','n','e','1','0',0};
    static const WCHAR VAR_2[] = { 'W','i','n','e','1','2','3','4','5','6','7','8','9','0','1','2','3','4','5',
                                   '6','7','8','9','0','1','2','3','4','5','6','7','8','9','0', 0};
    static const WCHAR VAR_3[] = { 'W','i','n','e',' ','V','i','n','e','g','a','r', 0};
    static const WCHAR VAR_4[] = { '1','2','3','4','5','6','7','8','9','0','1','2','3','4','5','6','7','8','9','0',
                                   '1','2','3','4','5','6','7','8','9','0','1','2', 0};
    WCHAR VAR_5[10];
    int VAR_6;
    BOOL VAR_7;

    FUNC_1(VAR_5, VAR_1);
    for(VAR_6 = 0; VAR_6 < FUNC_2(VAR_0); VAR_6++)
    {
        VAR_5[4] = VAR_0[VAR_6];
        VAR_7 = FUNC_0(VAR_5);
        FUNC_3(!VAR_7, "got %d\n", VAR_7);
    }

    VAR_7 = FUNC_0(VAR_2);
    FUNC_3(!VAR_7, "got %d\n", VAR_7);

    VAR_7 = FUNC_0(VAR_3);
    FUNC_3(VAR_7, "got %d\n", VAR_7);

    VAR_7 = FUNC_0(VAR_4);
    FUNC_3(VAR_7, "got %d\n", VAR_7);
}
