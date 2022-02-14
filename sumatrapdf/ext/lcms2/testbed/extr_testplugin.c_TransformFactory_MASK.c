
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt32Number ;
typedef int cmsPipeline ;
typedef int cmsContext ;
typedef int cmsBool ;
typedef int _cmsTransformFn ;
typedef int _cmsFreeUserDataFn ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

cmsBool FUNC_0(cmsContext VAR_4, _cmsTransformFn* VAR_5,
                          void** VAR_6,
                           _cmsFreeUserDataFn* VAR_7,
                           cmsPipeline** VAR_8,
                           cmsUInt32Number* VAR_9,
                           cmsUInt32Number* VAR_10,
                           cmsUInt32Number* VAR_11)

{
    if (*VAR_10 == VAR_2)
    {

        *VAR_5 = VAR_3;
        return VAR_1;
    }

    return VAR_0;
}
