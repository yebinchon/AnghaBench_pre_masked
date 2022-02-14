
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_context {int dummy; } ;
struct nk_color {int dummy; } ;


 int FUNC_0 (struct rawfb_context const*,short,short,struct nk_color const) ;

__attribute__((used)) static void
FUNC_1(const struct rawfb_context *VAR_0,
    short VAR_1, short VAR_2, short VAR_3, short VAR_4, const short VAR_5,
    const short VAR_6, const struct nk_color VAR_7)
{

    const int VAR_8 = (VAR_3 * VAR_3) / 4;
    const int VAR_9 = (VAR_4 * VAR_4) / 4;
    const int VAR_10 = 4 * VAR_8, VAR_11 = 4 * VAR_9;
    int VAR_12, VAR_13, VAR_14;

    if (VAR_5 != 0 && VAR_5 != 90 && VAR_5 != 180 && VAR_5 != 270) return;
    if (VAR_3 < 1 || VAR_4 < 1) return;


    VAR_4 = (VAR_4 + 1) / 2;
    VAR_3 = (VAR_3 + 1) / 2;
    VAR_1 += VAR_3; VAR_2 += VAR_4;


    for (VAR_12 = 0, VAR_13 = VAR_4, VAR_14 = 2*VAR_9+VAR_8*(1-2*VAR_4); VAR_9*VAR_12 <= VAR_8*VAR_13; VAR_12++) {
        if (VAR_5 == 180)
            FUNC_0(VAR_0, VAR_1 + VAR_12, VAR_2 + VAR_13, VAR_7);
        else if (VAR_5 == 270)
            FUNC_0(VAR_0, VAR_1 - VAR_12, VAR_2 + VAR_13, VAR_7);
        else if (VAR_5 == 0)
            FUNC_0(VAR_0, VAR_1 + VAR_12, VAR_2 - VAR_13, VAR_7);
        else if (VAR_5 == 90)
            FUNC_0(VAR_0, VAR_1 - VAR_12, VAR_2 - VAR_13, VAR_7);
        if (VAR_14 >= 0) {
            VAR_14 += VAR_10 * (1 - VAR_13);
            VAR_13--;
        } VAR_14 += VAR_9 * ((4 * VAR_12) + 6);
    }


    for (VAR_12 = VAR_3, VAR_13 = 0, VAR_14 = 2*VAR_8+VAR_9*(1-2*VAR_3); VAR_8*VAR_13 <= VAR_9*VAR_12; VAR_13++) {
        if (VAR_5 == 180)
            FUNC_0(VAR_0, VAR_1 + VAR_12, VAR_2 + VAR_13, VAR_7);
        else if (VAR_5 == 270)
            FUNC_0(VAR_0, VAR_1 - VAR_12, VAR_2 + VAR_13, VAR_7);
        else if (VAR_5 == 0)
            FUNC_0(VAR_0, VAR_1 + VAR_12, VAR_2 - VAR_13, VAR_7);
        else if (VAR_5 == 90)
            FUNC_0(VAR_0, VAR_1 - VAR_12, VAR_2 - VAR_13, VAR_7);
        if (VAR_14 >= 0) {
            VAR_14 += VAR_11 * (1 - VAR_12);
            VAR_12--;
        } VAR_14 += VAR_8 * ((4 * VAR_13) + 6);
    }
}
