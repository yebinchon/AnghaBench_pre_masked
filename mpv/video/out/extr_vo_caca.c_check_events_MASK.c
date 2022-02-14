
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vo {int input_ctx; struct priv* priv; } ;
struct priv {int dither_color; int dither; int dither_charset; int dither_antialias; int dither_algo; int display; } ;
struct TYPE_7__ {int ch; } ;
struct TYPE_6__ {scalar_t__ button; int y; int x; } ;
struct TYPE_8__ {TYPE_2__ key; TYPE_1__ mouse; } ;
struct TYPE_9__ {int type; TYPE_3__ data; } ;
typedef TYPE_4__ caca_event_t ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_4__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_5 ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct vo*) ;
 int FUNC_14 (int ,int *,char const**) ;

__attribute__((used)) static void FUNC_15(struct vo *VAR_6)
{
    struct priv *VAR_7 = VAR_6->priv;

    caca_event_t VAR_8;
    while (FUNC_4(VAR_7->display, VAR_0, &VAR_8, 0)) {

        switch (VAR_8.type) {
        case 128:
            FUNC_5(VAR_7->display);
            FUNC_13(VAR_6);
            break;
        case 129:
            FUNC_11(VAR_6->input_ctx, VAR_1);
            break;
        case 132:
            FUNC_12(VAR_6->input_ctx, VAR_8.data.mouse.x, VAR_8.data.mouse.y);
            break;
        case 131:
            FUNC_11(VAR_6->input_ctx,
                    (VAR_4 + VAR_8.data.mouse.button - 1) | VAR_2);
            break;
        case 130:
            FUNC_11(VAR_6->input_ctx,
                    (VAR_4 + VAR_8.data.mouse.button - 1) | VAR_3);
            break;
        case 133:
        {
            int VAR_9 = VAR_8.data.key.ch;
            int VAR_10 = FUNC_10(VAR_5, VAR_9);
            const char *VAR_11;

            if (VAR_10)
                FUNC_11(VAR_6->input_ctx, VAR_10);
            else
            switch (VAR_9) {
            case 'd':
            case 'D':

                FUNC_14(FUNC_0(VAR_7->dither),
                             &VAR_7->dither_algo, &VAR_11);
                FUNC_6(VAR_7->dither, VAR_7->dither_algo);
                break;

            case 'a':
            case 'A':

                FUNC_14(FUNC_1(VAR_7->dither),
                             &VAR_7->dither_antialias, &VAR_11);
                FUNC_7(VAR_7->dither, VAR_7->dither_antialias);
                break;

            case 'h':
            case 'H':

                FUNC_14(FUNC_2(VAR_7->dither),
                             &VAR_7->dither_charset, &VAR_11);
                FUNC_8(VAR_7->dither, VAR_7->dither_charset);
                break;

            case 'c':
            case 'C':

                FUNC_14(FUNC_3(VAR_7->dither),
                             &VAR_7->dither_color, &VAR_11);
                FUNC_9(VAR_7->dither, VAR_7->dither_color);
                break;

            default:
                if (VAR_9 <= 255)
                    FUNC_11(VAR_6->input_ctx, VAR_9);
                break;
            }
        }
        }
    }
}
