
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd_ctx {scalar_t__ bar_osd; scalar_t__ msg_osd; struct MPContext* mpctx; } ;
struct MPContext {int add_osd_seek_info; int osd_force_update; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPContext*) ;

__attribute__((used)) static void FUNC_1(void *VAR_2)
{
    struct mp_cmd_ctx *VAR_3 = VAR_2;
    struct MPContext *VAR_4 = VAR_3->mpctx;

    VAR_4->add_osd_seek_info |=
            (VAR_3->msg_osd ? VAR_1 : 0) |
            (VAR_3->bar_osd ? VAR_0 : 0);
    VAR_4->osd_force_update = 1;
    FUNC_0(VAR_4);
}
