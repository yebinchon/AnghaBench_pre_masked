
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt16Number ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,scalar_t__,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

cmsBool FUNC_2(const char *VAR_2, cmsUInt16Number VAR_3, cmsUInt16Number VAR_4, cmsUInt16Number VAR_5)
{
    if ((FUNC_1(VAR_3 - VAR_4) > VAR_5 )) {

        FUNC_0("(%s): Must be %x, But is %x ", VAR_2, VAR_3, VAR_4);
        return VAR_0;
    }

    return VAR_1;
}
