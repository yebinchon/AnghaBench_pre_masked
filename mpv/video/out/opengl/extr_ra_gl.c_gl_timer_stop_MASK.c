
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct ra_gl {int timer_active; TYPE_1__* gl; } ;
struct ra {struct ra_gl* priv; } ;
struct gl_timer {int active; int result; } ;
typedef struct gl_timer ra_timer ;
struct TYPE_2__ {int (* EndQuery ) (int ) ;} ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static uint64_t FUNC_1(struct ra *VAR_1, ra_timer *VAR_2)
{
    struct ra_gl *VAR_3 = VAR_1->priv;
    GL *VAR_4 = VAR_3->gl;
    struct gl_timer *VAR_5 = VAR_2;

    if (!VAR_5->active)
        return 0;

    VAR_4->EndQuery(VAR_0);
    VAR_3->timer_active = VAR_5->active = 0;

    return VAR_5->result;
}
