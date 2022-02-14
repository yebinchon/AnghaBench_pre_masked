
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BUFFER ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*,int,char const*,char*,char*,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 scalar_t__ FUNC_8 (char*) ;

int FUNC_9() {
    BUFFER *VAR_1 = FUNC_0(1);
    char VAR_2[2048 + 1];
    char VAR_3[9000 + 1];
    int VAR_4;

    for(VAR_4 = 0; VAR_4 < 2048; VAR_4++)
        VAR_2[VAR_4] = (char)((VAR_4 % 24) + 'a');
    VAR_2[2048] = '\0';

    const char *VAR_5 = "string1: %s\nstring2: %s\nstring3: %s\nstring4: %s";
    FUNC_2(VAR_1, VAR_5, VAR_2, VAR_2, VAR_2, VAR_2);
    FUNC_6(VAR_3, 9000, VAR_5, VAR_2, VAR_2, VAR_2, VAR_2);

    const char *VAR_6 = FUNC_4(VAR_1);

    if(FUNC_3(VAR_1) != FUNC_8(VAR_3) || FUNC_7(VAR_6, VAR_3) != 0) {
        FUNC_5(VAR_0, "\nbuffer_sprintf() is faulty.\n");
        FUNC_5(VAR_0, "\nstring  : %s (length %zu)\n", VAR_2, FUNC_8(VAR_2));
        FUNC_5(VAR_0, "\nbuffer  : %s (length %zu)\n", VAR_6, FUNC_3(VAR_1));
        FUNC_5(VAR_0, "\nexpected: %s (length %zu)\n", VAR_3, FUNC_8(VAR_3));
        FUNC_1(VAR_1);
        return -1;
    }

    FUNC_5(VAR_0, "buffer_sprintf() works as expected.\n");
    FUNC_1(VAR_1);
    return 0;
}
