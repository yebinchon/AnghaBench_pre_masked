
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {double sleeptime; int dispatch; } ;
typedef int int64_t ;


 int FUNC_0 (int ,double) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;

void FUNC_3(struct MPContext *VAR_0, double VAR_1)
{
    if (VAR_0->sleeptime > VAR_1) {
        VAR_0->sleeptime = VAR_1;
        int64_t VAR_2 = FUNC_0(FUNC_2(), VAR_1);
        FUNC_1(VAR_0->dispatch, VAR_2);
    }
}
