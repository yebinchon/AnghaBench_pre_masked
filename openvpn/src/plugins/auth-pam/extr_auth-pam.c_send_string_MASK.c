
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int,char const*,int const) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, const char *VAR_1)
{
    const int VAR_2 = FUNC_0(VAR_1) + 1;
    const ssize_t VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
    if (VAR_3 == VAR_2)
    {
        return (int) VAR_3;
    }
    else
    {
        return -1;
    }
}
