
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_hwdec {struct priv* priv; } ;
struct priv {TYPE_1__* ctx; } ;
typedef scalar_t__ drmModeAtomicReqPtr ;
struct TYPE_2__ {int fd; int drmprime_video_plane; } ;


 int VAR_0 ;
 int FUNC_0 (struct ra_hwdec*,char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__,int ,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int ,char*,int ) ;

__attribute__((used)) static void FUNC_5(struct ra_hwdec *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    if (!VAR_2->ctx)
        return;

    if (!VAR_2->ctx->drmprime_video_plane)
        return;





    drmModeAtomicReqPtr VAR_3 = FUNC_1();
    if (VAR_3) {
        FUNC_4(VAR_3, VAR_2->ctx->drmprime_video_plane, "FB_ID", 0);
        FUNC_4(VAR_3, VAR_2->ctx->drmprime_video_plane, "CRTC_ID", 0);

        int VAR_4 = FUNC_2(VAR_2->ctx->fd, VAR_3,
                                  VAR_0, ((void*)0));

        if (VAR_4)
            FUNC_0(VAR_1, "Failed to commit disable plane request (code %d)", VAR_4);
        FUNC_3(VAR_3);
    }
}
