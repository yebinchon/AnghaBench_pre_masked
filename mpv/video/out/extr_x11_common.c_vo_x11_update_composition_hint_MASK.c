
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_x11_state {int window; int display; int fs; } ;
struct vo {TYPE_1__* opts; struct vo_x11_state* x11; } ;
struct TYPE_2__ {int x11_bypass_compositor; } ;


 int VAR_0 ;
 int FUNC_0 (struct vo_x11_state*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ,int,int ,unsigned char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct vo *VAR_3)
{
    struct vo_x11_state *VAR_4 = VAR_3->x11;

    long VAR_5 = 0;
    switch (VAR_3->opts->x11_bypass_compositor) {
    case 0: VAR_5 = 0; break;
    case 1: VAR_5 = 1; break;
    case 2: VAR_5 = VAR_4->fs ? 1 : 0; break;
    case 3: VAR_5 = 2; break;
    }

    FUNC_1(VAR_4->display, VAR_4->window, FUNC_0(VAR_4,VAR_2),
                    VAR_1, 32, VAR_0, (unsigned char *)&VAR_5, 1);
}
