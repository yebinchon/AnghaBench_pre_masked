
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int va_list ;
struct MPContext {int osd_show_pos; int osd_msg_next_duration; int osd_force_update; int osd_msg_visible; int osd_msg_text; TYPE_1__* opts; } ;
struct TYPE_2__ {int osd_level; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct MPContext*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct MPContext*,char const*,int ) ;

__attribute__((used)) static bool FUNC_4(struct MPContext *VAR_0, int VAR_1, int VAR_2,
                           const char *VAR_3, va_list VAR_4)
{
    if (VAR_1 > VAR_0->opts->osd_level)
        return 0;

    FUNC_2(VAR_0->osd_msg_text);
    VAR_0->osd_msg_text = FUNC_3(VAR_0, VAR_3, VAR_4);
    VAR_0->osd_show_pos = 0;
    VAR_0->osd_msg_next_duration = VAR_2 / 1000.0;
    VAR_0->osd_force_update = 1;
    FUNC_1(VAR_0);
    if (VAR_0->osd_msg_next_duration <= 0)
        VAR_0->osd_msg_visible = FUNC_0();
    return 1;
}
