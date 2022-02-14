
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsFloat64Number ;
typedef int cmsBool ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

cmsBool FUNC_2(const char *VAR_3, cmsFloat64Number VAR_4, cmsFloat64Number VAR_5, cmsFloat64Number VAR_6)
{
    cmsFloat64Number VAR_7 = FUNC_1(VAR_4 - VAR_5);

    if (VAR_7 > VAR_1) VAR_1 = VAR_7;

        if ((VAR_7 > VAR_6 )) {

              FUNC_0("(%s): Must be %f, But is %f ", VAR_3, VAR_4, VAR_5);
              return VAR_0;
              }

       return VAR_2;
}
