
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,int,char*,int) ;
 char* FUNC_5 (char*,char) ;
 size_t FUNC_6 (char*,int *,int) ;
 int FUNC_7 (int ) ;

size_t FUNC_8(void) {
    int VAR_2 = FUNC_7(VAR_1);
    size_t VAR_3;
    char VAR_4[4096];
    char VAR_5[256];
    int VAR_6, VAR_7;
    char *VAR_8, *VAR_9;

    FUNC_4(VAR_5,256,"/proc/%d/stat",FUNC_1());
    if ((VAR_6 = FUNC_2(VAR_5,VAR_0)) == -1) return 0;
    if (FUNC_3(VAR_6,VAR_4,4096) <= 0) {
        FUNC_0(VAR_6);
        return 0;
    }
    FUNC_0(VAR_6);

    VAR_8 = VAR_4;
    VAR_7 = 23;
    while(VAR_8 && VAR_7--) {
        VAR_8 = FUNC_5(VAR_8,' ');
        if (VAR_8) VAR_8++;
    }
    if (!VAR_8) return 0;
    VAR_9 = FUNC_5(VAR_8,' ');
    if (!VAR_9) return 0;
    *VAR_9 = '\0';

    VAR_3 = FUNC_6(VAR_8,((void*)0),10);
    VAR_3 *= VAR_2;
    return VAR_3;
}
