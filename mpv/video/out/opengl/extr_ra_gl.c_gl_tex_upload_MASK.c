
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ra_tex_upload_params {void* src; int stride; struct mp_rect* rc; scalar_t__ invalidate; scalar_t__ buf_offset; struct ra_buf* buf; struct ra_tex* tex; } ;
struct ra_tex_gl {int target; int type; int format; int internal_format; int texture; int pbo; } ;
struct TYPE_6__ {int host_mutable; int dimensions; int d; int h; int w; } ;
struct ra_tex {TYPE_1__ params; struct ra_tex_gl* priv; } ;
struct ra_buf_gl {int fence; int buffer; } ;
struct TYPE_7__ {scalar_t__ host_mapped; } ;
struct ra_buf {TYPE_2__ params; struct ra_buf_gl* priv; } ;
struct ra {scalar_t__ use_pbo; } ;
struct mp_rect {scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_8__ {int (* FenceSync ) (int ,int ) ;int (* DeleteSync ) (int ) ;int (* BindBuffer ) (int ,int ) ;int (* BindTexture ) (int ,int ) ;int (* PixelStorei ) (int ,int) ;int (* TexImage3D ) (int ,int ,int ,int ,int ,int ,int ,int ,int ,void const*) ;int (* TexImage1D ) (int ,int ,int ,int ,int ,int ,int ,void const*) ;int (* InvalidateTexImage ) (int ,int ) ;} ;
typedef TYPE_3__ GL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ,void const*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_3__* FUNC_2 (struct ra*) ;
 int FUNC_3 (struct ra*,int *,struct ra_tex_upload_params const*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ,int ,void const*) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ,int ,int ,int ,void const*) ;
 int FUNC_12 (int ,int) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static bool FUNC_15(struct ra *VAR_4,
                          const struct ra_tex_upload_params *VAR_5)
{
    GL *VAR_6 = FUNC_2(VAR_4);
    struct ra_tex *VAR_7 = VAR_5->tex;
    struct ra_buf *VAR_8 = VAR_5->buf;
    struct ra_tex_gl *VAR_9 = VAR_7->priv;
    struct ra_buf_gl *VAR_10 = VAR_8 ? VAR_8->priv : ((void*)0);
    FUNC_0(VAR_7->params.host_mutable);
    FUNC_0(!VAR_5->buf || !VAR_5->src);

    if (VAR_4->use_pbo && !VAR_5->buf)
        return FUNC_3(VAR_4, &VAR_9->pbo, VAR_5);

    const void *VAR_11 = VAR_5->src;
    if (VAR_8) {
        VAR_6->BindBuffer(VAR_0, VAR_10->buffer);
        VAR_11 = (void *)VAR_5->buf_offset;
    }

    VAR_6->BindTexture(VAR_9->target, VAR_9->texture);
    if (VAR_5->invalidate && VAR_6->InvalidateTexImage)
        VAR_6->InvalidateTexImage(VAR_9->texture, 0);

    switch (VAR_7->params.dimensions) {
    case 1:
        VAR_6->TexImage1D(VAR_9->target, 0, VAR_9->internal_format,
                       VAR_7->params.w, 0, VAR_9->format, VAR_9->type, VAR_11);
        break;
    case 2: {
        struct mp_rect VAR_12 = {0, 0, VAR_7->params.w, VAR_7->params.h};
        if (VAR_5->rc)
            VAR_12 = *VAR_5->rc;
        FUNC_1(VAR_6, VAR_9->target, VAR_9->format, VAR_9->type,
                      VAR_11, VAR_5->stride, VAR_12.x0, VAR_12.y0, VAR_12.x1 - VAR_12.x0,
                      VAR_12.y1 - VAR_12.y0);
        break;
    }
    case 3:
        VAR_6->PixelStorei(VAR_3, 1);
        VAR_6->TexImage3D(VAR_2, 0, VAR_9->internal_format, VAR_7->params.w,
                       VAR_7->params.h, VAR_7->params.d, 0, VAR_9->format,
                       VAR_9->type, VAR_11);
        VAR_6->PixelStorei(VAR_3, 4);
        break;
    }

    VAR_6->BindTexture(VAR_9->target, 0);

    if (VAR_8) {
        VAR_6->BindBuffer(VAR_0, 0);
        if (VAR_8->params.host_mapped) {



            VAR_6->DeleteSync(VAR_10->fence);
            VAR_10->fence = VAR_6->FenceSync(VAR_1, 0);
        }
    }

    return 1;
}
