
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 size_t FUNC_2 (char const*,int) ;

__attribute__((used)) static void FUNC_3(void) {
    const char *VAR_0 = "aÉbÔc";
    FUNC_0(FUNC_1(VAR_0) == 7);

    size_t VAR_1;

    VAR_1 = FUNC_2(VAR_0, 1);
    FUNC_0(VAR_1 == 1);

    VAR_1 = FUNC_2(VAR_0, 2);
    FUNC_0(VAR_1 == 1);

    VAR_1 = FUNC_2(VAR_0, 3);
    FUNC_0(VAR_1 == 3);

    VAR_1 = FUNC_2(VAR_0, 4);
    FUNC_0(VAR_1 == 4);

    VAR_1 = FUNC_2(VAR_0, 5);
    FUNC_0(VAR_1 == 4);

    VAR_1 = FUNC_2(VAR_0, 6);
    FUNC_0(VAR_1 == 6);

    VAR_1 = FUNC_2(VAR_0, 7);
    FUNC_0(VAR_1 == 7);

    VAR_1 = FUNC_2(VAR_0, 8);
    FUNC_0(VAR_1 == 7);
}
