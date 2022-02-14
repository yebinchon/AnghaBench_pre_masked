
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char,int,int,int ) ;

void FUNC_5(char *VAR_1, int VAR_2, int VAR_3) {

    int VAR_4;
    if (VAR_2 >= 0 && VAR_3 >= 0)
        VAR_4 = FUNC_1(VAR_2, VAR_3);
    else {
        VAR_4 = FUNC_0();
        VAR_3 = FUNC_3(VAR_4);
        VAR_2 = FUNC_2(VAR_4);
    }


    int VAR_5 = 0;
    while (VAR_1[VAR_5] != 0) {
        VAR_4 = FUNC_4(VAR_1[VAR_5++], VAR_2, VAR_3, VAR_0);

        VAR_3 = FUNC_3(VAR_4);
        VAR_2 = FUNC_2(VAR_4);
    }
}
