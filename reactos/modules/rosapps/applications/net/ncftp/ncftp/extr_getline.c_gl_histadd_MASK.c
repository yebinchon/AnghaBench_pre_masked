
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 char** VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 () ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 char* FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*,size_t) ;

void
FUNC_6(char *VAR_6)
{
    static char *VAR_7 = 0;
    char *VAR_8 = VAR_6;
    int VAR_9;


    if (VAR_1 < 0) {
        FUNC_1();
        VAR_1 = 0;
    }
    while (*VAR_8 == ' ' || *VAR_8 == '\t' || *VAR_8 == '\n')
 VAR_8++;
    if (*VAR_8) {
 VAR_9 = (int) FUNC_4(VAR_6);
 if (FUNC_3(VAR_8, '\n'))
     VAR_9--;
 if ((VAR_7 == 0) || ((int) FUNC_4(VAR_7) != VAR_9) ||
       FUNC_5(VAR_7, VAR_6, (size_t) VAR_9) != 0) {
            VAR_2[VAR_4] = FUNC_2(VAR_6);
     VAR_7 = VAR_2[VAR_4];
            VAR_4 = (VAR_4 + 1) % VAR_0;
            if (VAR_2[VAR_4] && *VAR_2[VAR_4]) {
         FUNC_0(VAR_2[VAR_4]);
            }
     VAR_2[VAR_4] = VAR_3;
 }
    }
    VAR_5 = VAR_4;
}
