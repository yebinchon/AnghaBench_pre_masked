
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ cur_backbuf_width; scalar_t__ cur_backbuf_height; TYPE_1__* vo; int d3d_device; int image_format; scalar_t__ opt_exact_backbuffer; } ;
typedef TYPE_2__ d3d_priv ;
struct TYPE_14__ {scalar_t__ member_2; scalar_t__ member_3; int member_5; scalar_t__ Height; scalar_t__ Width; int member_4; int member_1; int member_0; } ;
struct TYPE_12__ {scalar_t__ dwidth; scalar_t__ dheight; int want_redraw; } ;
typedef TYPE_3__ D3DVIEWPORT9 ;
typedef int D3DMATRIX ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,float,scalar_t__,scalar_t__,float) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static bool FUNC_10(d3d_priv *VAR_1)
{
    D3DVIEWPORT9 VAR_2 = {0, 0, VAR_1->vo->dwidth, VAR_1->vo->dheight, 0, 1};

    FUNC_4(VAR_1, "resize_d3d %dx%d called.\n",
               VAR_1->vo->dwidth, VAR_1->vo->dheight);




    bool VAR_3 = VAR_1->vo->dwidth > VAR_1->cur_backbuf_width ||
                          VAR_1->vo->dheight > VAR_1->cur_backbuf_height;

    if (VAR_1->opt_exact_backbuffer) {
        VAR_3 = VAR_1->vo->dwidth != VAR_1->cur_backbuf_width ||
                         VAR_1->vo->dheight != VAR_1->cur_backbuf_height;
    }

    if (VAR_3 || !VAR_1->d3d_device)
    {
        FUNC_9(VAR_1);
        if (!FUNC_6(VAR_1))
            return 0;
    }

    if (!VAR_1->d3d_device || !VAR_1->image_format)
        return 1;

    if (!FUNC_7(VAR_1))
        return 0;

    if (FUNC_0(FUNC_2(VAR_1->d3d_device, &VAR_2))) {
        FUNC_3(VAR_1, "Setting viewport failed.\n");
        return 0;
    }


    D3DMATRIX VAR_4;
    FUNC_8(&VAR_4, 0.5f, VAR_2.Width + 0.5f, VAR_2.Height + 0.5f, 0.5f);
    FUNC_1(VAR_1->d3d_device, VAR_0, &VAR_4);

    FUNC_5(VAR_1);
    VAR_1->vo->want_redraw = 1;

    return 1;
}
