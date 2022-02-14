
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {scalar_t__ num; scalar_t__* speaker; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct mp_chmap*) ;

__attribute__((used)) static bool FUNC_2(struct mp_chmap *VAR_0, struct mp_chmap VAR_1[2])
{
    FUNC_0(VAR_1[0].num == VAR_1[1].num);
    if (!FUNC_1(VAR_0))
        return 0;
    for (int VAR_2 = 0; VAR_2 < 2; VAR_2++) {
        int VAR_3 = VAR_2 ? 0 : 1;
        int VAR_4 = VAR_2 ? 1 : 0;
        bool VAR_5 = 0;
        struct mp_chmap VAR_6 = *VAR_0;
        for (int VAR_7 = 0; VAR_7 < VAR_6.num; VAR_7++) {
            for (int VAR_8 = 0; VAR_8 < VAR_1[0].num; VAR_8++) {
                if (VAR_6.speaker[VAR_7] == VAR_1[VAR_3].speaker[VAR_8]) {
                    VAR_6.speaker[VAR_7] = VAR_1[VAR_4].speaker[VAR_8];
                    VAR_5 = 1;
                    break;
                }
            }
        }
        if (VAR_5 && FUNC_1(&VAR_6)) {
            *VAR_0 = VAR_6;
            return 1;
        }
    }
    return 0;
}
