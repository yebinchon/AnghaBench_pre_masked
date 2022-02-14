
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xvctx {int cfg_xv_adaptor; unsigned int adaptors; scalar_t__ xv_port; int formats; int fo; int max_height; int max_width; TYPE_1__* ai; } ;
struct vo_x11_state {int display; } ;
struct vo {struct vo_x11_state* x11; struct xvctx* priv; } ;
typedef scalar_t__ XvPortID ;
struct TYPE_2__ {int type; scalar_t__ base_id; scalar_t__ num_ports; int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct vo*,char*) ;
 int FUNC_2 (struct vo*,char*,unsigned int,int ) ;
 int FUNC_3 (struct vo*,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,scalar_t__,int*) ;
 scalar_t__ FUNC_6 (int ,int ,unsigned int*,TYPE_1__**) ;
 scalar_t__ FUNC_7 (int ,unsigned int*,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 int FUNC_8 (struct vo*) ;
 int FUNC_9 (struct vo*,int *,char*) ;
 int FUNC_10 (struct vo*) ;
 int FUNC_11 (struct vo*) ;
 int FUNC_12 (struct vo*,int *,int *) ;
 int FUNC_13 (struct vo*) ;

__attribute__((used)) static int FUNC_14(struct vo *VAR_4)
{
    XvPortID VAR_5;
    int VAR_6 = 0;
    unsigned int VAR_7;
    struct xvctx *VAR_8 = VAR_4->priv;
    int VAR_9 = VAR_8->cfg_xv_adaptor;

    if (!FUNC_10(VAR_4))
        return -1;

    if (!FUNC_9(VAR_4, ((void*)0), "xv"))
        goto error;

    struct vo_x11_state *VAR_10 = VAR_4->x11;


    unsigned int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
    if (VAR_1 != FUNC_7(VAR_10->display, &VAR_11, &VAR_12, &VAR_13, &VAR_14, &VAR_15)) {
        FUNC_1(VAR_4, "Xv not supported by this X11 version/driver\n");
        goto error;
    }


    if (VAR_1 !=
        FUNC_6(VAR_10->display, FUNC_0(VAR_10->display),
                        &VAR_8->adaptors, &VAR_8->ai)) {
        FUNC_1(VAR_4, "XvQueryAdaptors failed.\n");
        goto error;
    }


    if (VAR_8->xv_port) {
        int VAR_16;

        for (VAR_16 = 0, VAR_7 = 0; !VAR_16 && VAR_7 < VAR_8->adaptors; VAR_7++) {
            if ((VAR_8->ai[VAR_7].type & VAR_3)
                && (VAR_8->ai[VAR_7].type & VAR_2)) {
                for (VAR_5 = VAR_8->ai[VAR_7].base_id;
                     VAR_5 < VAR_8->ai[VAR_7].base_id + VAR_8->ai[VAR_7].num_ports;
                     ++VAR_5) {
                    if (VAR_5 == VAR_8->xv_port) {
                        VAR_16 = 1;
                        break;
                    }
                }
            }
        }
        if (VAR_16) {
            if (FUNC_4(VAR_10->display, VAR_8->xv_port, VAR_0))
                VAR_8->xv_port = 0;
        } else {
            FUNC_3(VAR_4, "Invalid port parameter, overriding with port 0.\n");
            VAR_8->xv_port = 0;
        }
    }

    for (VAR_7 = 0; VAR_7 < VAR_8->adaptors && VAR_8->xv_port == 0; VAR_7++) {

        if (VAR_9 != -1 && VAR_9 != VAR_7)
            continue;

        if ((VAR_8->ai[VAR_7].type & VAR_3) && (VAR_8->ai[VAR_7].type & VAR_2)) {
            for (VAR_5 = VAR_8->ai[VAR_7].base_id;
                 VAR_5 < VAR_8->ai[VAR_7].base_id + VAR_8->ai[VAR_7].num_ports; ++VAR_5)
                if (!FUNC_4(VAR_10->display, VAR_5, VAR_0)) {
                    VAR_8->xv_port = VAR_5;
                    FUNC_2(VAR_4, "Using Xv Adapter #%d (%s)\n",
                               VAR_7, VAR_8->ai[VAR_7].name);
                    break;
                } else {
                    FUNC_3(VAR_4, "Could not grab port %i.\n", (int) VAR_5);
                    ++VAR_6;
                }
        }
    }
    if (!VAR_8->xv_port) {
        if (VAR_6)
            FUNC_1(VAR_4, "Xvideo ports busy.\n");
        else
            FUNC_1(VAR_4, "No Xvideo support found.\n");
        goto error;
    }

    if (!FUNC_13(VAR_4)) {
        goto error;
    }
    FUNC_11(VAR_4);
    FUNC_12(VAR_4, &VAR_8->max_width, &VAR_8->max_height);

    VAR_8->fo = FUNC_5(VAR_10->display, VAR_8->xv_port,
                                 (int *) &VAR_8->formats);

    FUNC_3(VAR_4, "Warning: this legacy VO has bad quality and performance, "
                "and will in particular result in blurry OSD and subtitles. "
                "You should fix your graphics drivers, or not force the xv VO.\n");
    return 0;

  error:
    FUNC_8(VAR_4);
    return -1;
}
