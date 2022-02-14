
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int *,char*,int ,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int,char*,...) ;

__attribute__((used)) static void FUNC_7(void)
{
    static const WCHAR VAR_5[] = {'S','y','s','t','e','m','\\',
     'C','u','r','r','e','n','t','C','o','n','t','r','o','l','S','e','t','\\',
     'C','o','n','t','r','o','l','\\','C','l','a','s','s','\\',
     '{','6','a','5','5','b','5','a','4','-','3','f','6','5','-',
     '1','1','d','b','-','b','7','0','4','-',
     '0','0','1','1','9','5','5','c','2','b','d','b','}',0};
    char VAR_6[VAR_4];
    BOOL VAR_7;

    VAR_6[0] = '.';
    VAR_6[1] = '\\';
    FUNC_5(VAR_6 + 2);
    FUNC_4(VAR_6 + 2);

    VAR_7 = FUNC_3(((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_6(!VAR_7, "Expected failure.\n");
    FUNC_6(FUNC_1() == VAR_2, "Got unexpected error %#x.\n", FUNC_1());

    VAR_7 = FUNC_3(((void*)0), ((void*)0), VAR_0, ((void*)0));
    FUNC_6(!VAR_7, "Expected failure.\n");
    FUNC_6(FUNC_1() == VAR_2, "Got unexpected error %#x.\n", FUNC_1());

    VAR_7 = FUNC_3(((void*)0), VAR_6 + 2, VAR_0, ((void*)0));
    FUNC_6(!VAR_7, "Expected failure.\n");
    FUNC_6(FUNC_1() == VAR_2, "Got unexpected error %#x.\n", FUNC_1());

    VAR_7 = FUNC_3(((void*)0), VAR_6 + 2, 0, ((void*)0));
    FUNC_6(!VAR_7, "Expected failure.\n");
    FUNC_6(FUNC_1() == VAR_1, "Got unexpected error %#x.\n", FUNC_1());




    VAR_7 = FUNC_3(((void*)0), VAR_6, 0, ((void*)0));
    FUNC_6(VAR_7, "Failed to install class, error %#x.\n", FUNC_1());

    FUNC_6(!FUNC_2(VAR_3, VAR_5), "Failed to delete class key, error %u.\n", FUNC_1());
    FUNC_0(VAR_6);
}
