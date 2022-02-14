
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
typedef size_t cmsUInt16Number ;
typedef int cmsContext ;
struct TYPE_2__ {size_t nCurves; size_t** Curves; } ;
typedef TYPE_1__ Curves16Data ;


 int FUNC_0 (int ) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, register const cmsUInt16Number VAR_1[],
                          register cmsUInt16Number VAR_2[],
                          register const void* VAR_3)
{
    Curves16Data* VAR_4 = (Curves16Data*) VAR_3;
    cmsUInt32Number VAR_5;
    FUNC_0(VAR_0);

    for (VAR_5=0; VAR_5 < VAR_4 ->nCurves; VAR_5++) {
         VAR_2[VAR_5] = VAR_4 -> Curves[VAR_5][VAR_1[VAR_5]];
    }
}
