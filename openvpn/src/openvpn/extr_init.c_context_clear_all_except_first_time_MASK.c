
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_persist {int dummy; } ;
struct context {int first_time; struct context_persist persist; } ;


 int FUNC_0 (struct context*) ;

void
FUNC_1(struct context *VAR_0)
{
    const bool VAR_1 = VAR_0->first_time;
    const struct context_persist VAR_2 = VAR_0->persist;
    FUNC_0(VAR_0);
    VAR_0->first_time = VAR_1;
    VAR_0->persist = VAR_2;
}
