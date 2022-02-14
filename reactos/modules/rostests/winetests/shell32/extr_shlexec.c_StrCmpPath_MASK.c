
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char* VAR_0, const char* VAR_1)
{
    if (!VAR_0 && !VAR_1) return 0;
    if (!VAR_1) return 1;
    if (!VAR_0) return -1;
    while (*VAR_0)
    {
        if (!*VAR_1)
        {
            if (*VAR_0=='.')
                VAR_0++;
            return (*VAR_0-*VAR_1);
        }
        if ((*VAR_0=='/' || *VAR_0=='\\') && (*VAR_1=='/' || *VAR_1=='\\'))
        {
            while (*VAR_0=='/' || *VAR_0=='\\')
                VAR_0++;
            while (*VAR_1=='/' || *VAR_1=='\\')
                VAR_1++;
        }
        else if (FUNC_0(*VAR_0)==FUNC_0(*VAR_1))
        {
            VAR_0++;
            VAR_1++;
        }
        else
        {
            return (*VAR_0-*VAR_1);
        }
    }
    if (*VAR_1=='.')
        VAR_1++;
    if (*VAR_1)
        return -1;
    return 0;
}
