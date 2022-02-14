
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 () ;

int FUNC_1(void) {
    int VAR_6 = (VAR_3) ? (VAR_0) : 0;
    int VAR_7=FUNC_0();
    if (VAR_7 ) {
        if(VAR_7==2)VAR_2;
        return 1;
    }
    VAR_1;
    for (int VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
        VAR_4[VAR_6+VAR_8] = VAR_5[VAR_8];
    }
    return 0;
}
