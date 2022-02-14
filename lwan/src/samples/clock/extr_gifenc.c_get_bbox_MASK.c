
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int w; int h; scalar_t__* frame; scalar_t__* back; } ;
typedef TYPE_1__ ge_GIF ;



__attribute__((used)) static int
FUNC_0(ge_GIF *VAR_0, uint16_t *VAR_1, uint16_t *VAR_2, uint16_t *VAR_3, uint16_t *VAR_4)
{
    int VAR_5, VAR_6, VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11;

    VAR_8 = VAR_0->w;
    VAR_9 = 0;
    VAR_10 = VAR_0->h;
    VAR_11 = 0;
    VAR_7 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_0->h; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < VAR_0->w; VAR_6++, VAR_7++) {
            if (VAR_0->frame[VAR_7] != VAR_0->back[VAR_7]) {
                if (VAR_6 < VAR_8)
                    VAR_8 = VAR_6;
                if (VAR_6 > VAR_9)
                    VAR_9 = VAR_6;
                if (VAR_5 < VAR_10)
                    VAR_10 = VAR_5;
                if (VAR_5 > VAR_11)
                    VAR_11 = VAR_5;
            }
        }
    }

    if (VAR_8 != VAR_0->w && VAR_10 != VAR_0->h) {
        *VAR_3 = VAR_8;
        *VAR_4 = VAR_10;
        *VAR_1 = VAR_9 - VAR_8 + 1;
        *VAR_2 = VAR_11 - VAR_10 + 1;
        return 1;
    } else {
        return 0;
    }
}
