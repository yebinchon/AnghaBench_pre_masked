
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {TYPE_1__* kms; } ;
struct TYPE_2__ {int fd; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct ra_ctx*) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_2)
{
    struct ra_ctx *VAR_3 = VAR_2;
    FUNC_0(VAR_3->vo, "Acquiring VT\n");
    if (VAR_0) {
        struct priv *VAR_4 = VAR_3->priv;
        if (FUNC_3(VAR_4->kms->fd)) {
            FUNC_1(VAR_3->vo, "Failed to acquire DRM master: %s\n",
                    FUNC_4(VAR_1));
        }
    }

    FUNC_2(VAR_3);
}
