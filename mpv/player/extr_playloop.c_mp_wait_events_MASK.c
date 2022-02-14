
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {scalar_t__ sleeptime; int dispatch; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct MPContext*,char*) ;
 int FUNC_1 (int ,scalar_t__) ;

void FUNC_2(struct MPContext *VAR_1)
{
    bool VAR_2 = VAR_1->sleeptime > 0;
    if (VAR_2)
        FUNC_0(VAR_1, "start sleep");

    FUNC_1(VAR_1->dispatch, VAR_1->sleeptime);

    VAR_1->sleeptime = VAR_0;

    if (VAR_2)
        FUNC_0(VAR_1, "end sleep");
}
