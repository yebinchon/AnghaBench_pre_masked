
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 struct mp_chmap VAR_1 ;
 struct mp_chmap VAR_2 ;
 int FUNC_1 (struct mp_chmap*,struct mp_chmap const*) ;
 scalar_t__ FUNC_2 (struct mp_chmap*,struct mp_chmap const*) ;
 int FUNC_3 (struct mp_chmap*,struct mp_chmap*) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_4(const struct mp_chmap *VAR_4, const struct mp_chmap *VAR_5)
{
    int VAR_6 = VAR_0;

    for (int VAR_7 = -1; VAR_7 < (int)FUNC_0(VAR_3); VAR_7++) {
        struct mp_chmap VAR_8 = *VAR_4;
        if (VAR_7 >= 0) {
            struct mp_chmap *VAR_9 = (struct mp_chmap *)VAR_3[VAR_7];
            if (!FUNC_3(&VAR_8, VAR_9))
                continue;
        }
        int VAR_10 = FUNC_1(&VAR_8, VAR_5);
        if (VAR_10 < VAR_6)
            VAR_6 = VAR_10;
    }




    struct mp_chmap VAR_11 = VAR_1;
    struct mp_chmap VAR_12 = VAR_2;
    if (FUNC_2(&VAR_11, VAR_5) && FUNC_2(&VAR_12, VAR_4))
        VAR_6 = 0;

    return VAR_6;
}
