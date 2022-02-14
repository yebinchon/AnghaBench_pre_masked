
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,int) ;
 size_t FUNC_1 (char const*,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    static const char VAR_0[] = "string";
    size_t VAR_1;

    if(!&FUNC_1) {
        FUNC_2("strnlen not found\n");
        return;
    }

    VAR_1 = FUNC_1(VAR_0, 20);
    FUNC_0(VAR_1 == 6, "Returned length = %d\n", (int)VAR_1);

    VAR_1 = FUNC_1(VAR_0, 3);
    FUNC_0(VAR_1 == 3, "Returned length = %d\n", (int)VAR_1);

    VAR_1 = FUNC_1(((void*)0), 0);
    FUNC_0(VAR_1 == 0, "Returned length = %d\n", (int)VAR_1);
}
