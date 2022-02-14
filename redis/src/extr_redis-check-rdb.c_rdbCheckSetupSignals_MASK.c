
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_sigaction; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(void) {
    struct sigaction VAR_8;

    FUNC_1(&VAR_8.sa_mask);
    VAR_8.sa_flags = VAR_0 | VAR_1 | VAR_2;
    VAR_8.sa_sigaction = VAR_7;
    FUNC_0(VAR_6, &VAR_8, ((void*)0));
    FUNC_0(VAR_3, &VAR_8, ((void*)0));
    FUNC_0(VAR_4, &VAR_8, ((void*)0));
    FUNC_0(VAR_5, &VAR_8, ((void*)0));
}
