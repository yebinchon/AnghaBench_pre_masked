
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static inline char *FUNC_3(const char *VAR_0, size_t VAR_1)
{
    char *VAR_2;
    size_t VAR_3 = FUNC_1 (VAR_0);
    if (VAR_1 < VAR_3)
        VAR_3 = VAR_1;
    VAR_2 = (char *) FUNC_0 (VAR_3 + 1);
    if (!VAR_2)
        return 0;
    VAR_2[VAR_3] = '\0';
    return (char *) FUNC_2 (VAR_2, VAR_0, VAR_3);
}
