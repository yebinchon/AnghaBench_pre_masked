
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int ev; TYPE_1__* kms; scalar_t__ waiting_for_flip; } ;
struct pollfd {int events; int revents; int fd; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (int ,char*,int const) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct pollfd*,int,int const) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;


    while (VAR_2->waiting_for_flip) {
        const int VAR_3 = 3000;
        struct pollfd VAR_4[1] = { { .events = VAR_0, .fd = VAR_2->kms->fd } };
        FUNC_2(VAR_4, 1, VAR_3);
        if (VAR_4[0].revents & VAR_0) {
            const int VAR_5 = FUNC_1(VAR_2->kms->fd, &VAR_2->ev);
            if (VAR_5 != 0) {
                FUNC_0(VAR_1->vo, "drmHandleEvent failed: %i\n", VAR_5);
                return;
            }
        }
    }
}
