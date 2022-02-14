
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int,int) ;
 unsigned int* VAR_3 ;

__attribute__((used)) static int FUNC_2(int VAR_4)
{
    unsigned int VAR_5 = VAR_3[VAR_4];
    int VAR_6;
    int VAR_7 = 1;

    for (VAR_6 = 0; VAR_6 < (int)FUNC_0(VAR_3); ++VAR_6) {
        unsigned int VAR_8 = VAR_3[VAR_6];

        if (!FUNC_1(&VAR_2, "constant_time_lt_8",
                                     VAR_5, VAR_8, VAR_5 < VAR_8)
                || !FUNC_1(&VAR_2, "constant_time_lt_8",
                                     VAR_8, VAR_5, VAR_8 < VAR_5)
                || !FUNC_1(&VAR_1, "constant_time_ge_8",
                                     VAR_5, VAR_8, VAR_5 >= VAR_8)
                || !FUNC_1(&VAR_1, "constant_time_ge_8",
                                     VAR_8, VAR_5, VAR_8 >= VAR_5)
                || !FUNC_1(&VAR_0, "constant_time_eq_8",
                                     VAR_5, VAR_8, VAR_5 == VAR_8)
                || !FUNC_1(&VAR_0, "constant_time_eq_8",
                                     VAR_8, VAR_5, VAR_8 == VAR_5))
            VAR_7 = 0;
    }
    return VAR_7;
}
