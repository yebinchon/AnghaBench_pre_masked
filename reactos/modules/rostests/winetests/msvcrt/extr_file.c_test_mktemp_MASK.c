
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    char VAR_0[16];

    FUNC_2(VAR_0, "a");
    FUNC_1(!FUNC_0(VAR_0), "_mktemp(\"a\") != NULL\n");

    FUNC_2(VAR_0, "testXXXXX");
    FUNC_1(!FUNC_0(VAR_0), "_mktemp(\"testXXXXX\") != NULL\n");

    FUNC_2(VAR_0, "testXXXXXX");
    FUNC_1(FUNC_0(VAR_0) != ((void*)0), "_mktemp(\"testXXXXXX\") == NULL\n");

    FUNC_2(VAR_0, "testXXXXXXa");
    FUNC_1(!FUNC_0(VAR_0), "_mktemp(\"testXXXXXXa\") != NULL\n");

    FUNC_2(VAR_0, "**XXXXXX");
    FUNC_1(FUNC_0(VAR_0) != ((void*)0), "_mktemp(\"**XXXXXX\") == NULL\n");
}
