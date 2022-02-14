
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rawfb_context {int dummy; } ;
struct nk_vec2i {int x; int y; } ;
struct nk_color {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rawfb_context const*,int,int,struct nk_color const) ;

__attribute__((used)) static void
FUNC_1(const struct rawfb_context *VAR_1,
    const struct nk_vec2i *VAR_2, int VAR_3, const struct nk_color VAR_4)
{
    int VAR_5 = 0;

    int VAR_6 = 10000, VAR_7 = 10000, VAR_8 = 0, VAR_9 = 0;
    int VAR_10, VAR_11[64], VAR_12, VAR_13, VAR_14, VAR_15 ;

    if (VAR_3 == 0) return;
    if (VAR_3 > 64)
        VAR_3 = 64;


    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        if (VAR_6 > VAR_2[VAR_5].x)
            VAR_6 = VAR_2[VAR_5].x;
        if (VAR_9 < VAR_2[VAR_5].x)
            VAR_9 = VAR_2[VAR_5].x;
        if (VAR_7 > VAR_2[VAR_5].y)
            VAR_7 = VAR_2[VAR_5].y;
        if (VAR_8 < VAR_2[VAR_5].y)
            VAR_8 = VAR_2[VAR_5].y;
    } VAR_8++; VAR_9++;



    for (VAR_13 = VAR_7; VAR_13 < VAR_8; VAR_13 ++) {
        VAR_10 = 0;
        VAR_14 = VAR_3 - 1;
        for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
            if (((VAR_2[VAR_5].y < VAR_13) && (VAR_2[VAR_14].y >= VAR_13)) ||
                ((VAR_2[VAR_14].y < VAR_13) && (VAR_2[VAR_5].y >= VAR_13))) {
                VAR_11[VAR_10++]= (int)((float)VAR_2[VAR_5].x
                     + ((float)VAR_13 - (float)VAR_2[VAR_5].y) / ((float)VAR_2[VAR_14].y - (float)VAR_2[VAR_5].y)
                     * ((float)VAR_2[VAR_14].x - (float)VAR_2[VAR_5].x));
            } VAR_14 = VAR_5;
        }


        VAR_5 = 0;
        while (VAR_5 < VAR_10 - 1) {
            if (VAR_11[VAR_5] > VAR_11[VAR_5+1]) {
                VAR_15 = VAR_11[VAR_5];
                VAR_11[VAR_5] = VAR_11[VAR_5+1];
                VAR_11[VAR_5+1] = VAR_15;
                if (VAR_5) VAR_5--;
            } else VAR_5++;
        }

        for (VAR_5 = 0; VAR_5 < VAR_10; VAR_5 += 2) {
            if (VAR_11[VAR_5+0] >= VAR_9) break;
            if (VAR_11[VAR_5+1] > VAR_6) {
                if (VAR_11[VAR_5+0] < VAR_6) VAR_11[VAR_5+0] = VAR_6 ;
                if (VAR_11[VAR_5+1] > VAR_9) VAR_11[VAR_5+1] = VAR_9;
                for (VAR_12 = VAR_11[VAR_5]; VAR_12 < VAR_11[VAR_5 + 1]; VAR_12++)
                    FUNC_0(VAR_1, VAR_12, VAR_13, VAR_4);
            }
        }
    }

}
