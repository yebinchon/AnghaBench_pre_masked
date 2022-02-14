
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vo_x11_state {int window; int display; scalar_t__ parent; } ;
struct vo {struct vo_x11_state* x11; } ;
typedef int mhints ;
struct TYPE_3__ {int functions; int decorations; int flags; int member_0; } ;
typedef TYPE_1__ MotifWmHints ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct vo_x11_state*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 int VAR_9 ;
 int FUNC_2 (struct vo_x11_state*,int ,int ,int ,int,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct vo *VAR_10, bool VAR_11)
{
    struct vo_x11_state *VAR_12 = VAR_10->x11;

    if (VAR_12->parent || !VAR_12->window)
        return;

    Atom VAR_13 = FUNC_0(VAR_12, VAR_9);
    MotifWmHints VAR_14 = {0};
    bool VAR_15 = FUNC_2(VAR_12, VAR_12->window, VAR_13,
                                     VAR_13, 32, &VAR_14, sizeof(VAR_14));

    if (!VAR_15 && VAR_11)
        return;
    if (!VAR_15) {
        VAR_14.flags = VAR_7;
        VAR_14.functions = VAR_4 | VAR_1 | VAR_3 |
                           VAR_2 | VAR_5;
    }
    VAR_14.flags |= VAR_6;
    VAR_14.decorations = VAR_11 ? VAR_0 : 0;
    FUNC_1(VAR_12->display, VAR_12->window, VAR_13, VAR_13, 32,
                    VAR_8, (unsigned char *) &VAR_14, 5);
}
