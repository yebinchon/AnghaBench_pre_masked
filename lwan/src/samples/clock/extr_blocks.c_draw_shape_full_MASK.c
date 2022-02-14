
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum shape { ____Placeholder_shape } shape ;
typedef enum rotation { ____Placeholder_rotation } rotation ;
typedef enum color { ____Placeholder_color } color ;


 unsigned int** VAR_0 ;

__attribute__((used)) static void FUNC_0(enum shape VAR_1,
                            enum color VAR_2,
                            int VAR_3,
                            int VAR_4,
                            int VAR_5,
                            int VAR_6,
                            enum rotation VAR_7,
                            unsigned char *VAR_8)
{
    unsigned int VAR_9 = VAR_0[VAR_1][VAR_7];
    const int VAR_10 = VAR_5 * VAR_6;

    for (int VAR_11 = 0; VAR_11 < 4; VAR_11++) {
        int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;

        VAR_12 = ((int)(VAR_9 & 7)) - 3;
        VAR_9 >>= 3;
        VAR_13 = ((int)(VAR_9 & 7)) - 3;
        VAR_9 >>= 5;

        VAR_14 = VAR_3 + VAR_13;
        VAR_15 = VAR_4 + VAR_12;
        VAR_16 = VAR_15 * 32 + VAR_14;

        if (VAR_16 >= 0 && VAR_16 < VAR_10 && VAR_14 < VAR_5)
            VAR_8[VAR_16] = (unsigned char)VAR_2;
    }
}
