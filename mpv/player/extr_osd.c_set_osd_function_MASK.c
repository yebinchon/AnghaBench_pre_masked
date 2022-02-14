
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MPOpts {double osd_duration; } ;
struct MPContext {int osd_function; int osd_force_update; scalar_t__ osd_function_visible; struct MPOpts* opts; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct MPContext*) ;

void FUNC_2(struct MPContext *VAR_0, int VAR_1)
{
    struct MPOpts *VAR_2 = VAR_0->opts;

    VAR_0->osd_function = VAR_1;
    VAR_0->osd_function_visible = FUNC_0() + VAR_2->osd_duration / 1000.0;
    VAR_0->osd_force_update = 1;
    FUNC_1(VAR_0);
}
