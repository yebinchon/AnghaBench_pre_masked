
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef double cmsFloat64Number ;


 int FUNC_0 (char*,char*,double) ;

__attribute__((used)) static
const char* FUNC_1(cmsUInt32Number VAR_0)
{
    static char VAR_1[1024];

    if (VAR_0 > 1024*1024) {
        FUNC_0(VAR_1, "%g Mb", (cmsFloat64Number) VAR_0 / (1024.0*1024.0));
    }
    else
        if (VAR_0 > 1024) {
            FUNC_0(VAR_1, "%g Kb", (cmsFloat64Number) VAR_0 / 1024.0);
        }
        else
            FUNC_0(VAR_1, "%g bytes", (cmsFloat64Number) VAR_0);

    return VAR_1;
}
