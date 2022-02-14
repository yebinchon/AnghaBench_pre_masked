
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int item ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int,char*) ;
 char* FUNC_4 (int ,char*) ;

__attribute__((used)) static inline int FUNC_5(char *VAR_0, item *VAR_1, bool VAR_2, int VAR_3) {
    char *VAR_4 = VAR_0;
    *VAR_4 = ' ';
    VAR_4++;
    if (FUNC_0(VAR_1) == 0) {
        *VAR_4 = '0';
        VAR_4++;
    } else {
        VAR_4 = FUNC_3(*((uint32_t *) FUNC_2(VAR_1)), VAR_4);
    }
    *VAR_4 = ' ';
    VAR_4 = FUNC_3(VAR_3-2, VAR_4+1);

    if (VAR_2) {
        *VAR_4 = ' ';
        VAR_4 = FUNC_4(FUNC_1(VAR_1), VAR_4+1);
    }

    *VAR_4 = '\r';
    *(VAR_4+1) = '\n';
    *(VAR_4+2) = '\0';
    return (VAR_4 - VAR_0) + 2;
}
