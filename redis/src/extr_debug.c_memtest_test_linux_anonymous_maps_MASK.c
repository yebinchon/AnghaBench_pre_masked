
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int logbuf ;
typedef int line ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (void*,size_t,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int,char*,unsigned long,unsigned long) ;
 char* FUNC_7 (char*,char) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 size_t FUNC_10 (char*,int *,int) ;
 int FUNC_11 (int,char*,int) ;

int FUNC_12(void) {
    FILE *VAR_1;
    char VAR_2[1024];
    char VAR_3[1024];
    size_t VAR_4, VAR_5, VAR_6;
    size_t VAR_7[VAR_0];
    size_t VAR_8[VAR_0];
    int VAR_9 = 0, VAR_10;

    int VAR_11 = FUNC_5();
    if (!VAR_11) return 0;

    VAR_1 = FUNC_3("/proc/self/maps","r");
    if (!VAR_1) return 0;
    while(FUNC_2(VAR_2,sizeof(VAR_2),VAR_1) != ((void*)0)) {
        char *VAR_12, *VAR_13, *VAR_14 = VAR_2;

        VAR_12 = VAR_14;
        VAR_14 = FUNC_7(VAR_14,'-');
        if (!VAR_14) continue;
        *VAR_14++ = '\0';
        VAR_13 = VAR_14;
        VAR_14 = FUNC_7(VAR_14,' ');
        if (!VAR_14) continue;
        *VAR_14++ = '\0';
        if (FUNC_9(VAR_14,"stack") ||
            FUNC_9(VAR_14,"vdso") ||
            FUNC_9(VAR_14,"vsyscall")) continue;
        if (!FUNC_9(VAR_14,"00:00")) continue;
        if (!FUNC_9(VAR_14,"rw")) continue;

        VAR_4 = FUNC_10(VAR_12,((void*)0),16);
        VAR_5 = FUNC_10(VAR_13,((void*)0),16);
        VAR_6 = VAR_5-VAR_4;

        VAR_7[VAR_9] = VAR_4;
        VAR_8[VAR_9] = VAR_6;
        FUNC_6(VAR_3,sizeof(VAR_3),
            "*** Preparing to test memory region %lx (%lu bytes)\n",
                (unsigned long) VAR_7[VAR_9],
                (unsigned long) VAR_8[VAR_9]);
        if (FUNC_11(VAR_11,VAR_3,FUNC_8(VAR_3)) == -1) { }
        VAR_9++;
    }

    int VAR_15 = 0;
    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        if (FUNC_11(VAR_11,".",1) == -1) { }
        VAR_15 += FUNC_4((void*)VAR_7[VAR_10],VAR_8[VAR_10],1);
        if (FUNC_11(VAR_11, VAR_15 ? "E" : "O",1) == -1) { }
    }
    if (FUNC_11(VAR_11,"\n",1) == -1) { }




    FUNC_1(VAR_1);
    FUNC_0(VAR_11);
    return VAR_15;
}
