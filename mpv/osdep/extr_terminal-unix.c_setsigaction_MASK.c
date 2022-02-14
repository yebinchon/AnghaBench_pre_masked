
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void (* sa_handler ) (int) ;int sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct sigaction*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_1, void (*VAR_2) (int),
                        int VAR_3, bool VAR_4)
{
    struct sigaction VAR_5;
    VAR_5.sa_handler = VAR_2;

    if(VAR_4)
        FUNC_2(&VAR_5.sa_mask);
    else
        FUNC_1(&VAR_5.sa_mask);

    VAR_5.sa_flags = VAR_3 | VAR_0;
    return FUNC_0(VAR_1, &VAR_5, ((void*)0));
}
