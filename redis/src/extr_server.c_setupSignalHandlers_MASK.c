
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_sigaction; int sa_mask; int sa_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_10 ;

void FUNC_2(void) {
    struct sigaction VAR_11;



    FUNC_1(&VAR_11.sa_mask);
    VAR_11.sa_flags = 0;
    VAR_11.sa_handler = VAR_9;
    FUNC_0(VAR_8, &VAR_11, ((void*)0));
    FUNC_0(VAR_6, &VAR_11, ((void*)0));
    return;
}
