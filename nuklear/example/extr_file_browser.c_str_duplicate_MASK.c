
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static char*
FUNC_3(const char *VAR_0)
{
    char *VAR_1;
    size_t VAR_2 = FUNC_2(VAR_0);
    if (!VAR_2) return 0;
    VAR_1 = (char*)FUNC_0(VAR_2+1);
    if (!VAR_1) return 0;
    FUNC_1(VAR_1, VAR_0, VAR_2);
    VAR_1[VAR_2] = '\0';
    return VAR_1;
}
