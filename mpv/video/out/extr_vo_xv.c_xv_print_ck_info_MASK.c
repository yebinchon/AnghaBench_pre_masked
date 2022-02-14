
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int method; int source; } ;
struct xvctx {int xv_colorkey; TYPE_1__ xv_ck_info; } ;
struct vo {struct xvctx* priv; } ;
 int FUNC_0 (struct vo*,char*,...) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_0)
{
    struct xvctx *VAR_1 = VAR_0->priv;

    switch (VAR_1->xv_ck_info.method) {
    case 131:
        FUNC_0(VAR_0, "Drawing no colorkey.\n");
        return;
    case 134:
        FUNC_0(VAR_0, "Colorkey is drawn by Xv.\n");
        break;
    case 132:
        FUNC_0(VAR_0, "Drawing colorkey manually.\n");
        break;
    case 133:
        FUNC_0(VAR_0, "Colorkey is drawn as window background.\n");
        break;
    }

    switch (VAR_1->xv_ck_info.source) {
    case 130:
        FUNC_0(VAR_0, "Using colorkey from Xv (0x%06lx).\n", VAR_1->xv_colorkey);
        break;
    case 128:
        if (VAR_1->xv_ck_info.method == 134) {
            FUNC_0(VAR_0, "Ignoring colorkey from mpv (0x%06lx).\n",
                       VAR_1->xv_colorkey);
        } else {
            FUNC_0(VAR_0, "Using colorkey from mpv (0x%06lx). Use -colorkey to change.\n",
                       VAR_1->xv_colorkey);
        }
        break;
    case 129:
        FUNC_0(VAR_0, "Setting and using colorkey from mpv (0x%06lx)."
                   " Use -colorkey to change.\n", VAR_1->xv_colorkey);
        break;
    }
}
