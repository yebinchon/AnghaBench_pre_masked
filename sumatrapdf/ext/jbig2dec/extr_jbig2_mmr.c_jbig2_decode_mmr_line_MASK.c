
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int byte ;
struct TYPE_5__ {int word; int width; } ;
typedef TYPE_1__ Jbig2MmrCtx ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int ,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int ,int,char*) ;
 int FUNC_3 (int const*,int,int) ;
 int FUNC_4 (int const*,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int *,int,int) ;

__attribute__((used)) static int
FUNC_6(Jbig2Ctx *VAR_4, Jbig2MmrCtx *VAR_5, const byte *VAR_6, byte *VAR_7, int *VAR_8)
{
    uint32_t VAR_9 = VAR_1;
    uint32_t VAR_10, VAR_11, VAR_12, VAR_13;
    int VAR_14 = 0;

    while (1) {
        uint32_t VAR_15 = VAR_5->word;



        if (VAR_9 != VAR_1 && VAR_9 >= VAR_5->width)
            break;

        if ((VAR_15 >> (32 - 3)) == 1) {
            int VAR_16, VAR_17;

            FUNC_1(VAR_5, 3);

            if (VAR_9 == VAR_1)
                VAR_9 = 0;

            if (VAR_14 == 0) {
                VAR_16 = FUNC_0(VAR_4, VAR_5, VAR_3, 8);
                if (VAR_16 < 0)
                    return FUNC_2(VAR_4, VAR_0, -1, "failed to decode white H run");
                VAR_17 = FUNC_0(VAR_4, VAR_5, VAR_2, 7);
                if (VAR_17 < 0)
                    return FUNC_2(VAR_4, VAR_0, -1, "failed to decode black H run");

                VAR_10 = VAR_9 + VAR_16;
                VAR_11 = VAR_10 + VAR_17;
                if (VAR_10 > VAR_5->width)
                    VAR_10 = VAR_5->width;
                if (VAR_11 > VAR_5->width)
                    VAR_11 = VAR_5->width;
                if (VAR_11 < VAR_10) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative black H run");
                    VAR_11 = VAR_10;
                }
                if (VAR_10 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_10, VAR_11);
                VAR_9 = VAR_11;
            } else {
                VAR_17 = FUNC_0(VAR_4, VAR_5, VAR_2, 7);
                if (VAR_17 < 0)
                    return FUNC_2(VAR_4, VAR_0, -1, "failed to decode black H run");
                VAR_16 = FUNC_0(VAR_4, VAR_5, VAR_3, 8);
                if (VAR_16 < 0)
                    return FUNC_2(VAR_4, VAR_0, -1, "failed to decode white H run");

                VAR_10 = VAR_9 + VAR_17;
                VAR_11 = VAR_10 + VAR_16;
                if (VAR_10 > VAR_5->width)
                    VAR_10 = VAR_5->width;
                if (VAR_11 > VAR_5->width)
                    VAR_11 = VAR_5->width;
                if (VAR_10 < VAR_9) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative white H run");
                    VAR_10 = VAR_9;
                }
                if (VAR_9 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_9, VAR_10);
                VAR_9 = VAR_11;
            }
        }

        else if ((VAR_15 >> (32 - 4)) == 1) {

            FUNC_1(VAR_5, 4);
            VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_5->width, !VAR_14);
            VAR_13 = FUNC_3(VAR_6, VAR_12, VAR_5->width);
            if (VAR_14) {
                if (VAR_13 < VAR_9) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative P run");
                    VAR_13 = VAR_9;
                }
                if (VAR_9 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_9, VAR_13);
            }
            VAR_9 = VAR_13;
        }

        else if ((VAR_15 >> (32 - 1)) == 1) {

            FUNC_1(VAR_5, 1);
            VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_5->width, !VAR_14);
            if (VAR_14) {
                if (VAR_12 < VAR_9) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative V(0) run");
                    VAR_12 = VAR_9;
                }
                if (VAR_9 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_9, VAR_12);
            }
            VAR_9 = VAR_12;
            VAR_14 = !VAR_14;
        }

        else if ((VAR_15 >> (32 - 3)) == 3) {

            FUNC_1(VAR_5, 3);
            VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_5->width, !VAR_14);
            if (VAR_12 + 1 <= VAR_5->width)
                VAR_12 += 1;
            if (VAR_14) {
                if (VAR_12 < VAR_9) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative VR(1) run");
                    VAR_12 = VAR_9;
                }
                if (VAR_9 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_9, VAR_12);
            }
            VAR_9 = VAR_12;
            VAR_14 = !VAR_14;
        }

        else if ((VAR_15 >> (32 - 6)) == 3) {

            FUNC_1(VAR_5, 6);
            VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_5->width, !VAR_14);
            if (VAR_12 + 2 <= VAR_5->width)
                VAR_12 += 2;
            if (VAR_14) {
                if (VAR_12 < VAR_9) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative VR(2) run");
                    VAR_12 = VAR_9;
                }
                if (VAR_9 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_9, VAR_12);
            }
            VAR_9 = VAR_12;
            VAR_14 = !VAR_14;
        }

        else if ((VAR_15 >> (32 - 7)) == 3) {

            FUNC_1(VAR_5, 7);
            VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_5->width, !VAR_14);
            if (VAR_12 + 3 <= VAR_5->width)
                VAR_12 += 3;
            if (VAR_14) {
                if (VAR_12 < VAR_9) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative VR(3) run");
                    VAR_12 = VAR_9;
                }
                if (VAR_9 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_9, VAR_12);
            }
            VAR_9 = VAR_12;
            VAR_14 = !VAR_14;
        }

        else if ((VAR_15 >> (32 - 3)) == 2) {

            FUNC_1(VAR_5, 3);
            VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_5->width, !VAR_14);
            if (VAR_12 >= 1)
                VAR_12 -= 1;
            if (VAR_14) {
                if (VAR_12 < VAR_9) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative VL(1) run");
                    VAR_12 = VAR_9;
                }
                if (VAR_9 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_9, VAR_12);
            }
            VAR_9 = VAR_12;
            VAR_14 = !VAR_14;
        }

        else if ((VAR_15 >> (32 - 6)) == 2) {

            FUNC_1(VAR_5, 6);
            VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_5->width, !VAR_14);
            if (VAR_12 >= 2)
                VAR_12 -= 2;
            if (VAR_14) {
                if (VAR_12 < VAR_9) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative VL(2) run");
                    VAR_12 = VAR_9;
                }
                if (VAR_9 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_9, VAR_12);
            }
            VAR_9 = VAR_12;
            VAR_14 = !VAR_14;
        }

        else if ((VAR_15 >> (32 - 7)) == 2) {

            FUNC_1(VAR_5, 7);
            VAR_12 = FUNC_4(VAR_6, VAR_9, VAR_5->width, !VAR_14);
            if (VAR_12 >= 3)
                VAR_12 -= 3;
            if (VAR_14) {
                if (VAR_12 < VAR_9) {
                    FUNC_2(VAR_4, VAR_0, -1, "ignoring negative VL(3) run");
                    VAR_12 = VAR_9;
                }
                if (VAR_9 < VAR_5->width)
                    FUNC_5(VAR_7, VAR_9, VAR_12);
            }
            VAR_9 = VAR_12;
            VAR_14 = !VAR_14;
        }

        else if ((VAR_15 >> (32 - 24)) == 0x1001) {

            FUNC_1(VAR_5, 24);
            *VAR_8 = 1;
            break;
        }

        else
            break;
    }

    return 0;
}
