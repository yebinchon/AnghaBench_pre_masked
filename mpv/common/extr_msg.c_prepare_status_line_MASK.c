
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_log_root {size_t status_lines; size_t blank_lines; } ;
typedef int FILE ;


 size_t FUNC_0 (size_t,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (int *,char*) ;
 int * VAR_0 ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static void FUNC_4(struct mp_log_root *VAR_1, char *VAR_2)
{
    FILE *VAR_3 = VAR_0;

    size_t VAR_4 = 1;
    char *VAR_5 = VAR_2;
    while (1) {
        VAR_5 = FUNC_3(VAR_5, '\n');
        if (!VAR_5)
            break;
        VAR_4++;
        VAR_5++;
    }

    size_t VAR_6 = VAR_1->status_lines;
    if (!VAR_2[0] && VAR_6 == 0)
        return;

    size_t VAR_7 = FUNC_1(FUNC_0(VAR_4, VAR_6), VAR_1->blank_lines);


    FUNC_2(VAR_3, "\r\033[K");

    for (size_t VAR_8 = 1; VAR_8 < VAR_7; VAR_8++)
        FUNC_2(VAR_3, "\033[A\r\033[K");

    for (size_t VAR_9 = VAR_4; VAR_9 < VAR_7; VAR_9++)
        FUNC_2(VAR_3, "\n");

    VAR_1->status_lines = VAR_4;
    VAR_1->blank_lines = FUNC_0(VAR_1->blank_lines, VAR_4);
}
