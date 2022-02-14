
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsFloat64Number ;
typedef scalar_t__ cmsBool ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static
void FUNC_1(cmsInt32Number VAR_0, cmsUInt16Number VAR_1[], cmsBool VAR_2)
{
    cmsInt32Number VAR_3;

    for (VAR_3=0; VAR_3 < VAR_0; VAR_3++) {
        cmsFloat64Number VAR_4 = (cmsFloat64Number) ((cmsFloat64Number) 65535.0 * VAR_3 ) / (VAR_0-1);

        VAR_1[VAR_2 ? (VAR_0 - VAR_3 - 1) : VAR_3 ] = (cmsUInt16Number) FUNC_0(VAR_4 + 0.5);
    }
}
