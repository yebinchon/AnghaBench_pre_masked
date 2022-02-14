
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsFloat64Number ;
typedef int cmsContext ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (int ,int ,int ,char const*) ;
 int VAR_1 ;

__attribute__((used)) static
cmsFloat64Number FUNC_3(cmsContext VAR_2, const char* VAR_3, cmsFloat64Number VAR_4)
{
    const char* VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_0, VAR_3);

    if (VAR_5 == ((void*)0))
        FUNC_0("Field '%s' not found", VAR_3);

    return FUNC_1(VAR_5) / VAR_4;

}
