
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt32Number ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static
cmsUInt32Number FUNC_0(cmsUInt32Number VAR_1, cmsUInt32Number VAR_2, cmsUInt32Number VAR_3)
{
    cmsUInt32Number VAR_4 = 1, VAR_5;

    if (VAR_2 == 0) return 0;
    if (VAR_1 == 0) return 0;

    for (; VAR_3 > 0; VAR_3--) {

        VAR_4 *= VAR_2;


        if (VAR_4 > VAR_0 / VAR_2) return (cmsUInt32Number) -1;

    }

    VAR_5 = VAR_4 * VAR_1;

    if (VAR_4 != VAR_5 / VAR_1) return (cmsUInt32Number) -1;
    return VAR_5;
}
