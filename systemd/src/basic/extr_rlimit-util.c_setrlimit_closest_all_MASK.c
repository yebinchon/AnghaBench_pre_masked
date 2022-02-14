
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rlimit {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rlimit const* const*) ;
 int FUNC_1 (int,struct rlimit const* const) ;

int FUNC_2(const struct rlimit *const *VAR_1, int *VAR_2) {
        int VAR_3, VAR_4;

        FUNC_0(VAR_1);



        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
                if (!VAR_1[VAR_3])
                        continue;

                VAR_4 = FUNC_1(VAR_3, VAR_1[VAR_3]);
                if (VAR_4 < 0) {
                        if (VAR_2)
                                *VAR_2 = VAR_3;

                        return VAR_4;
                }
        }

        if (VAR_2)
                *VAR_2 = -1;

        return 0;
}
