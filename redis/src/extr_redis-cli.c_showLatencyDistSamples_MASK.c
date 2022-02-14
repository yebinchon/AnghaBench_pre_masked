
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct distsamples {int character; scalar_t__ max; scalar_t__ count; } ;


 int FUNC_0 (float) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_3(struct distsamples *VAR_3, long long VAR_4) {
    int VAR_5;






    FUNC_2("\033[38;5;0m");
    for (VAR_5 = 0; ; VAR_5++) {
        int VAR_6 =
            FUNC_0((float) VAR_3[VAR_5].count / VAR_4 * (VAR_1-1));
        int VAR_7 = VAR_0[VAR_6];
        FUNC_2("\033[48;5;%dm%c", (int)VAR_7, VAR_3[VAR_5].character);
        VAR_3[VAR_5].count = 0;
        if (VAR_3[VAR_5].max == 0) break;
    }
    FUNC_2("\033[0m\n");
    FUNC_1(VAR_2);
}
