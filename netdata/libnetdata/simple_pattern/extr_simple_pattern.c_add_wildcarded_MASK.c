
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static inline char *FUNC_3(const char *VAR_0, size_t VAR_1, char *VAR_2, size_t *VAR_3) {






    if(FUNC_2(VAR_2 && *VAR_3 && VAR_0 && *VAR_0 && VAR_1)) {
        size_t VAR_4 = *VAR_3 - 1;
        size_t VAR_5 = (VAR_1 < VAR_4)?VAR_1:VAR_4;
        if(FUNC_0(VAR_5)) {
            FUNC_1(VAR_2, VAR_0, VAR_5);

            *VAR_3 -= VAR_5;
            return &VAR_2[VAR_5];
        }
    }

    return VAR_2;
}
