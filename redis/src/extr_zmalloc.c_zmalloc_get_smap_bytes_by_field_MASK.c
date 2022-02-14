
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int line ;
typedef int filename ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int,char*,long) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char*,int *,int) ;

size_t FUNC_8(char *VAR_0, long VAR_1) {
    char VAR_2[1024];
    size_t VAR_3 = 0;
    int VAR_4 = FUNC_5(VAR_0);
    FILE *VAR_5;

    if (VAR_1 == -1) {
        VAR_5 = FUNC_2("/proc/self/smaps","r");
    } else {
        char VAR_6[128];
        FUNC_3(VAR_6,sizeof(VAR_6),"/proc/%ld/smaps",VAR_1);
        VAR_5 = FUNC_2(VAR_6,"r");
    }

    if (!VAR_5) return 0;
    while(FUNC_1(VAR_2,sizeof(VAR_2),VAR_5) != ((void*)0)) {
        if (FUNC_6(VAR_2,VAR_0,VAR_4) == 0) {
            char *VAR_7 = FUNC_4(VAR_2,'k');
            if (VAR_7) {
                *VAR_7 = '\0';
                VAR_3 += FUNC_7(VAR_2+VAR_4,((void*)0),10) * 1024;
            }
        }
    }
    FUNC_0(VAR_5);
    return VAR_3;
}
