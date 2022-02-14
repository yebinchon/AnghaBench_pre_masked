
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_hwdec {struct priv_owner* priv; } ;
struct priv_owner {TYPE_1__* ctx; } ;
struct TYPE_6__ {scalar_t__* valid_sw_formats; } ;
struct TYPE_5__ {int av_device_ref; } ;
typedef int AVVAAPIHWConfig ;
typedef TYPE_2__ AVHWFramesConstraints ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ra_hwdec*,char*) ;
 TYPE_2__* FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (struct ra_hwdec*,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ra_hwdec *VAR_1, AVVAAPIHWConfig *VAR_2)
{
    struct priv_owner *VAR_3 = VAR_1->priv;
    AVHWFramesConstraints *VAR_4 =
            FUNC_1(VAR_3->ctx->av_device_ref, VAR_2);
    if (!VAR_4) {
        FUNC_0(VAR_1, "failed to retrieve libavutil frame constraints\n");
        return;
    }
    for (int VAR_5 = 0; VAR_4->valid_sw_formats &&
                    VAR_4->valid_sw_formats[VAR_5] != VAR_0; VAR_5++)
        FUNC_3(VAR_1, VAR_4->valid_sw_formats[VAR_5]);
    FUNC_2(&VAR_4);
}
