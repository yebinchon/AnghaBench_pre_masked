
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_x11_state {scalar_t__ parent; int rootwin; } ;
struct vo {TYPE_1__* opts; struct vo_x11_state* x11; } ;
typedef int Window ;
struct TYPE_2__ {scalar_t__ x11_netwm; } ;
typedef scalar_t__ Atom ;


 int FUNC_0 (struct vo_x11_state*,char*) ;
 int FUNC_1 (struct vo_x11_state*,char*) ;
 scalar_t__ FUNC_2 (struct vo_x11_state*,int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct vo_x11_state*,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* FUNC_5 (struct vo_x11_state*,int ,scalar_t__,int ,int,int*) ;

__attribute__((used)) static int FUNC_6(struct vo *VAR_6)
{
    struct vo_x11_state *VAR_7 = VAR_6->x11;
    int VAR_8;
    int VAR_9 = 0;
    int VAR_10;
    Atom *VAR_11 = ((void*)0);
    Window VAR_12 = VAR_7->rootwin;

    if (VAR_7->parent)
        return 0;


    VAR_11 = FUNC_5(VAR_7, VAR_12, FUNC_2(VAR_7, VAR_3), VAR_0, 32,
                            &VAR_10);
    if (VAR_11) {
        for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
            if (VAR_11[VAR_8] == FUNC_2(VAR_7, VAR_2)) {
                FUNC_0(VAR_7, "Detected wm supports layers.\n");
                VAR_9 |= VAR_5;
            }
        }
        FUNC_3(VAR_11);
    }

    VAR_11 = FUNC_5(VAR_7, VAR_12, FUNC_2(VAR_7, VAR_1), VAR_0, 32,
                            &VAR_10);
    if (VAR_11) {
        FUNC_0(VAR_7, "Detected wm supports NetWM.\n");
        if (VAR_6->opts->x11_netwm >= 0) {
            for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
                VAR_9 |= FUNC_4(VAR_6->x11, VAR_11[VAR_8]);
        } else {
            FUNC_0(VAR_7, "NetWM usage disabled by user.\n");
        }
        FUNC_3(VAR_11);
    }

    if (VAR_9 == 0)
        FUNC_0(VAR_7, "Unknown wm type...\n");
    if (VAR_6->opts->x11_netwm > 0 && !(VAR_9 & VAR_4)) {
        FUNC_1(VAR_7, "Forcing NetWM FULLSCREEN support.\n");
        VAR_9 |= VAR_4;
    }
    return VAR_9;
}
