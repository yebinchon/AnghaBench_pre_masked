
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ stop_play; scalar_t__ initialized; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct MPContext*) ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (struct MPContext*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void *FUNC_4(void *VAR_1)
{
    struct MPContext *VAR_2 = VAR_1;

    FUNC_3("mpv core");

    while (!VAR_2->initialized && VAR_2->stop_play != VAR_0)
        FUNC_0(VAR_2);

    if (VAR_2->initialized)
        FUNC_1(VAR_2);




    FUNC_2(VAR_2);

    return ((void*)0);
}
