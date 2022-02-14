
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char const*,size_t) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 size_t FUNC_5 (char const*,char*) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static const char *FUNC_7(const char *VAR_0) {
        size_t VAR_1;

        if (FUNC_1(VAR_0))
                return ((void*)0);

        VAR_0 += FUNC_6(VAR_0, "/");

        VAR_1 = FUNC_5(VAR_0, "/");
        if (VAR_1 < FUNC_0("user@x.service"))
                return ((void*)0);

        if (FUNC_2(VAR_0, "user@", 5) == 0 && FUNC_2(VAR_0 + VAR_1 - 8, ".service", 8) == 0) {
                char VAR_2[VAR_1 - 5 - 8 + 1];

                FUNC_3(VAR_2, VAR_0 + 5, VAR_1 - 5 - 8);
                VAR_2[VAR_1 - 5 - 8] = 0;






                if (FUNC_4(VAR_2, ((void*)0)) < 0)
                        return ((void*)0);

                VAR_0 += VAR_1;
                VAR_0 += FUNC_6(VAR_0, "/");

                return VAR_0;
        }

        return ((void*)0);
}
