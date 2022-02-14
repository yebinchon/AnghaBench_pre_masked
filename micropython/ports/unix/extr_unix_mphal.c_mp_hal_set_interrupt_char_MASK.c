
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_handler; scalar_t__ sa_flags; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;

void FUNC_2(char VAR_4) {

    if (VAR_4 == VAR_0) {


        struct sigaction VAR_5;
        VAR_5.sa_flags = 0;
        VAR_5.sa_handler = VAR_3;
        FUNC_1(&VAR_5.sa_mask);
        FUNC_0(VAR_1, &VAR_5, ((void*)0));

    } else {


        struct sigaction VAR_6;
        VAR_6.sa_flags = 0;
        VAR_6.sa_handler = VAR_2;
        FUNC_1(&VAR_6.sa_mask);
        FUNC_0(VAR_1, &VAR_6, ((void*)0));

    }
}
