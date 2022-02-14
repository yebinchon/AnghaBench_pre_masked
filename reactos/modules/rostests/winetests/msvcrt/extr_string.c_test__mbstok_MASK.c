
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char* FUNC_0 (int *,unsigned char const*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,char*,unsigned char*,...) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    const unsigned char VAR_0[] = "t";

    char VAR_1[] = "!.!test";
    unsigned char *VAR_2;

    FUNC_3(VAR_1, "!");

    VAR_2 = FUNC_0(((void*)0), VAR_0);

    FUNC_2(!VAR_2 || FUNC_1((char*)VAR_2==VAR_1+4),
            "_mbstok(NULL, \"t\") = %p, expected NULL (%p)\n", VAR_2, VAR_1);

    VAR_2 = FUNC_0(((void*)0), VAR_0);
    FUNC_2(!VAR_2, "_mbstok(NULL, \"t\") = %p, expected NULL\n", VAR_2);
}
