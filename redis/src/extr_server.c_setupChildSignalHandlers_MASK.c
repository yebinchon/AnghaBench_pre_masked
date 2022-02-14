
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(void) {
    struct sigaction VAR_2;



    FUNC_1(&VAR_2.sa_mask);
    VAR_2.sa_flags = 0;
    VAR_2.sa_handler = VAR_1;
    FUNC_0(VAR_0, &VAR_2, ((void*)0));
    return;
}
