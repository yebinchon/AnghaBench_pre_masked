
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ method; scalar_t__ source; } ;
struct xvctx {int xv_colorkey; int colorkey; TYPE_2__ xv_ck_info; int xv_port; } ;
struct vo {TYPE_1__* x11; struct xvctx* priv; } ;
struct TYPE_3__ {int * display; } ;
typedef int Display ;
typedef scalar_t__ Atom ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vo*,char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,int ,scalar_t__,int*) ;
 int FUNC_3 (int *,int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (struct vo*,char*) ;
 int FUNC_5 (struct vo*) ;

__attribute__((used)) static int FUNC_6(struct vo *VAR_8)
{
    struct xvctx *VAR_9 = VAR_8->priv;
    Display *VAR_10 = VAR_8->x11->display;
    Atom VAR_11;
    int VAR_12;


    VAR_11 = FUNC_4(VAR_8, "XV_COLORKEY");
    if (VAR_11 != VAR_6 && VAR_9->xv_ck_info.method != VAR_2) {
        if (VAR_9->xv_ck_info.source == VAR_3) {
            int VAR_13;

            VAR_12 = FUNC_2(VAR_10, VAR_9->xv_port, VAR_11,
                                     &VAR_13);
            if (VAR_12 == VAR_7)
                VAR_9->xv_colorkey = VAR_13;
            else {
                FUNC_0(VAR_8, "Couldn't get colorkey! "
                         "Maybe the selected Xv port has no overlay.\n");
                return 0;
            }
        } else {
            VAR_9->xv_colorkey = VAR_9->colorkey;


            if (VAR_9->xv_ck_info.source == VAR_4) {
                VAR_11 = FUNC_1(VAR_10, "XV_COLORKEY", VAR_5);

                VAR_12 = FUNC_3(VAR_10, VAR_9->xv_port, VAR_11,
                                         VAR_9->colorkey);
                if (VAR_12 != VAR_7) {
                    FUNC_0(VAR_8, "Couldn't set colorkey!\n");
                    return 0;
                }
            }
        }

        VAR_11 = FUNC_4(VAR_8, "XV_AUTOPAINT_COLORKEY");


        if (VAR_9->xv_ck_info.method == VAR_0) {
            VAR_12 = !VAR_7;

            if (VAR_11 != VAR_6)
                VAR_12 = FUNC_3(VAR_10, VAR_9->xv_port, VAR_11, 1);

            if (VAR_12 != VAR_7)
                VAR_9->xv_ck_info.method = VAR_1;
        } else {

            if (VAR_11 != VAR_6)
                FUNC_3(VAR_10, VAR_9->xv_port, VAR_11, 0);
        }
    } else {
        VAR_9->xv_ck_info.method = VAR_2;
        VAR_9->colorkey = 0xFF000000;
    }

    FUNC_5(VAR_8);

    return 1;
}
