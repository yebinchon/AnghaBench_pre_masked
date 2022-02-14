
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, const char VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;

    if (FUNC_0(!FUNC_1(*VAR_1)))
        return -VAR_0;
    if (FUNC_0(!FUNC_1(*(VAR_1 + 1))))
        return -VAR_0;
    if (FUNC_0(*(VAR_1 + 2) != VAR_2))
        return -VAR_0;

    VAR_5 = (*VAR_1 - '0') * 10;
    VAR_5 += *(VAR_1 + 1) - '0';

    if (FUNC_0(VAR_5 < VAR_3 || VAR_5 > VAR_4))
        return -VAR_0;

    return VAR_5;
}
