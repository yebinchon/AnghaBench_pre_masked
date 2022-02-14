
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int) ;
 unsigned long long FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline int FUNC_3(const char *VAR_0, unsigned long long *VAR_1) {
    char VAR_2[30 + 1];

    int VAR_3 = FUNC_0(VAR_0, VAR_2, 30);
    if(FUNC_2(VAR_3)) {
        *VAR_1 = 0;
        return VAR_3;
    }

    VAR_2[30] = '\0';
    *VAR_1 = FUNC_1(VAR_2);
    return 0;
}
