
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPSTR ;



__attribute__((used)) static void FUNC_0(LPSTR VAR_0,
                                           LPSTR *VAR_1)
{
    LPSTR VAR_2 = VAR_0;
    for(; VAR_2[0] != '\0'; VAR_2++) {
        if (VAR_2[0] == '@') {
            VAR_2[0] = '\0';
            *VAR_1 = &VAR_2[1];
            break;
        }
    }
}
