
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {short h; short y; int x; int w; } ;
struct rawfb_context {TYPE_1__ scissors; } ;
struct nk_color {int dummy; } ;


 short FUNC_0 (int ,short) ;
 short FUNC_1 (int ,short) ;
 int FUNC_2 (struct rawfb_context const*,short,short,struct nk_color const) ;
 int FUNC_3 (struct rawfb_context const*,short,short,short,struct nk_color const) ;

__attribute__((used)) static void
FUNC_4(const struct rawfb_context *VAR_0,
    short VAR_1, short VAR_2, short VAR_3, short VAR_4,
    const unsigned int VAR_5, const struct nk_color VAR_6)
{
    short VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11;

    VAR_8 = VAR_4 - VAR_2;
    VAR_9 = VAR_3 - VAR_1;


    if (VAR_8 == 0) {
        if (VAR_9 == 0 || VAR_2 >= VAR_0->scissors.h || VAR_2 < VAR_0->scissors.y)
            return;

        if (VAR_9 < 0) {

            VAR_7 = VAR_3;
            VAR_3 = VAR_1;
            VAR_1 = VAR_7;
        }
        VAR_3 = FUNC_1(VAR_0->scissors.w, VAR_3);
        VAR_1 = FUNC_1(VAR_0->scissors.w, VAR_1);
        VAR_3 = FUNC_0(VAR_0->scissors.x, VAR_3);
        VAR_1 = FUNC_0(VAR_0->scissors.x, VAR_1);
        FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_6);
        return;
    }
    if (VAR_8 < 0) {
        VAR_8 = -VAR_8;
        VAR_11 = -1;
    } else VAR_11 = 1;

    if (VAR_9 < 0) {
        VAR_9 = -VAR_9;
        VAR_10 = -1;
    } else VAR_10 = 1;

    VAR_8 <<= 1;
    VAR_9 <<= 1;

    FUNC_2(VAR_0, VAR_1, VAR_2, VAR_6);
    if (VAR_9 > VAR_8) {
        int VAR_12 = VAR_8 - (VAR_9 >> 1);
        while (VAR_1 != VAR_3) {
            if (VAR_12 >= 0) {
                VAR_2 += VAR_11;
                VAR_12 -= VAR_9;
            }
            VAR_1 += VAR_10;
            VAR_12 += VAR_8;
            FUNC_2(VAR_0, VAR_1, VAR_2, VAR_6);
        }
    } else {
        int VAR_13 = VAR_9 - (VAR_8 >> 1);
        while (VAR_2 != VAR_4) {
            if (VAR_13 >= 0) {
                VAR_1 += VAR_10;
                VAR_13 -= VAR_8;
            }
            VAR_2 += VAR_11;
            VAR_13 += VAR_9;
            FUNC_2(VAR_0, VAR_1, VAR_2, VAR_6);
        }
    }
}
