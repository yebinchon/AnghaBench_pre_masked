
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_tex_params {int dimensions; int w; int h; int d; int render_src; int src_linear; int external_oes; int format; } ;
struct ra_hwdec_mapper {int * tex; int ra; TYPE_2__* src; struct priv* priv; TYPE_1__* owner; } ;
struct priv_owner {int egl_display; int (* StreamConsumerAcquireKHR ) (int ,int ) ;int (* StreamPostD3DTextureANGLE ) (int ,int ,void*,int*) ;} ;
struct priv {int * gl_textures; int egl_stream; } ;
struct TYPE_7__ {int Width; int Height; } ;
struct TYPE_6__ {scalar_t__* planes; } ;
struct TYPE_5__ {struct priv_owner* priv; } ;
typedef int ID3D11Texture2D ;
typedef int EGLAttrib ;
typedef TYPE_3__ D3D11_TEXTURE2D_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*) ;
 int FUNC_1 (int ,struct ra_tex_params*,int ) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ,void*,int*) ;
 int FUNC_4 (int ,int ,void*,int*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ra_hwdec_mapper *VAR_2)
{
    struct priv_owner *VAR_3 = VAR_2->owner->priv;
    struct priv *VAR_4 = VAR_2->priv;

    ID3D11Texture2D *VAR_5 = (void *)VAR_2->src->planes[0];
    int VAR_6 = (intptr_t)VAR_2->src->planes[1];
    if (!VAR_5)
        return -1;

    EGLAttrib VAR_7[] = {
        VAR_0, VAR_6,
        VAR_1,
    };
    if (!VAR_3->StreamPostD3DTextureANGLE(VAR_3->egl_display, VAR_4->egl_stream,
                                      (void *)VAR_5, VAR_7))
    {

        VAR_7[0] = VAR_7[0] == 0x33AB ? 0x3AAB : 0x33AB;
        if (!VAR_3->StreamPostD3DTextureANGLE(VAR_3->egl_display, VAR_4->egl_stream,
                                              (void *)VAR_5, VAR_7))
            return -1;
    }

    if (!VAR_3->StreamConsumerAcquireKHR(VAR_3->egl_display, VAR_4->egl_stream))
        return -1;

    D3D11_TEXTURE2D_DESC VAR_8;
    FUNC_0(VAR_5, &VAR_8);

    for (int VAR_9 = 0; VAR_9 < 2; VAR_9++) {
        struct ra_tex_params VAR_10 = {
            .dimensions = 2,
            .w = VAR_8.Width / (VAR_9 ? 2 : 1),
            .h = VAR_8.Height / (VAR_9 ? 2 : 1),
            .d = 1,
            .format = FUNC_2(VAR_2->ra, 1, VAR_9 ? 2 : 1),
            .render_src = 1,
            .src_linear = 1,
            .external_oes = 1,
        };
        if (!VAR_10.format)
            return -1;

        VAR_2->tex[VAR_9] = FUNC_1(VAR_2->ra, &VAR_10,
                                               VAR_4->gl_textures[VAR_9]);
        if (!VAR_2->tex[VAR_9])
            return -1;
    }

    return 0;
}
