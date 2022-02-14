
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SIZE_T ;


 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;

__attribute__((used)) static inline char *FUNC_3(const char *VAR_0)
{
    char *VAR_1;
    SIZE_T VAR_2;

    if (!VAR_0)
        return ((void*)0);

    VAR_2 = FUNC_2(VAR_0);
    VAR_1 = FUNC_0(VAR_2 + 1);
    if (VAR_1)
        FUNC_1(VAR_1, VAR_0, VAR_2 + 1);
    return VAR_1;
}
