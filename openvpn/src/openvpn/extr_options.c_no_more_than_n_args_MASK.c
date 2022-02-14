
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int const VAR_0 ;
 int FUNC_0 (int const,char*,char*,int const,char*,char*) ;
 int FUNC_1 (char const**) ;

__attribute__((used)) static bool
FUNC_2(const int VAR_1,
                    char *VAR_2[],
                    const int VAR_3,
                    const unsigned int VAR_4)
{
    const int VAR_5 = FUNC_1((const char **)VAR_2);

    if (!VAR_5)
    {
        return 0;
    }

    if (VAR_5 > VAR_3)
    {
        FUNC_0(VAR_1, "the --%s directive should have at most %d parameter%s.%s",
            VAR_2[0],
            VAR_3 - 1,
            VAR_3 >= 3 ? "s" : "",
            (VAR_4 & VAR_0) ? "  To pass a list of arguments as one of the parameters, try enclosing them in double quotes (\"\")." : "");
        return 0;
    }
    else
    {
        return 1;
    }
}
