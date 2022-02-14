
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mrb_state ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,int *,size_t) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 () ;

int FUNC_6(uint8_t *VAR_0, size_t VAR_1) {
    if (VAR_1 < 1) {
        return 0;
    }
    char *VAR_2 = FUNC_1(VAR_1+1);
    FUNC_2(VAR_2, VAR_0, VAR_1);
    VAR_2[VAR_1] = '\0';
    mrb_state *VAR_3 = FUNC_5();
    FUNC_4(VAR_3, VAR_2);
    FUNC_3(VAR_3);
    FUNC_0(VAR_2);
    return 0;
}
