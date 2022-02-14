
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
    const struct nk_color VAR_6)
{

    const int VAR_7 = (VAR_3 * VAR_3) / 4;
    const int VAR_8 = (VAR_4 * VAR_4) / 4;
    const int VAR_9 = 4 * VAR_7, VAR_10 = 4 * VAR_8;
    int VAR_11, VAR_12, VAR_13;


    VAR_4 = (VAR_4 + 1) / 2;
    VAR_3 = (VAR_3 + 1) / 2;
    VAR_1 += VAR_3;
    VAR_2 += VAR_4;


    for (VAR_11 = 0, VAR_12 = VAR_4, VAR_13 = 2*VAR_8+VAR_7*(1-2*VAR_4); VAR_8*VAR_11 <= VAR_7*VAR_12; VAR_11++) {
        FUNC_0(VAR_0, VAR_1 + VAR_11, VAR_2 + VAR_12, VAR_6);
        FUNC_0(VAR_0, VAR_1 - VAR_11, VAR_2 + VAR_12, VAR_6);
        FUNC_0(VAR_0, VAR_1 + VAR_11, VAR_2 - VAR_12, VAR_6);
        FUNC_0(VAR_0, VAR_1 - VAR_11, VAR_2 - VAR_12, VAR_6);
        if (VAR_13 >= 0) {
            VAR_13 += VAR_9 * (1 - VAR_12);
            VAR_12--;
        } VAR_13 += VAR_8 * ((4 * VAR_11) + 6);
    }

    for (VAR_11 = VAR_3, VAR_12 = 0, VAR_13 = 2*VAR_7+VAR_8*(1-2*VAR_3); VAR_7*VAR_12 <= VAR_8*VAR_11; VAR_12++) {
        FUNC_0(VAR_0, VAR_1 + VAR_11, VAR_2 + VAR_12, VAR_6);
        FUNC_0(VAR_0, VAR_1 - VAR_11, VAR_2 + VAR_12, VAR_6);
        FUNC_0(VAR_0, VAR_1 + VAR_11, VAR_2 - VAR_12, VAR_6);
        FUNC_0(VAR_0, VAR_1 - VAR_11, VAR_2 - VAR_12, VAR_6);
        if (VAR_13 >= 0) {
            VAR_13 += VAR_10 * (1 - VAR_11);
            VAR_11--;
        } VAR_13 += VAR_7 * ((4 * VAR_12) + 6);
    }
}
