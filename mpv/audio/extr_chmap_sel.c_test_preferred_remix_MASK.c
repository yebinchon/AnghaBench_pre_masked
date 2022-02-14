
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_chmap {int dummy; } ;


 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (struct mp_chmap*,int *) ;
 int FUNC_2 (struct mp_chmap*) ;
 int ** VAR_0 ;

__attribute__((used)) static bool FUNC_3(const struct mp_chmap *VAR_1,
                                 const struct mp_chmap *VAR_2)
{
    struct mp_chmap VAR_3 = *VAR_1, VAR_4 = *VAR_2;
    FUNC_2(&VAR_3);
    FUNC_2(&VAR_4);
    for (int VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
        if (FUNC_1(&VAR_3, &VAR_0[VAR_5][0]) &&
            FUNC_1(&VAR_4, &VAR_0[VAR_5][1]))
            return 1;
    }
    return 0;
}
