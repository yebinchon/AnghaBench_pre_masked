
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

void FUNC_2() {
    int VAR_4 = VAR_0 * VAR_1;
    int VAR_5;
    char *VAR_6 = VAR_2;

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_6[VAR_5*2] = ' ';
        VAR_6[VAR_5*2+1] = VAR_3;
    }
    FUNC_1(FUNC_0(0, 0));
}
