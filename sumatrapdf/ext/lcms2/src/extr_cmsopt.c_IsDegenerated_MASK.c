
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
struct TYPE_3__ {size_t nEntries; int* Table16; } ;
typedef TYPE_1__ cmsToneCurve ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
cmsBool FUNC_0(const cmsToneCurve* VAR_2)
{
    cmsUInt32Number VAR_3, VAR_4 = 0, VAR_5 = 0;
    cmsUInt32Number VAR_6 = VAR_2 ->nEntries;

    for (VAR_3=0; VAR_3 < VAR_6; VAR_3++) {

        if (VAR_2 ->Table16[VAR_3] == 0x0000) VAR_4++;
        if (VAR_2 ->Table16[VAR_3] == 0xffff) VAR_5++;
    }

    if (VAR_4 == 1 && VAR_5 == 1) return VAR_0;
    if (VAR_4 > (VAR_6 / 20)) return VAR_1;
    if (VAR_5 > (VAR_6 / 20)) return VAR_1;

    return VAR_0;
}
