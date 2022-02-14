
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int *,char*,char*) ;
 char** VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;

int FUNC_5(const char *VAR_7) {
    mode_t VAR_8 = FUNC_4(VAR_4|VAR_1|VAR_2);
    FILE *VAR_9;
    int VAR_10;

    VAR_9 = FUNC_2(VAR_7,"w");
    FUNC_4(VAR_8);
    if (VAR_9 == ((void*)0)) return -1;
    FUNC_0(VAR_7,VAR_0|VAR_3);
    for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
        FUNC_3(VAR_9,"%s\n",VAR_5[VAR_10]);
    FUNC_1(VAR_9);
    return 0;
}
