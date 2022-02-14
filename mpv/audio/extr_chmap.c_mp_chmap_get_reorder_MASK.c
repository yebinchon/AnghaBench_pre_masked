
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int num; scalar_t__* speaker; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mp_chmap const*) ;

void FUNC_2(int VAR_1[VAR_0], const struct mp_chmap *VAR_2,
                          const struct mp_chmap *VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
        VAR_1[VAR_4] = -1;

    if (FUNC_1(VAR_2) || FUNC_1(VAR_3)) {
        for (int VAR_5 = 0; VAR_5 < VAR_3->num; VAR_5++)
            VAR_1[VAR_5] = VAR_5 < VAR_2->num ? VAR_5 : -1;
        return;
    }

    for (int VAR_6 = 0; VAR_6 < VAR_3->num; VAR_6++) {
        for (int VAR_7 = 0; VAR_7 < VAR_2->num; VAR_7++) {
            if (VAR_3->speaker[VAR_6] == VAR_2->speaker[VAR_7]) {
                VAR_1[VAR_6] = VAR_7;
                break;
            }
        }
    }

    for (int VAR_8 = 0; VAR_8 < VAR_3->num; VAR_8++)
        FUNC_0(VAR_1[VAR_8] < 0 || (VAR_3->speaker[VAR_8] == VAR_2->speaker[VAR_1[VAR_8]]));
}
