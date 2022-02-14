
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef int cmsBool ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static
cmsBool FUNC_1(cmsUInt32Number VAR_2, cmsUInt16Number VAR_3[], cmsUInt16Number VAR_4[] )
{
    cmsUInt32Number VAR_5;

    for (VAR_5=0; VAR_5 < VAR_2; VAR_5++) {

        if (FUNC_0(VAR_3[VAR_5] - VAR_4[VAR_5]) > 0xf000) return VAR_1;
        if (VAR_3[VAR_5] != VAR_4[VAR_5]) return VAR_0;
    }
    return VAR_1;
}
