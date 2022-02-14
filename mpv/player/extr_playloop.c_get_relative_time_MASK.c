
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {double last_time; } ;
typedef double int64_t ;


 double FUNC_0 () ;

double FUNC_1(struct MPContext *VAR_0)
{
    int64_t VAR_1 = FUNC_0();
    int64_t VAR_2 = VAR_1 - VAR_0->last_time;
    VAR_0->last_time = VAR_1;
    return VAR_2 * 0.000001;
}
