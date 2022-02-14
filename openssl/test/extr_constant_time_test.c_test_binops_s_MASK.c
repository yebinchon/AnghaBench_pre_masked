
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,size_t,size_t,int) ;
 int FUNC_2 (size_t,size_t) ;
 int FUNC_3 (size_t,size_t) ;
 size_t* VAR_3 ;

__attribute__((used)) static int FUNC_4(int VAR_4)
{
    size_t VAR_5 = VAR_3[VAR_4];
    int VAR_6;
    int VAR_7 = 1;

    for (VAR_6 = 0; VAR_6 < (int)FUNC_0(VAR_3); ++VAR_6) {
        size_t VAR_8 = VAR_3[VAR_6];

        if (!FUNC_3(VAR_5, VAR_8)
                || !FUNC_2(VAR_5, VAR_8)
                || !FUNC_1(&VAR_2, "constant_time_lt_s",
                                     VAR_5, VAR_8, VAR_5 < VAR_8)
                || !FUNC_1(&VAR_2, "constant_time_lt_s",
                                     VAR_8, VAR_5, VAR_8 < VAR_5)
                || !FUNC_1(&VAR_1, "constant_time_ge_s",
                                     VAR_5, VAR_8, VAR_5 >= VAR_8)
                || !FUNC_1(&VAR_1, "constant_time_ge_s",
                                     VAR_8, VAR_5, VAR_8 >= VAR_5)
                || !FUNC_1(&VAR_0, "constant_time_eq_s",
                                     VAR_5, VAR_8, VAR_5 == VAR_8)
                || !FUNC_1(&VAR_0, "constant_time_eq_s",
                                     VAR_8, VAR_5, VAR_8 == VAR_5))
            VAR_7 = 0;
    }
    return VAR_7;
}
