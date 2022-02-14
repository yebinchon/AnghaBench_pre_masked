
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int const ge_p3 ;
typedef int ge_p2 ;
typedef int ge_p1p1 ;
typedef int ge_cached ;


 int * VAR_0 ;
 int FUNC_0 (int *,int const*,int *) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,int const*,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int const*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (int *,int const*) ;
 int FUNC_9 (int *,int const*,int *) ;
 int FUNC_10 (char*,int const*) ;

__attribute__((used)) static void FUNC_11(ge_p2 *VAR_1, const uint8_t *VAR_2,
                                         const ge_p3 *VAR_3, const uint8_t *VAR_4)
{
    signed char VAR_5[256];
    signed char VAR_6[256];
    ge_cached VAR_7[8];
    ge_p1p1 VAR_8;
    ge_p3 VAR_9;
    ge_p3 VAR_10;
    int VAR_11;

    FUNC_10(VAR_5, VAR_2);
    FUNC_10(VAR_6, VAR_4);

    FUNC_8(&VAR_7[0], VAR_3);
    FUNC_7(&VAR_8, VAR_3);
    FUNC_4(&VAR_10, &VAR_8);
    FUNC_0(&VAR_8, &VAR_10, &VAR_7[0]);
    FUNC_4(&VAR_9, &VAR_8);
    FUNC_8(&VAR_7[1], &VAR_9);
    FUNC_0(&VAR_8, &VAR_10, &VAR_7[1]);
    FUNC_4(&VAR_9, &VAR_8);
    FUNC_8(&VAR_7[2], &VAR_9);
    FUNC_0(&VAR_8, &VAR_10, &VAR_7[2]);
    FUNC_4(&VAR_9, &VAR_8);
    FUNC_8(&VAR_7[3], &VAR_9);
    FUNC_0(&VAR_8, &VAR_10, &VAR_7[3]);
    FUNC_4(&VAR_9, &VAR_8);
    FUNC_8(&VAR_7[4], &VAR_9);
    FUNC_0(&VAR_8, &VAR_10, &VAR_7[4]);
    FUNC_4(&VAR_9, &VAR_8);
    FUNC_8(&VAR_7[5], &VAR_9);
    FUNC_0(&VAR_8, &VAR_10, &VAR_7[5]);
    FUNC_4(&VAR_9, &VAR_8);
    FUNC_8(&VAR_7[6], &VAR_9);
    FUNC_0(&VAR_8, &VAR_10, &VAR_7[6]);
    FUNC_4(&VAR_9, &VAR_8);
    FUNC_8(&VAR_7[7], &VAR_9);

    FUNC_5(VAR_1);

    for (VAR_11 = 255; VAR_11 >= 0; --VAR_11) {
        if (VAR_5[VAR_11] || VAR_6[VAR_11]) {
            break;
        }
    }

    for (; VAR_11 >= 0; --VAR_11) {
        FUNC_6(&VAR_8, VAR_1);

        if (VAR_5[VAR_11] > 0) {
            FUNC_4(&VAR_9, &VAR_8);
            FUNC_0(&VAR_8, &VAR_9, &VAR_7[VAR_5[VAR_11] / 2]);
        } else if (VAR_5[VAR_11] < 0) {
            FUNC_4(&VAR_9, &VAR_8);
            FUNC_9(&VAR_8, &VAR_9, &VAR_7[(-VAR_5[VAR_11]) / 2]);
        }

        if (VAR_6[VAR_11] > 0) {
            FUNC_4(&VAR_9, &VAR_8);
            FUNC_1(&VAR_8, &VAR_9, &VAR_0[VAR_6[VAR_11] / 2]);
        } else if (VAR_6[VAR_11] < 0) {
            FUNC_4(&VAR_9, &VAR_8);
            FUNC_2(&VAR_8, &VAR_9, &VAR_0[(-VAR_6[VAR_11]) / 2]);
        }

        FUNC_3(VAR_1, &VAR_8);
    }
}
