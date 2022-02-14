
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t cmsUInt32Number ;
typedef int cmsUInt16Number ;
typedef int cmsContext ;
struct TYPE_2__ {size_t nCurves; int** Curves; } ;
typedef TYPE_1__ Curves16Data ;


 int FUNC_0 (int ) ;

__attribute__((used)) static
void FUNC_1(cmsContext VAR_0, register const cmsUInt16Number VAR_1[],
                          register cmsUInt16Number VAR_2[],
                          register const void* VAR_3)
{
    Curves16Data* VAR_4 = (Curves16Data*) VAR_3;
    int VAR_5;
    cmsUInt32Number VAR_6;
    FUNC_0(VAR_0);

    for (VAR_6=0; VAR_6 < VAR_4 ->nCurves; VAR_6++) {

         VAR_5 = (VAR_1[VAR_6] >> 8);
         VAR_2[VAR_6] = VAR_4 -> Curves[VAR_6][VAR_5];
    }
}
