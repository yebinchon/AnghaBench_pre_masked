
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static inline bool FUNC_1(const char *VAR_0, const char *VAR_1) {
        if (!VAR_1) {
                FUNC_0("Missing argument for %s= kernel command line switch, ignoring.", VAR_0);
                return 1;
        }

        return 0;
}
