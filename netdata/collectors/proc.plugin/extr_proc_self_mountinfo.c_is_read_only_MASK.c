
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 size_t FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,int) ;
 scalar_t__ FUNC_3 (char const*,char*) ;

__attribute__((used)) static inline int FUNC_4(const char *VAR_0) {
    if(!VAR_0) return 0;

    size_t VAR_1 = FUNC_1(VAR_0);
    if(VAR_1 < 2) return 0;
    if(VAR_1 == 2) {
        if(!FUNC_0(VAR_0, "ro")) return 1;
        return 0;
    }
    if(!FUNC_2(VAR_0, "ro,", 3)) return 1;
    if(!FUNC_2(&VAR_0[VAR_1 - 3], ",ro", 3)) return 1;
    if(FUNC_3(VAR_0, ",ro,")) return 1;
    return 0;
}
