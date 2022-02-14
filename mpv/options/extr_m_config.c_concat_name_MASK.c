
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 char const* FUNC_1 (void*,char*,char const*,char const*) ;

__attribute__((used)) static const char *FUNC_2(void *VAR_0, const char *VAR_1, const char *VAR_2)
{
    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    if (!VAR_1[0])
        return VAR_2;
    if (!VAR_2[0])
        return VAR_1;
    return FUNC_1(VAR_0, "%s-%s", VAR_1, VAR_2);
}
