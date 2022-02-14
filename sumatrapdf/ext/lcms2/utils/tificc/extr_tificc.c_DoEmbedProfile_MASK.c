
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ cmsUInt8Number ;
typedef scalar_t__ cmsUInt32Number ;
typedef scalar_t__ cmsInt32Number ;
typedef int TIFF ;
typedef int FILE ;


 int FUNC_0 (char*,scalar_t__,char const*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int ,scalar_t__,scalar_t__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (scalar_t__*,int,size_t,int *) ;
 int FUNC_7 (scalar_t__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;

__attribute__((used)) static
void FUNC_9(TIFF* VAR_1, const char* VAR_2)
{
    FILE* VAR_3;
    cmsInt32Number VAR_4;
    cmsUInt32Number VAR_5;
    cmsUInt8Number* VAR_6;

    VAR_3 = FUNC_5(VAR_2, "rb");
    if (VAR_3 == ((void*)0)) return;

    VAR_4 = FUNC_3(VAR_3);
    if (VAR_4 < 0) return;

    VAR_6 = (cmsUInt8Number*) FUNC_8(VAR_4 + 1);
    if (VAR_6 == ((void*)0)) {
        FUNC_1(VAR_4+1);
        return;
    }

    VAR_5 = (cmsUInt32Number) FUNC_6(VAR_6, 1, (size_t) VAR_4, VAR_3);

    if (VAR_5 != VAR_4)
        FUNC_0("Cannot read %ld bytes to %s", VAR_4, VAR_2);

    FUNC_4(VAR_3);
    VAR_6[VAR_5] = 0;

    FUNC_2(VAR_1, VAR_0, VAR_5, VAR_6);
    FUNC_7(VAR_6);
}
