
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {TYPE_1__* in; struct vo* eq_opts_cache; struct vo* gl_opts_cache; struct vo* opts_cache; } ;
struct TYPE_2__ {int wakeup; int lock; } ;


 int FUNC_0 (struct vo*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vo*) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    FUNC_0(VAR_0);


    FUNC_3(VAR_0->opts_cache);
    FUNC_3(VAR_0->gl_opts_cache);
    FUNC_3(VAR_0->eq_opts_cache);

    FUNC_2(&VAR_0->in->lock);
    FUNC_1(&VAR_0->in->wakeup);
    FUNC_3(VAR_0);
}
