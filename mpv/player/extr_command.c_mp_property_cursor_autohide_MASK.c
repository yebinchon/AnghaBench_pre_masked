
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct m_property {int dummy; } ;
struct MPOpts {int cursor_autohide_delay; } ;
struct TYPE_3__ {scalar_t__ mouse_timer; struct MPOpts* opts; } ;
typedef TYPE_1__ MPContext ;


 int FUNC_0 (TYPE_1__*,struct m_property*,int,void*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, struct m_property *VAR_1,
                                       int VAR_2, void *VAR_3)
{
    MPContext *VAR_4 = VAR_0;
    struct MPOpts *VAR_5 = VAR_4->opts;
    int VAR_6 = VAR_5->cursor_autohide_delay;
    int VAR_7 = FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
    if (VAR_5->cursor_autohide_delay != VAR_6)
        VAR_4->mouse_timer = 0;
    return VAR_7;
}
