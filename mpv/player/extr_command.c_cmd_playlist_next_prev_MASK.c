
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct playlist_entry {int dummy; } ;
struct mp_cmd_ctx {int success; int on_osd; TYPE_2__* args; scalar_t__ priv; struct MPContext* mpctx; } ;
struct MPContext {int add_osd_seek_info; } ;
struct TYPE_3__ {int i; } ;
struct TYPE_4__ {TYPE_1__ v; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct playlist_entry* FUNC_0 (struct MPContext*,int,int,int) ;
 int FUNC_1 (struct MPContext*,struct playlist_entry*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
    struct mp_cmd_ctx *VAR_3 = VAR_2;
    struct MPContext *VAR_4 = VAR_3->mpctx;
    int VAR_5 = *(int *)VAR_3->priv;
    int VAR_6 = VAR_3->args[0].v.i;

    struct playlist_entry *VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6, 1);
    if (!VAR_7 && !VAR_6) {
        VAR_3->success = 0;
        return;
    }

    FUNC_1(VAR_4, VAR_7);
    if (VAR_3->on_osd & VAR_0)
        VAR_4->add_osd_seek_info |= VAR_1;
}
