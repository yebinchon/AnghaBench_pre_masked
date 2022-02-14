
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_chmap {scalar_t__* speaker; } ;
struct mp_aframe {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int) ;
 int ** FUNC_2 (struct mp_aframe*) ;
 int FUNC_3 (struct mp_aframe*) ;
 int FUNC_4 (struct mp_aframe*) ;
 int FUNC_5 (struct mp_aframe*) ;
 int FUNC_6 (struct mp_aframe*) ;
 int FUNC_7 (struct mp_aframe*,struct mp_chmap*) ;

__attribute__((used)) static bool FUNC_8(struct mp_aframe *VAR_2, int *VAR_3,
                           struct mp_chmap *VAR_4)
{
    if (!FUNC_7(VAR_2, VAR_4))
        return 0;

    int VAR_5 = FUNC_4(VAR_2);
    uint8_t **VAR_6 = FUNC_2(VAR_2);
    uint8_t *VAR_7[VAR_0];
    FUNC_1(VAR_5 <= VAR_0);
    for (int VAR_8 = 0; VAR_8 < VAR_5; VAR_8++)
        VAR_7[VAR_8] = VAR_6[VAR_8];

    int VAR_9 = 0;
    for (int VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
        VAR_9 += VAR_4->speaker[VAR_10] != VAR_1;

    for (int VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
        int VAR_12 = VAR_3[VAR_11];
        FUNC_1(VAR_12 >= -1 && VAR_12 < VAR_5);
        if (VAR_12 >= 0) {
            VAR_6[VAR_11] = VAR_7[VAR_12];
        } else {
            FUNC_1(VAR_9 < VAR_5);
            VAR_6[VAR_11] = VAR_7[VAR_9++];

            FUNC_0(VAR_6[VAR_11],
                            FUNC_6(VAR_2) * FUNC_5(VAR_2),
                            FUNC_3(VAR_2));
        }
    }

    return 1;
}
