
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;int sa_flags; int sa_mask; int member_0; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(int VAR_1, void (*VAR_2)(int))
{
    struct sigaction VAR_3 = { 0 };
    VAR_3.sa_handler = VAR_2;
    FUNC_1(&VAR_3.sa_mask);
    VAR_3.sa_flags = VAR_0;
    return FUNC_0(VAR_1, &VAR_3, ((void*)0));
}
