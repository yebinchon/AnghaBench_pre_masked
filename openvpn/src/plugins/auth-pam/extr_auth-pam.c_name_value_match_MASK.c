
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int ) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, const char *VAR_1)
{
    while (!FUNC_0(*VAR_0))
    {
        if (*VAR_0 == '\0')
        {
            return 0;
        }
        ++VAR_0;
    }
    return FUNC_2(VAR_1, VAR_0, FUNC_1(VAR_1)) == 0;
}
