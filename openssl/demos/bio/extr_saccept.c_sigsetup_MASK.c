
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; int sa_handler; int sa_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(void)
{
    struct sigaction VAR_3;




    VAR_3.sa_flags = VAR_0;
    VAR_3.sa_handler = VAR_2;
    FUNC_1(&VAR_3.sa_mask);
    FUNC_0(VAR_1, &VAR_3, ((void*)0));
}
