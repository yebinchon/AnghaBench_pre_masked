
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;


 int FUNC_0 (struct buffer*,char const*,int const) ;
 int FUNC_1 (struct buffer*,int const) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static bool
FUNC_3(struct buffer *VAR_0, const char *VAR_1, const int VAR_2)
{
    const int VAR_3 = FUNC_2(VAR_1) + 1;
    if (VAR_3 < 1 || (VAR_2 >= 0 && VAR_3 > VAR_2))
    {
        return 0;
    }
    if (!FUNC_1(VAR_0, VAR_3))
    {
        return 0;
    }
    if (!FUNC_0(VAR_0, VAR_1, VAR_3))
    {
        return 0;
    }
    return 1;
}
