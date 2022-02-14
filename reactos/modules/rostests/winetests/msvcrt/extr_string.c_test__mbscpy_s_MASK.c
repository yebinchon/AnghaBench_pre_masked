
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int src ;
typedef int dest ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (unsigned char*,char,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (unsigned char*,int,unsigned char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    const unsigned char VAR_2[] = "source string";
    unsigned char VAR_3[16];
    int VAR_4;

    if(!&FUNC_3)
    {
        FUNC_4("_mbscpy_s not found\n");
        return;
    }

    VAR_4 = FUNC_3(((void*)0), 0, VAR_2);
    FUNC_2(VAR_4 == VAR_0, "got %d\n", VAR_4);
    VAR_4 = FUNC_3(((void*)0), sizeof(VAR_3), VAR_2);
    FUNC_2(VAR_4 == VAR_0, "got %d\n", VAR_4);
    VAR_4 = FUNC_3(VAR_3, 0, VAR_2);
    FUNC_2(VAR_4 == VAR_0, "got %d\n", VAR_4);
    VAR_3[0] = 'x';
    VAR_4 = FUNC_3(VAR_3, sizeof(VAR_3), ((void*)0));
    FUNC_2(VAR_4 == VAR_0, "got %d\n", VAR_4);
    FUNC_2(!VAR_3[0], "dest buffer was not modified on invalid argument\n");

    FUNC_1(VAR_3, 'X', sizeof(VAR_3));
    VAR_4 = FUNC_3(VAR_3, sizeof(VAR_3), VAR_2);
    FUNC_2(!VAR_4, "got %d\n", VAR_4);
    FUNC_2(!FUNC_0(VAR_3, VAR_2, sizeof(VAR_2)), "dest = %s\n", VAR_3);
    FUNC_2(VAR_3[sizeof(VAR_2)] == 'X', "unused part of buffer was modified\n");

    FUNC_1(VAR_3, 'X', sizeof(VAR_3));
    VAR_4 = FUNC_3(VAR_3, 4, VAR_2);
    FUNC_2(VAR_4 == VAR_1, "got %d\n", VAR_4);
    FUNC_2(!VAR_3[0], "incorrect dest buffer (%d)\n", VAR_3[0]);
    FUNC_2(VAR_3[1] == VAR_2[1], "incorrect dest buffer (%d)\n", VAR_3[1]);
}
