
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ method; } ;
struct xvctx {scalar_t__ image_height; scalar_t__ image_width; scalar_t__ max_width; scalar_t__ max_height; scalar_t__ xv_format; int formats; int num_buffers; int cfg_buffers; int xv_port; scalar_t__ current_ip_buf; scalar_t__ current_buf; int xv_colorkey; TYPE_2__ xv_ck_info; void* f_gc; void* vo_gc; TYPE_1__* fo; int image_format; int original_image; } ;
struct vo_x11_state {int window; int display; } ;
struct vo {struct xvctx* priv; struct vo_x11_state* x11; } ;
struct TYPE_6__ {scalar_t__ space; } ;
struct mp_image_params {scalar_t__ h; scalar_t__ w; TYPE_3__ color; int imgfmt; } ;
struct TYPE_4__ {scalar_t__ id; scalar_t__ format; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vo*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct vo*,char*) ;
 int FUNC_2 (struct vo*,char*,scalar_t__,...) ;
 void* FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,void*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (struct vo*,int) ;
 int FUNC_7 (struct vo*,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct vo*) ;
 int FUNC_11 (struct vo*) ;
 int FUNC_12 (struct vo*) ;
 int FUNC_13 (struct vo*,int ,char*,int) ;

__attribute__((used)) static int FUNC_14(struct vo *VAR_3, struct mp_image_params *VAR_4)
{
    struct vo_x11_state *VAR_5 = VAR_3->x11;
    struct xvctx *VAR_6 = VAR_3->priv;
    int VAR_7;

    FUNC_9(&VAR_6->original_image);

    VAR_6->image_height = VAR_4->h;
    VAR_6->image_width = VAR_4->w;
    VAR_6->image_format = VAR_4->imgfmt;

    if ((VAR_6->max_width != 0 && VAR_6->max_height != 0)
        && (VAR_6->image_width > VAR_6->max_width
            || VAR_6->image_height > VAR_6->max_height)) {
        FUNC_0(VAR_3, "Source image dimensions are too high: %ux%u (maximum is %ux%u)\n",
               VAR_6->image_width, VAR_6->image_height, VAR_6->max_width,
               VAR_6->max_height);
        return -1;
    }


    VAR_6->xv_format = 0;
    for (VAR_7 = 0; VAR_7 < VAR_6->formats; VAR_7++) {
        FUNC_2(VAR_3, "Xvideo image format: 0x%x (%4.4s) %s\n",
                   VAR_6->fo[VAR_7].id, (char *) &VAR_6->fo[VAR_7].id,
                   (VAR_6->fo[VAR_7].format == VAR_2) ? "packed" : "planar");
        if (VAR_6->fo[VAR_7].id == FUNC_8(VAR_6->image_format))
            VAR_6->xv_format = VAR_6->fo[VAR_7].id;
    }
    if (!VAR_6->xv_format)
        return -1;

    FUNC_12(VAR_3);

    if (!VAR_6->f_gc && !VAR_6->vo_gc) {
        VAR_6->f_gc = FUNC_3(VAR_5->display, VAR_5->window, 0, 0);
        VAR_6->vo_gc = FUNC_3(VAR_5->display, VAR_5->window, 0, ((void*)0));
        FUNC_4(VAR_5->display, VAR_6->f_gc, 0);
    }

    if (VAR_6->xv_ck_info.method == VAR_0)
        FUNC_5(VAR_5->display, VAR_5->window, VAR_6->xv_colorkey);

    FUNC_2(VAR_3, "using Xvideo port %d for hw scaling\n", VAR_6->xv_port);


    for (VAR_7 = 0; VAR_7 < VAR_6->num_buffers; VAR_7++)
        FUNC_7(VAR_3, VAR_7);

    VAR_6->num_buffers = VAR_6->cfg_buffers;

    for (VAR_7 = 0; VAR_7 < VAR_6->num_buffers; VAR_7++) {
        if (!FUNC_6(VAR_3, VAR_7)) {
            FUNC_1(VAR_3, "could not allocate Xv image data\n");
            return -1;
        }
    }

    VAR_6->current_buf = 0;
    VAR_6->current_ip_buf = 0;

    int VAR_8 = VAR_4->color.space == VAR_1;
    FUNC_13(VAR_3, VAR_6->xv_port, "bt_709", VAR_8 * 200 - 100);
    FUNC_10(VAR_3);

    FUNC_11(VAR_3);

    return 0;
}
