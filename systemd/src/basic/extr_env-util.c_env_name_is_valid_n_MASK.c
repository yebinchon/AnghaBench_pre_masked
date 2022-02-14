
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const char *VAR_2, size_t VAR_3) {
        const char *VAR_4;

        if (!VAR_2)
                return 0;

        if (VAR_3 <= 0)
                return 0;

        if (VAR_2[0] >= '0' && VAR_2[0] <= '9')
                return 0;






        if (VAR_3 > (size_t) FUNC_1(VAR_1) - 2)
                return 0;

        for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_3; VAR_4++)
                if (!FUNC_0(VAR_0, *VAR_4))
                        return 0;

        return 1;
}
