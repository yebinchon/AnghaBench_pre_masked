
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static bool FUNC_5(const char *VAR_1, size_t VAR_2) {

        if (!VAR_1)
                return 0;

        if (VAR_2 < FUNC_0("x.slice"))
                return 0;

        if (FUNC_2(VAR_1 + VAR_2 - 6, ".slice", 6) == 0) {
                char VAR_3[VAR_2+1], *VAR_4;

                FUNC_3(VAR_3, VAR_1, VAR_2);
                VAR_3[VAR_2] = 0;

                VAR_4 = FUNC_1(VAR_3);

                return FUNC_4(VAR_4, VAR_0);
        }

        return 0;
}
