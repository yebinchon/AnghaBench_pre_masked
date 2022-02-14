
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_x11_state {int wm_type; int fs; int pos_changed_during_fs; int size_changed_during_fs; int nofsrc; int pending_vo_events; int window; scalar_t__ parent; } ;
struct vo {TYPE_1__* opts; struct vo_x11_state* x11; } ;
struct TYPE_2__ {int fullscreen; } ;
typedef long Atom ;


 int VAR_0 ;
 long FUNC_0 (struct vo_x11_state*,int ) ;
 int VAR_1 ;
 int FUNC_1 (long*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct vo*,int,int,int ) ;
 int FUNC_3 (struct vo*) ;
 long* FUNC_4 (struct vo_x11_state*,int ,long,int ,int,int*) ;

__attribute__((used)) static void FUNC_5(struct vo *VAR_5)
{
    struct vo_x11_state *VAR_6 = VAR_5->x11;

    if (VAR_6->parent)
        return;

    if (VAR_6->wm_type & VAR_4) {
        int VAR_7;
        long *VAR_8 = FUNC_4(VAR_6, VAR_6->window, FUNC_0(VAR_6, VAR_2),
                                       VAR_1, 32, &VAR_7);
        int VAR_9 = 0;
        if (VAR_8) {
            Atom VAR_10 = FUNC_0(VAR_6, VAR_3);
            for (int VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
                if (VAR_8[VAR_11] == VAR_10) {
                    VAR_9 = 1;
                    break;
                }
            }
            FUNC_1(VAR_8);
        }

        if ((VAR_5->opts->fullscreen && !VAR_9) ||
            (!VAR_5->opts->fullscreen && VAR_9))
        {
            VAR_5->opts->fullscreen = VAR_9;
            VAR_6->fs = VAR_9;
            VAR_6->pending_vo_events |= VAR_0;

            if (!VAR_9 && (VAR_6->pos_changed_during_fs ||
                                   VAR_6->size_changed_during_fs))
            {
                FUNC_2(VAR_5, VAR_6->pos_changed_during_fs,
                                       VAR_6->size_changed_during_fs,
                                       VAR_6->nofsrc);
            }

            VAR_6->size_changed_during_fs = 0;
            VAR_6->pos_changed_during_fs = 0;

            FUNC_3(VAR_5);
        }
    }
}
