
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt8Number ;
typedef int cmsUInt32Number ;
typedef int cmsBool ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,...) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (int const*,int,int ,int *) ;

cmsBool FUNC_4(const cmsUInt8Number* VAR_2, cmsUInt32Number VAR_3, const char* VAR_4)
{
    FILE* VAR_5 = FUNC_2(VAR_4, "wb");
    if (VAR_5 == ((void*)0)) {
        FUNC_0("Cannot create '%s'", VAR_4);
        return VAR_0;
    }

    if (FUNC_3(VAR_2, 1, VAR_3, VAR_5) != VAR_3) {
        FUNC_0("Cannot write %ld bytes to %s", VAR_3, VAR_4);
        return VAR_0;
    }

    if (FUNC_1(VAR_5) != 0) {
        FUNC_0("Error flushing file '%s'", VAR_4);
        return VAR_0;
    }

    return VAR_1;
}
