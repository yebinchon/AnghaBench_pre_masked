
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_gl {int timer_active; TYPE_1__* gl; } ;
struct ra {struct ra_gl* priv; } ;
struct gl_timer {size_t idx; int active; int * query; scalar_t__ result; } ;
typedef struct gl_timer ra_timer ;
struct TYPE_2__ {int (* BeginQuery ) (int ,int ) ;int (* GetQueryObjectui64v ) (int ,int ,scalar_t__*) ;scalar_t__ (* IsQuery ) (int ) ;} ;
typedef TYPE_1__ GL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ra *VAR_3, ra_timer *VAR_4)
{
    struct ra_gl *VAR_5 = VAR_3->priv;
    GL *VAR_6 = VAR_5->gl;
    struct gl_timer *VAR_7 = VAR_4;



    if (VAR_5->timer_active)
        return;


    VAR_7->result = 0;
    if (VAR_6->IsQuery(VAR_7->query[VAR_7->idx])) {
        VAR_6->GetQueryObjectui64v(VAR_7->query[VAR_7->idx], VAR_1,
                                &VAR_7->result);
    }

    VAR_6->BeginQuery(VAR_2, VAR_7->query[VAR_7->idx++]);
    VAR_7->idx %= VAR_0;

    VAR_5->timer_active = VAR_7->active = 1;
}
