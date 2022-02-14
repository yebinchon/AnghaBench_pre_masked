
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static
int FUNC_3(cmsUInt32Number VAR_0)
{
    cmsUInt32Number VAR_1 = FUNC_0(VAR_0);

    if (VAR_1 == 0 && FUNC_2(VAR_0))
        return 5;

    if (VAR_1 == 2 && FUNC_2(VAR_0))
        return 3;

    if (VAR_1 == 4 && FUNC_2(VAR_0))
        return 4;
    if (VAR_1 == 2 && !FUNC_2(VAR_0))
        return 1;
    if (VAR_1 == 1 && !FUNC_2(VAR_0))
        return 0;
    if (VAR_1 == 2 && FUNC_1(VAR_0))
        return 3;
    return -1;
}
