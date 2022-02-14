
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cmsUInt32Number ;
typedef scalar_t__ cmsUInt16Number ;
typedef int cmsInt32Number ;
typedef int cmsHTRANSFORM ;
typedef int * cmsHPROFILE ;
typedef scalar_t__ cmsFloat64Number ;
typedef scalar_t__ clock_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int,scalar_t__) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *,int ,int *,int ,int,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,scalar_t__*,scalar_t__*,int) ;
 int VAR_1 ;
 int FUNC_9 (scalar_t__*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static
void FUNC_11(const char * VAR_2, cmsHPROFILE VAR_3, cmsHPROFILE VAR_4, cmsInt32Number VAR_5)
{
    cmsInt32Number VAR_6, VAR_7, VAR_8, VAR_9;
    clock_t VAR_10;
    cmsFloat64Number VAR_11;
    cmsHTRANSFORM VAR_12;
    cmsUInt16Number *VAR_13;
    cmsUInt32Number VAR_14;

    if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
        FUNC_1("Unable to open profiles");

    VAR_12 = FUNC_6(FUNC_0(), VAR_3,
        VAR_0, VAR_4, VAR_0, VAR_5, VAR_1);
    FUNC_5(FUNC_0(), VAR_3);
    FUNC_5(FUNC_0(), VAR_4);
    VAR_14 = 256*256*256 * sizeof(cmsUInt16Number);

    VAR_13 = (cmsUInt16Number *) FUNC_10(VAR_14);

    VAR_9 = 0;
    for (VAR_6=0; VAR_6 < 256; VAR_6++)
        for (VAR_7=0; VAR_7 < 256; VAR_7++)
            for (VAR_8=0; VAR_8 < 256; VAR_8++) {

                VAR_13[VAR_9] = (cmsUInt16Number) ((VAR_6 + VAR_7 + VAR_8) / 3);

                VAR_9++;
            }

    FUNC_3(VAR_2);

    VAR_10 = FUNC_4();

    FUNC_8(FUNC_0(), VAR_12, VAR_13, VAR_13, 256*256*256);

    VAR_11 = FUNC_4() - VAR_10;
    FUNC_9(VAR_13);

    FUNC_2(VAR_14, sizeof(cmsUInt16Number), VAR_11);
    FUNC_7(FUNC_0(), VAR_12);
}
