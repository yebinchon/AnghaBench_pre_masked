
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; scalar_t__ sa_flags; int sa_mask; } ;
typedef scalar_t__ sighandler_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,struct sigaction*,struct sigaction*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(int VAR_1, sighandler_t VAR_2)
{
    struct sigaction VAR_3;

    FUNC_0(VAR_1, ((void*)0), &VAR_3);

    if (VAR_3.sa_handler == VAR_0) {
        FUNC_1(&VAR_3.sa_mask);
        VAR_3.sa_flags = 0;
        VAR_3.sa_handler = VAR_2;
        FUNC_0(VAR_1, &VAR_3, ((void*)0));
    }
}
