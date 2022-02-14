
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static inline const char* FUNC_3(int VAR_1) {
        const char *VAR_2;

        if (VAR_1 == VAR_0)
                return "*";

        VAR_2 = FUNC_0(VAR_1);
        if (!VAR_2)
                return "unknown";

        FUNC_1(FUNC_2(VAR_2, "AF_"));
        return VAR_2 + 3;
}
