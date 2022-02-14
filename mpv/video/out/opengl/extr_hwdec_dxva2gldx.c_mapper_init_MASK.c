
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_tex_params {int dimensions; int d; int render_src; int src_linear; int format; int h; int w; } ;
struct TYPE_6__ {scalar_t__ hw_subfmt; int imgfmt; int h; int w; } ;
struct ra_hwdec_mapper {TYPE_2__ dst_params; TYPE_2__ src_params; int * tex; int ra; struct priv* priv; TYPE_1__* owner; } ;
struct priv_owner {int device_h; int device; } ;
struct priv {int texture; int rtarget_h; int device_h; int rtarget; int device; } ;
struct TYPE_7__ {int (* DXLockObjectsNV ) (int ,int,int *) ;int (* DXRegisterObjectNV ) (int ,int ,int ,int ,int ) ;int (* BindTexture ) (int ,int ) ;int (* TexParameteri ) (int ,int ,int ) ;int (* GenTextures ) (int,int *) ;int (* DXSetResourceShareHandleNV ) (int ,int *) ;} ;
struct TYPE_5__ {struct priv_owner* priv; } ;
typedef int HRESULT ;
typedef int * HANDLE ;
typedef TYPE_3__ GL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int *,int **) ;
 int VAR_9 ;
 int FUNC_2 (struct ra_hwdec_mapper*,char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,struct ra_tex_params*,int ) ;
 int FUNC_6 (int ,int,int) ;
 TYPE_3__* FUNC_7 (int ) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int,int *) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct ra_hwdec_mapper *VAR_12)
{
    struct priv_owner *VAR_13 = VAR_12->owner->priv;
    struct priv *VAR_14 = VAR_12->priv;
    GL *VAR_15 = FUNC_7(VAR_12->ra);
    HRESULT VAR_16;

    VAR_14->device = VAR_13->device;
    VAR_14->device_h = VAR_13->device_h;

    HANDLE VAR_17 = ((void*)0);
    VAR_16 = FUNC_1(
        VAR_14->device,
        VAR_12->src_params.w, VAR_12->src_params.h,
        VAR_10, VAR_0, 0, VAR_1,
        &VAR_14->rtarget, &VAR_17);
    if (FUNC_0(VAR_16)) {
        FUNC_2(VAR_12, "Failed creating offscreen Direct3D surface: %s\n",
               FUNC_3(VAR_16));
        return -1;
    }

    if (VAR_17 &&
        !VAR_15->DXSetResourceShareHandleNV(VAR_14->rtarget, VAR_17)) {
        FUNC_2(VAR_12, "Failed setting Direct3D/OpenGL share handle for surface: %s\n",
               FUNC_4());
        return -1;
    }

    VAR_15->GenTextures(1, &VAR_14->texture);
    VAR_15->BindTexture(VAR_4, VAR_14->texture);
    VAR_15->TexParameteri(VAR_4, VAR_6, VAR_3);
    VAR_15->TexParameteri(VAR_4, VAR_5, VAR_3);
    VAR_15->TexParameteri(VAR_4, VAR_7, VAR_2);
    VAR_15->TexParameteri(VAR_4, VAR_8, VAR_2);
    VAR_15->BindTexture(VAR_4, 0);

    VAR_14->rtarget_h = VAR_15->DXRegisterObjectNV(VAR_14->device_h, VAR_14->rtarget, VAR_14->texture,
                                          VAR_4,
                                          VAR_11);
    if (!VAR_14->rtarget_h) {
        FUNC_2(VAR_12, "Failed to register Direct3D surface with OpenGL: %s\n",
               FUNC_4());
        return -1;
    }

    if (!VAR_15->DXLockObjectsNV(VAR_14->device_h, 1, &VAR_14->rtarget_h)) {
        FUNC_2(VAR_12, "Failed locking texture for access by OpenGL %s\n",
               FUNC_4());
        return -1;
    }

    struct ra_tex_params VAR_18 = {
        .dimensions = 2,
        .w = VAR_12->src_params.w,
        .h = VAR_12->src_params.h,
        .d = 1,
        .format = FUNC_6(VAR_12->ra, 1, 4),
        .render_src = 1,
        .src_linear = 1,
    };
    if (!VAR_18.format)
        return -1;

    VAR_12->tex[0] = FUNC_5(VAR_12->ra, &VAR_18, VAR_14->texture);
    if (!VAR_12->tex[0])
        return -1;

    VAR_12->dst_params = VAR_12->src_params;
    VAR_12->dst_params.imgfmt = VAR_9;
    VAR_12->dst_params.hw_subfmt = 0;

    return 0;
}
