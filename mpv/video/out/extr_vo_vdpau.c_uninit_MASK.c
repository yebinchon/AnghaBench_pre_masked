
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int hwdec_devs; struct vdpctx* priv; } ;
struct vdpctx {int video_mixer; TYPE_1__* mpvdp; } ;
struct TYPE_2__ {int hwctx; } ;


 int FUNC_0 (struct vo*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vo*) ;

__attribute__((used)) static void FUNC_5(struct vo *VAR_0)
{
    struct vdpctx *VAR_1 = VAR_0->priv;

    FUNC_2(VAR_0->hwdec_devs, &VAR_1->mpvdp->hwctx);
    FUNC_1(VAR_0->hwdec_devs);


    FUNC_3(VAR_1->video_mixer);
    FUNC_0(VAR_0);

    FUNC_4(VAR_0);
}
