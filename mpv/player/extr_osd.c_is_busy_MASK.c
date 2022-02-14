
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPContext {double start_timestamp; int restart_complete; } ;


 double FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct MPContext *VAR_0)
{
    return !VAR_0->restart_complete && FUNC_0() - VAR_0->start_timestamp > 0.3;
}
