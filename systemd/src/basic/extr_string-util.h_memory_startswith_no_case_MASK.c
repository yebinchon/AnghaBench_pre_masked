
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void uint8_t ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (void const*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static inline void *FUNC_3(const void *VAR_0, size_t VAR_1, const char *VAR_2) {
        size_t VAR_3, VAR_4;

        FUNC_1(VAR_2);

        VAR_3 = FUNC_2(VAR_2);
        if (VAR_1 < VAR_3)
                return ((void*)0);

        FUNC_1(VAR_0);

        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
                if (FUNC_0(((char *)VAR_0)[VAR_4]) != FUNC_0(VAR_2[VAR_4]))
                        return ((void*)0);
        }

        return (uint8_t*) VAR_0 + VAR_3;
}
