
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int,unsigned int) ;
 int FUNC_4 (unsigned int,unsigned int,unsigned int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;

__attribute__ ((section(".after_vectors")))
void
FUNC_6(void) {




    unsigned int VAR_4, VAR_5, VAR_6;
    unsigned int *VAR_7;


    VAR_7 = &VAR_1;


    while (VAR_7 < &VAR_2) {
        VAR_4 = *VAR_7++;
        VAR_5 = *VAR_7++;
        VAR_6 = *VAR_7++;
        FUNC_4(VAR_4, VAR_5, VAR_6);
    }


    while (VAR_7 < &VAR_0) {
        VAR_5 = *VAR_7++;
        VAR_6 = *VAR_7++;
        FUNC_3(VAR_5, VAR_6);
    }
    unsigned int * VAR_8 = (unsigned int *) 0xE000ED08;
    if ((unsigned int *)VAR_3!=(unsigned int *) 0x00000000) {

        *VAR_8 = (unsigned int)VAR_3;
    }
    FUNC_5();





    while (1) {
        ;
    }
}
